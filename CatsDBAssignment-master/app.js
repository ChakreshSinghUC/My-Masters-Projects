var express = require('express');
var app = express();
var bodyParser = require('body-parser');
var mysql = require("mysql");

app.use(express.static(__dirname+'/client'));
app.use(bodyParser.json());
Cats = require('./models/cats');

// First you need to create a connection to the db
var con = mysql.createConnection({
  host: "localhost",
  user: "root",
  password: ""
});
//
con.connect(function(err){
 if(err){
	console.log('Error connecting to Db');
	return;
 	}
});
app.get('/', function(req, res){
	res.send('Hello World!');
});
app.get('/api/cats',function(req,res){
	Cats.getCats(function(err, cats){
		if(err){
				throw err;
			}
			res.json(cats);
	});
});
app.get('/api/cats/:_id', function(req, res){
	Cats.getCatById(req.params._id, function(err, cat){
	if(err)
	{
		throw err;
	}
		res.json(cat);
	});	
});

app.listen(3000);
console.log('Port 3000 is running.. ');
