// using array.map() 

// returns a new modified diffrentarrray with modified elements in the array 

// let array = [ 1,2,3,4 ] ;

// const doubledarray = array.map( num => num * 2) ;

// console.log( doubledarray ) ;

// const fruits = ["grapes" , "apple" , "orange" , "lemon"] ;

// const healthy = fruits.map((fruit) => {
//     return `${fruit} : healthy` ;
// }) ;

// console.log( healthy ) ;  // returns a new list 

const students = [
    { name: 'Mayank', age: 21 },
    { name: 'Loves', age: 24 },
    { name: 'Pranay', age: 18 }
]; 

// const newarray = students.map( (data) => {
//     return data.name ;
// }) ;

const newarray = students.map( function(data) {
    return data.age ;
}) ;
console.log(newarray) ;

let fruits = ['grapes', 'orange', 'apple', 'banana']; 

let newfruits = fruits.map( function(fruit) {
    return fruit.toUpperCase() ;
}) ;

console.log( newfruits ) ;