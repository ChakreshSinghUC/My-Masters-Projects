var mongoose = require('mongoose');
// Genre Schema for the application
var genreSchema = mongoose.Schema({
	name:{
		type: String,
		required: true
	},
	create_date:{
		type: Date,
		default: Date.now
	}
});

var Genre = module.exports = mongoose.model('Genre', genreSchema);

//get all genres
module.exports.getGenres = function(callback, limit){
	Genre.find(callback).limit(limit);
}
// add genre
module.exports.addGenre = function(genre, callback){
	Genre.create(genre, callback);
}
//update genre
module.exports.updateGenre = function(id, genre, options, callback){
	var query = {_id: id};
	var update = {
		name: genre.name
	}
	Genre.findOneAndUpdate(query, update, options, callback);
}
//remove genre
module.exports.removeGenre = function(id, callback){
	var query = {_id: id};
	Genre.remove(query, callback);
}