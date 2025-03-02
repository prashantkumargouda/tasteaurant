const express = require('express')
const app = express()
const port = 3000

app.get('/', (req, res) => {
  res.send('Hello World!')
})


app.post('/' , (res,req) => {
    console.log("this is post") 
    res.send("this is for post") 
})


app.listen(port, () => {
  console.log(`Example app listening on port ${port}`)
})