// firse start kar raha hun *****

function ex() {
    var x = 10 ;
    console.log(x) ;
}

ex() ;
let x = 10 ;
console.log(x) ; // if variable not defined it will give an error : Reference error

// ternary operator 

let myage = 18 ;
( myage >= 18 ) ? ( console.log( "can drive") ) : ( console.log(" cant drive ")) ;

let num1 = 10 ;
let num2 = 20 ;
let sum = num1 + num2 ;

console.log( `the sum of ${num1} and ${num2} : ${sum} `) ;
console.log( ` the sum of ${num1} and ${num2} is ${num1 + num2}`) ;

// printing multiline strings 

let string1 = "mai pal do pal ka shayar hun" ;
let string2 = "pal do pal meri kahani" ;

let y = `
    ${string1} 
    ${string2}` ;
console.log(y) ;

// object literals in JAVA SCRIPT

x = { name : "Prashant" , age : 20 , roll : 49, isRunning : true } ;
console.log( x.name ) ;
console.log( x.roll ) ;
console.log( x.isRunning ) ;

// arrays in JS are flexible and can hold any types of values 

let container = [ 49 , 'laptop' , 'red' , "RAPTH" , true , false ] ;
console.log( container ) ; 

// parseint , converting strings into int and float datatypes

let z = "100" ;
let u = "24.54" ;

let string_int = parseInt( z ) ;
console.log( string_int) ;

let string_float = parseFloat( u ) ;
console.log(string_float) ;

let u_length =  u.length ;
console.log(u_length) ;

let string4 = "mai pal do pal ka shayar hun" ;
console.log( string4 ) ;
console.log( string4.substring( 0 , 10 )) ;

console.log( string4.split(" ")) ;

let array = [ "India" , "is" , "the" ,"biggest" , "democracy" ] ;

console.log( array.join(" ")) ;

// using objects 
console.log( x.name ) ;
// using bracket notations 
// all the keys in an object are strings 

console.log( x['age']) ; 

x.isRunning = true ;
console.log(x) ;

// objects can contain functions 

let person = {
    name : 'Prashant' , 
    roll : 49 ,
    message : function(){
        console.log( "HelloWORLD "  + this.name ) ;
    }
}

person.message() ;

let ar = [ "prashant" , "RApth" , "Noobmasterxn" , "MasterMind5"] ;
ar.pop() ;
ar.shift() ;
ar.push("ambitious") ;
ar.unshift("aggressive") ;
console.log(ar) ;

// foreach loop

let numbers = [ 1,2,3,4,5,6,7 ] ;

let sum1 = 0 ;
numbers.forEach( function( number , index ) {
    console.log(` index : ${index} `) ;
    sum1 += number ;
})

console.log( sum1 ) ;
 
// for of loop 

const colors = [ "red" , "blue" , "yellow"] ;

for( let color of colors ) {
    console.log( color ) ;
} 
for( let color in colors ) {
    console.log(color) ;
}
// color variable used to get values of colors array 

let man = {
    name : "Prashant" , 
    roll : 49 ,
    age : 20 ,
    isRunning : true 
}

for ( let key in man ) {
    console.log( key + " : " + man[key]) ;
}


