var myApp = angular.module('myApp');

myApp.controller('GenreController', ['$scope', '$http', '$location', function($scope, $http, $location){
	console.log('Genre Controller loaded...');
	$scope.getGenres = function(){
		console.log('Inside genre http');
		$http.get('/api/genre').success(function(response){
		$scope.genres = response;
		});
	}
	console.log('ExitGenre');
}]);
