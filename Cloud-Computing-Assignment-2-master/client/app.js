var myApp = angular.module('myApp', ['ngRoute']);

myApp.config(function($routeProvider){
	$routeProvider.when('/', {
		controller: 'MoviesController',
		templateUrl: 'views/movie.html'
	})
	.when('/movies', {
		controller: 'MoviesController',
		templateUrl: 'views/movie.html'
	})
	.when('/movie/details/:id', {
		controller: 'MoviesController',
		templateUrl: 'views/movie_detail.html'
	})
	.when('/movie/add' , {
		controller: 'MoviesController',
		templateUrl:'views/add_movie.html'
	})
	.when('/movie/edit/:id' , {
		controller: 'MoviesController',
		templateUrl: 'views/edit_movie.html'
	})
	.when('/genres' , {
		controller: 'GenreController',
		templateUrl: 'views/genre.html'
	})
	.when('' , {
		controller: 'MoviesController',
		templateUrl: 'views/movie.html'
	})
	.when('/api/rsdl' , {
		controller: 'MoviesController',
		templateUrl: 'views/rsdl.html'
	})
	.otherwise({
		redirectTo: '/'	
	})
});
