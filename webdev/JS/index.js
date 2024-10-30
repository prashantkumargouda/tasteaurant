// let person = { name: "prashant" , age : 20 , country : "India"} ;

// // adding and modifying elements of person 

// console.log(person.name) ;
// console.log(person.age) ;

// person.age = 22 ;

// person.issleeping = false ;

// console.log(person) ;

// let msg = "are what remind me why I fell for you" ;

// console.log(msg.split(" ") ) ;
// console.log(msg.substring(10,15)) ;

// console.log(person.name) ;
// console.log(person['name']) ;

// delete person.country ;

// console.log(person) ;

// let person = {
//     name : "prashant" ,
//     age : 20 ,
//     country : "India" ,
//     message : function() {
//         console.log("YOU MAKE WANT TO BE A BETTER MAN")
//     }
// }

// console.log(person) ;
// console.log(person.message) ;
// person.message() ;
// setTimeout(function() {
//     console.log('This is an anonymous function called after 1 second.');
//   }, 1000);


// const numbers = new Array( 1,2,3,4,5 ) ;

// const fruits = new Array("apple" , "orange" , "Banana") ;
// // console.log(numbers) ;
// // console.log(fruits) ;

// console.log(fruits) ;
// fruits.splice(1,0,"kiwi" , "strawberry" , "dates" );

// console.log(fruits) ;

// using filter function 

// let numbers = [ -1 , -20 , 49 , 89 , 10 , -12 ] ;

// const positivenumbers = numbers.filter(function(number) {
//     return number > 0 ;
// } ) ;  

// console.log(positivenumbers) ;


// //  using filter function for age ;


// let age = [ 10 , 20 , 19 , 18 , 65 ,45 , 23 , 26 ] ;

// let drive = age.filter(function(number) {
//     return number > 18 ;
// }) ;
// console.log(age) ;
// console.log(drive) ;
// console.log(age.length) ;

// // filter essay criteria 

// let porsche = [ 17 , 15 , 14 , 16 , 27 , 29 , 78 , 45 ] ;

// let bail = porsche.filter( function(number) {
//     return number < 18 ;
// }) ;

// console.log(porsche) ;
// console.log(bail) ;
// console.log(bail.length) ;


// // using filter on array of objects 

// const products = [
//     {
//         id: 1,
//         name: "Product A",
//         price: 10 
//     },
//     {
//         id: 2,
//         name: "Product B",
//         price: 20 
//     },
//     {
//         id: 3,
//         name: "Product C",
//         price: 30
//     }
// ]

// const expensiveProducts = products.filter(function(object){
//     return object.price > 15 ;
// }) ;

// console.log(expensiveProducts) ;

// summing up array elements using reduce method 

// const numbers = [ 1,2,3,4,5 ] ;

// const sum = numbers.reduce(function( accumulator , currentValue ) {
//     return accumulator + currentValue ;

// }) ;

// console.log(sum)  ;

// console.log(numbers) ;
///////////////////////////////////////////////////////////////////////////////////////////////////////

// using object literals to create an object 
// what are objects 

// these are key value pairs just like dictionary 
// let person = {
//     name : "Prashant" ,
//     age : 20 ,
//     message : function() {
//         console.log("Hi my name is " + this.name ) ;  //used this to link the name property with the string 
//     }
// }  ;

// console.log(typeof(person)) ;
// console.log(person) ;
// person.message() ;

// let person = new Object() ; // used new keyword to create a new and empty object

// console.log(person) ;

// // adding properties to the object 

// person.Firstname = "Prashant" ;
// person.Lastname = "kumar Gouda" ;
// person.age = 20 ;

// person.message = function() {
//     console.log("adding a function") ;
// } ;

// console.log(person) ;
// person.message() ;

// creating a function using factory function and function prototype ]

// function prototype 

// personPrototype = {
//     name :"Prashant" 
// } ;

// let person = Object.create(personPrototype) ;
// console.log(person) ;

// person.firstname = "Prashant" ;
// person.lastName = "Kumar Gouda" ;
// person.age = 20 ;

// console.log(person) ;

// factory function 

// function createPerson() {
//     return {
//         name : "Prashant" ,
//         age : 20 ,
//         lastName :"Gouda" 
//     }
// }

// let person = createPerson() ;

// console.log(person) ;
// person.name = "Rapth" ;
// person.lastName = "Kumar" ;

// person.age = 19 ;


// console.log(person) ;

// delete person.age ;
// console.log(person) ;

// object cloning 
// copying using iteration 

// let person = {
//     name : "Prashant" ,
//     age : 19 ,
// }

// let newPerson = new Object() ;

// console.log(newPerson) ;

// for(let key in person ) {
//     newPerson[key] = person[key] ;
// }

// console.log(newPerson) ;

// copying using assign() 
// Object.assign( where to assign , what to assign ) 

// let person = {
//     name :"prashant" ,
//     age : 20 
// } ;

// let newPerson = Object.assign({} , person )  ;
// console.log(newPerson) ;

// using functions 

// function greet(name) {
//     return `Hello , ${name}! ` ;
// }

// console.log(greet('Prashant') ) ; 

// const greet = function(name) {
//     return `HEllO , ${name}` ;
// }

// console.log(greet("Prashant")) ;

// arrow functions 

// const greet = (name) => {
//     return `Hello , ${name}! `
// }

// let greet1 = greet("Prashant") ;

// console.log(greet1) ;

// using callback functions

// using setTimeout() 
setTimeout(() => {
    console.log("delayed function") ;
} , 5000 ) ;



