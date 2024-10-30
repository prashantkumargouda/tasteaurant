// error handling in JS 
// syntax error 

// console.log(1; // compile time error 

// console.log(x) ; // x toh define hi nahi kiya 

// console.log(x) ;

// try{
//     console.log("Try block starts here") ;
//     console.log(x) ;
//     console.log("try block ends here") ;

// }
// catch(err) {
//     // define karte h , error ke sath kya karna hai 
//     // retry logic 
//     // fallback mechanism 
//     // logging 
//     // custom error 

//     console.log("I am inside catch block") ;
//     console.log("Your error is here :" , err) ;
//     console.log(" bhai error dekhle upar ") ;
// }
// finally {
//     console.log( "Mai hamesha chalega" ) ;
// }


// try {
//     console.log(x) ;

// }
// catch(err) {
//     throw new Error( "Bhai declare toh karde phir print kar dena ") ;

// }

let errorCode = 100 ;

if(errorCode == 100) {
    throw new Error("Invalid Json") ;
}

  

