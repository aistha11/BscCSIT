app.controller('AddNumController', function ($scope) {
    $scope.heading = "Adding two numbers using Angular Js";
   
    $scope.AddNumbers = function () {
        var a = Number($scope.a || 0);
        var b = Number($scope.b || 0);
        $scope.sum = a + b;
    }
});