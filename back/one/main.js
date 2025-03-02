const fs = require("fs") ;

// console.log(fs) ;


// console.log("starting") ;
// fs.writeFileSync("prashant.txt" , "fuck off fuck this world") ;
// console.log("ending") ;


// console.log("starting") ;

// fs.writeFile("prashant2.txt" , "Prashant is a good boy" , () => {
//     console.log("done") ;
// }) ;

// console.log('ending') ;


console.log("starting") 

fs.writeFile("prashant2.txt" , "prashant is a good boy" , () => {
    console.log("done") 
    fs.readFile("prashant2.txt" , (error,data) => {
        if(error) {
            console.log("error is :" , error)  ;
            return ;
        } 
        console.log(data.toString()) 
    })
}) 

fs.appendFile("prashant2.txt" , " Prashant ko banaya usne 'c' " , (error, data) => {
    if(error) {
        console.log(error) ;
        return ;
    }
    console.log(data) ;

} )
console.log("ending") 
