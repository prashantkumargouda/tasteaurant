// function hoisting

// sayMyName("Prashant") ;
// function sayMyName(finalName) {
//     console.log(finalName) ;
// }

sayName() ;
function sayName(){
    console.log("Hello World") ;
}


// function gets shifted to the top of its scope 
// in its current scope gets shifted to the top 



// console.log(age) ;
// created with var keyword , declaration will move to the end 
// variable hoisting 
var age = 20 ;
console.log(age) ;

