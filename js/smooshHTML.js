var shell = require('shelljs');

shell.cat(["tophalf.txt", process.argv[2], "bottomhalf.txt"]);
