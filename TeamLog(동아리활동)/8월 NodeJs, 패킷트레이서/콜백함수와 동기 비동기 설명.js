/*
var a = [2,1,3]
var b = [5,4,6]

a.sort(a,b,()=>{
	console.log(a)
})

b.sort(()=>{
	console.log(b)
})
*/

/*
var express = require('express');
var app = express();

app.listen(3000,function(req,res){
	console.log('ok');
})

app.get('/',function(req,res){
	res.send('asdf');
})*/
//localhost:3000

var express = require('express');
var app = express();

app.listen(1234,function(req,res){
	console.log('ok');
})
app.get('/',function(req,res){
	res.send('.');
})
app.get('/teamlog',function(req,res){
	res.send('집에가자');
})
//localhost:1234
//localhost:1234/teamlog