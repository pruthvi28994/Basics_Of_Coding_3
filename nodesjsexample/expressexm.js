var express=require("express");
var app=express();


app.get('/hello',function(req,res){						// '/' is url for the file
		res.send("this using express.js webframework for nodejs");
		res.end();
});
app.listen(9000);
