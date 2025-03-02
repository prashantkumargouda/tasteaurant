import fs from "fs/promises" 

let a = await fs.readFile("prashant2.txt") 

let b = await fs.appendFile("prashant2.txt" , " prashant pls fuck off I am date to marry type of girl yk" , (error, data) => {
    if(error) {
        console.log(error);
        return ;
    }
    console.log(data.toString()) ;
} )

console.log( a.toString() , b ) ;

let c = await fs.readFile("prashant2.txt") 

console.log(c.toString()) ;



