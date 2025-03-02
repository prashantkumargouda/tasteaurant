console.log("Prashant is a hacker")

console.log("Anil hai eka atankwadi") 

setTimeout(() => {
    console.log("I am inside settimeout") 

} , 0 ) ;

const fn = () => {
    console.log("this is nothing you are meant to be great")
}

const callback = (arg,fn) => {
    console.log(arg)
    fn() 
}

const loadScript = (src,callback) => {
    let sc = document.createElement("script"); 
    sc.src = src ;
    sc.onload = callback("prashant",fn) ;
    document.head.append(sc) 
}

loadScript("https://cdnjs.cloudflare.com/ajax/libs/prism/9000.0.1/prism.min.js",callback)