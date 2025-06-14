const express = require('express') ;
const app = express() ;
const fs = require('fs') ;
const path = require('path') ;

app.set('view engine' , 'ejs') ;
app.use(express.json()) ;
app.use(express.urlencoded({extended : true})) ;
app.use(express.static(path.join(__dirname , 'public'))) ;

app.get("/" , function(req ,res) {
    fs.readdir('./files' , function(err , files) {
        res.render('index.ejs' , {files : files}) ;
    }) 
}) 

app.listen(3000) ;

