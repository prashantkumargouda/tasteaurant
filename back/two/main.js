const express = require("express");
const app = express();
const port = 3000;


app.use(express.static('public')) // give the public access for files in your backend you should not give this access or else it will create a blunder


app.get("/", (req, res) => {
  res.send("Hello World! Prashant Kumar");
});

app.get("/Home", (req, res) => {
  res.send("Hello World! welcome to Home Page");
});


app.get("/About", (req, res) => {
  res.send("Hello World!About us");
});


app.get('/Contact', (req, res) => {
    res.send('Hello World!  Contact Us')
})

app.get('/Services' , (req,res) => {
    res.send("hello world these are the services we provide")
})

app.get('/Blog' , (req,res) => {
    res.send("hello world this is my blog") 
})

app.get('/blog/:slug' , (req,res) => {
    // for URl http://127.0.0.1:3000/blog/intro-to-python?mode=dark&region=in
    console.log(req.params) // 
    console.log(req.query) 
    res.send(`hello ${req.params.slug} `)
})

app

// app.get('/blog/intro-to-cpp' ,(req,res)=> {
//     res.send("hello world this is intro to Cpp") 
// } )

// app.get('/blog/intro-to-python',(req,res) => {
//     // logic to fetch intro to python from db 
//     res.send("hello world this is intro to python") 
// } ) 

app.listen(port, () => {
  console.log(`Example app listening on port ${port}`);
});
