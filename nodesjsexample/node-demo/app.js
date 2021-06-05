var express=require("express");
var app=express();
var mongoose = require("mongoose");
var bodyParser = require('body-parser');
app.use(bodyParser.json());
app.use(bodyParser.urlencoded({ extended: true }));
mongoose.Promise = global.Promise;
mongoose.connect("mongodb://localhost:27017/node-demo");
var student=new mongoose.Schema({
		firstName:string,
		lastName:string
});
var studentdata=mongoose.model("studentdata",student);
app.get('/',(req,res)=>{
		res.send("hello world!");
		res.end();
	});
app.post("/addname", (req, res) => {
 var myData = new User(req.body);
 myData.save()
 .then(item => {
 res.send("item saved to database");
 })
 .catch(err => {
 res.status(400).send("unable to save to database");
 });
});

app.listen(3000,()=>{
      console.log("server is listening to 3000");
     });
