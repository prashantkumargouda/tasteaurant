const express = require('express') ;

const app = express() ;

app.use(express.json()) ;
app.use(express.urlencoded({extended : true})) ;


app.use(function(req, res, next) {
    console.log("Middleware chal gaya") ;
    next() ;
})

app.use(function(req,res,next) {
    console.log("MIddle ware ek aur baar chala diya") ;
    next() ;
})

app.get("/" , function(req,res){
    res.send("Hello world This is / route") ;
})

app.get("/about" , (req,res)=>{
    res.send("Hello world this is Prashant in the about page") ;
})

app.get("/profle" , (req , res){
    res.send("hello world this is Prashants profile") ;
})

app.get("/profile" , (req,res,next)=>{
    return next(new Error("something went wrong"));
})

app.use(function(err , req , res , next ) {
    console.error(err.stack) ;
    res.status(500).send("Dont know what happened") ;
})


app.listen(3000) ;
