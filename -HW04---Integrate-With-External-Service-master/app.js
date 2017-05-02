var express = require('express');
var app = express();
var bodyParser = require('body-parser');
var mongoose = require('mongoose');


app.use(express.static(__dirname+'/client'));
//middleware to initialise body parser
app.use(bodyParser.json());

Movie = require('./models/movie');
Genre = require('./models/genre');

//connect to Mongoose
mongoose.connect('mongodb://127.0.0.1/bollywooddbs');
var db = mongoose.connection;

app.get('/',function(req,res){
	res.send('Please use /api/movie or /api/genre');
});

/*
app.get('/api/rsdl', function(req, res){
  var file = __dirname + '/views/RSDL1.xml';

  res.download(file); // Set disposition and send it.
});
*/
//RSDL documentation
/*
app.get('/api/rsdl',function(req,res){
	Movie.getRsdl(function(err, movies){
		if(err){
				throw err;
			} 
			var x = "Chakresh";
			x.push.res();
			
			//res.json(movies);
	});
});*/

//MOVIES
app.get('/api/movie',function(req,res){
	Movie.getMovies(function(err, movies){
		if(err){
				throw err;
			}
			res.json(movies);
	});
});

app.get('/api/movie/:_id',function(req,res){
	Movie.getMovieById(req.params._id, function(err, movie){
		if(err){
				throw err;
			}
			res.json(movie);
	});
});
 
app.post('/api/movie',function(req,res){
	console.log("Inside app.post...");
	var movie = req.body;
	Movie.addMovie(movie, function(err, movies){
		if(err){
			console.log("Error in insertion in the DB.");
				throw err;
			}
			console.log("Successful insertion in the DB.");
			console.log(res.json(movies));
			res.json(movies);
	});
});
app.put('/api/movie/:_id',function(req,res){
	var id = req.params._id;
	var movie = req.body;
		Movie.updateMovie(id, movie, {}, function(err, movies){
			if(err){
				
				throw err;
			}
			res.json(movies);
		});
});
app.delete('api/movie/:_id', function(req, res){
	var id = req.params._id;
	console.log('Inside delete in app.js');
	Movie.removeMovie(id, function(err, movies){
		if(err){
				throw err;
			}
			res.json(movies);
	});
});
//GENRES------------------------------
app.get('/api/genre',function(req,res){
	Genre.getGenres(function(err, genres){
		if(err){
				throw err;
			}
			res.json(genres);
	});
});
app.post('/api/genre',function(req,res){
	var genre = req.body;
	Genre.addGenre(function(err, genre){
		if(err){
				throw err;
			}
			res.json(genres);
	});
});
app.put('/api/genre/:_id',function(req,res){
	var id = req.params._id;
	var genre = req.body;
		Genre.updateGenre(id, genre, {}, function(err, genres){
			if(err){
				throw err;
			}
			res.json(genres);
		});
});

app.delete('api/genre/:._id', function(req, res){
	var id = req.params._id;
	Genre.removeGenres(id, function(err, genres){
		if(err){
				throw err;
			}
			res.json(genres);
	});
});

//Listen on port 3000
app.listen(1243);
console.log('Running on port 1243...');
