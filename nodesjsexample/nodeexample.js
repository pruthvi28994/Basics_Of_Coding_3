var http=require("http");
var fs=require("fs");
http.createServer(function(req,res){
       fs.readFile('demoreadfile.html',function(err,data){
	res.writeHead(200,{'content-type':'text/html'});
	if(err)
	     console.log(err);
	else
	     res.write(data)
	res.end("hello world");
      })
       fs.appendFile('mytextfile.txt','Hello world appending file',function(err){
           if(err) throw err;
           console.log("saved!");
        })
       fs.writeFile('mytextfile.txt','this overwrtiing',function(err,file){
          if(err) throw err;
          console.log('write updated');
        })
}).listen(1337);
