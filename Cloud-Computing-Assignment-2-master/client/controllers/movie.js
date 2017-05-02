var myApp = angular.module('myApp');

myApp.controller('MoviesController', ['$scope', '$http', '$location', '$routeParams', function($scope, $http, $location, $routeParams)

{
	console.log('MoviesController loaded...');
	$scope.getMovies = function(){
		$http.get('/api/movie').success(function(response){
		$scope.movies = response;
		console.log('testing');
		});
	}
	$scope.getMovie = function(){
		var id = $routeParams.id;
		$http.get('/api/movie/'+id).success(function(response){
		$scope.movie = response;
		console.log('get movie');
		});
	}
	$scope.addMovie = function(){
		console.log("Inside addMovie");
		$http.post('/api/movie/', $scope.movie).then(function(successCallback, errorCallback){
		if(errorCallback){
			console.log(errorCallback);
			throw errorCallback;
		} 
		console.log($scope.movie);
		console.log("Exiting the Movies Controller...");
		window.location.href='#/movies';
		
		});
	}
	$scope.updateMovie = function(){
		var id = $routeParams.id;
		$http.put('/api/movie/'+id, $scope.movie).success(function(response){
			window.location.href='#/movies';
		});
	}

	$scope.removeMovie = function(id){
		console.log("Inside removeMovie id"+$routeParams.id);
		$http.delete('/api/movie/'+$routeParams.id).then(function(successCallback, errorCallback){
					if(errorCallback){
			console.log(errorCallback);
			throw errorCallback;
		} 
					window.location.href='#/movies';
		
		});	
	}
	$scope.getMovie = function(){
		console.log("Inside addMovie");
		$http.get('/api/rsdl/', $scope.movie).then(function(successCallback, errorCallback){
			if(err){
				console.log(err);
				throw err;
				} 
			});
		}		
}]);