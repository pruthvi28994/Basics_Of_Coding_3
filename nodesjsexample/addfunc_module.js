var fs = require('fs');
 // add a new function, printMessage(), to the module
fs.printMessage = function(str){
    console.log("Message from newly added function to the module");
    console.log(str);
}
 // re-export the module for changes to take effect
module.exports = fs
 // you may use the newly added function
fs.printMessage("Success");

