// let obj = {
//     age:12 ,
//     wt:68 ,
//     ht:180
// };

// // objects are dynamic in nature 
// console.log(obj) ;

// obj.color = "white" ;

// console.log(obj) ;

let src = {
    age:12 ,
    wt:68 ,
    ht:180
}; 

let dest = {} ;

for(let key in src) {
    let newKey = key ;
    let newValue = src[key] ;
    // insert new key and value in dest and create a clone 
    dest[newKey] = newValue ;
}

src.age = 90 ;

console.log(dest) ;

console.log( src ) ;

// let src2 = {
//     value : 101 ,
//     name :"Prashant" 
// };

// let dest = Object.assign({} , src , src2 ) ;

// src.age = 90 ;

// console.log(src) ;

// console.log(dest) ;


// src.age = 90 ;
// spread opearator 

// let dest = {...src} ;

// console.log("src :" , src ) ;

// console.log("dest :" , dest) ;


