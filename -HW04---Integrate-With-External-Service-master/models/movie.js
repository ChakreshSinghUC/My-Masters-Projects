var mongoose = require('mongoose');
// Movie Schema
var movieSchema = mongoose.Schema({
	title:{
		type: String,
		required: true
	},
	stars:{
		type: String
	},
	description:{
		type: String
		},
	music:{
		type: String
	},
	director:{
		type: String,
		required: true
	},
	producer:{
		type: String
	},
	image_url:{
		type: String
	},
	genre:{
		type: String,
		required: true
	},
	youtube_url:{
		type: String
	},
	create_date:{
		type: Date,
		default: Date.now
	}
});

var Movie = module.exports = mongoose.model('Movie', movieSchema);

//get Movie

module.exports.getMovies = function(callback, limit){
	Movie.find(callback).limit(limit);
}
//get single movie
module.exports.getMovieById = function(id, callback){
	Movie.findById(id, callback);
}


// add movie
module.exports.addMovie = function(movies, callback){
	Movie.create(movies, callback);
}
//update movie
module.exports.updateMovie = function(id, movies, options, callback){
	var query = {_id: id};
	var update = {
		title: movies.title,
		stars: movies.stars,
		description: movies.description,
		music: movies.music,
		director: movies.director,
		producer: movies.producer,
		image_url: movie.image_url,
		genre: movies.genre,
		youtube_url: movies.youtube_url
	}
	Movie.findOneAndUpdate(query, update, options, callback);
}

// Delete Movie
module.exports.removeMovie = function(id, callback){
	var query = {_id: id};
	Movie.remove(query, callback);
}

module.exports.getRsdl = function(){
	
}