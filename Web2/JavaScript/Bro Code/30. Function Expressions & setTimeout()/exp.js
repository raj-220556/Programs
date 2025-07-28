// function declaration = define a reusable block of code
//                     taht performs a specific task


// function expressions = a way to define functions as 
//                      values or variables

// 1. callbacks in asynchronous operations
// 2. Higher-Order Functions
// 3. Closures
// 4. Event Listeners

const hello = function(){
    console.log("hello!");
}

hello();

// setTimeout function (callback, time)
setTimeout(hello, 3000);   //3000milliseconds

setTimeout(function(){
    console.log("It take time");
},3000);

// we can directly give a function as a argumment


