const express = require('express')
const app = express()
const port = 3000

app.use(express.static("public"))

app.get('/', (req, res) => {
    console.log("hello this is get")
    res.send('Hello World! get')
})

app.post('/',(req,res) => {
    console.log("Hey its a post request") 
    res.send("Hello world post!") 
})


app.listen(port, () => {
  console.log(`Example app listening on port ${port}`)
})