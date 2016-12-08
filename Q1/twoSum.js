var i = 0;
var j = 0;
var input = [2, 7, 11, 15];
var target = 9;
findIndex(input, target);
function findIndex(input, target) {
	hashmap = {};
	result = [];
	input.forEach( function(element, index) {
		hashmap[element] = index;
		console.log("hashmap[" + element + "] = " + index);
	});

	input.forEach( function(element, index) {
		if ( hashmap[target - element] != undefined) {
			result.push( hashmap[target - element] )
		}
	});
	console.log(result);

}

