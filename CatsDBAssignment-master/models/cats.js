var mongoose = require('mysql');
// Cats Schema
var catsSchema = mysql.Schema({
	jobID:{
		type: String,
		required: true
	},
	objID:{
		type: String
	},
	revisionNum:{
		type: String
		},
	timestamp:{
		type: String
	},
	details:{
		type: String
	}
});

var Cats = module.exports = mongoose.model('Cats', catsSchema);

//get cats

module.exports.getMovies = function(callback, limit){
	Cats.find(callback).limit(limit);
}
//get single cat
module.exports.getCatById = function(id, callback){
	Cats.findById(id, callback);
}


