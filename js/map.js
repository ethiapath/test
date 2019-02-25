// ummm how do you javascript?
//
// 2am.....
// yeah
// 06/10/2017

console.log("hello world");

var x = 32;
console.log(x);

var doubleIt = function( a ) {
    return a*2;
}
console.log( doubleIt( 50 ) );

var anArray = [ 2, 4, 8, 16, 32, 3 ];

var doubleArray = anArray.map( doubleIt );

// cool
console.log( anArray, "doubled array" , anArray.map( doubleIt ) );

