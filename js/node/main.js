var garble = require("./garble");

// Index 2 holds the first actual comand-line argument
var argument = process.argv[2];

console.log(garble(argument));
