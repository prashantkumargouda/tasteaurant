console.log("this is promises") ;

let prom1 = new Promise((resolve,reject) => {
    let a = Math.random() ;
    if(a<0.5) {
        reject("No random number was supporting you") ;
    }
    else {
        setTimeout(() => {
            console.log("this is inside settimeout");
            resolve("Prashant") ;
        } , 3000) ;
    }
})


let prom2 = new Promise((resolve,reject) => {
    let a = Math.random() ;
    if(a<0.5) {
        reject("No random number was supporting you 2") ;
    }
    else {
        setTimeout(() => {
            console.log("this is inside settimeout");
            resolve("Rapth") ;
        } , 1000) ;
    }
})

let p3 = Promise.race([prom1,prom2]) 
// all allSettled race
p3.then((a) => {
    console.log(a) 
}).catch((err) => {
    console.log(err)
})



