const express = require('express')
const app = express()
const port = 3000


app.use(express.static("public"))

app.get('/', (req, res) => {
  res.send('Hello World!')
})

app.post('/',(req,res) => {
    console.log("Hey its a post request") 
    res.send("Hello world post!") 
})

app.put('/' , (req,res) => {
    console.log("hey its a put request") 
    res.send("Hello world put")
})

app.get('/index' , (req,res) => {
    console.log("hey its index") 
    res.sendFile('templates/index.html' , {root:__dirname})
})


app.get('/api' , (req,res) => {
    console.log("this is api") 
    res.json({a:1 , b:2 , c:3 , d:4})  
})

app.listen(port, () => {
  console.log(`Example app listening on port ${port}`)
})