// Callback = a function that is passed as an argument to
//            to another function.

//  Used to Handle asynchronous operations:
//  1. Reading a file
//  2. Network requests
//  3. Interacting with databases

//  "Hey, When you're done with this task, call me back"

// hello1(); // if we use timmer to print lately then goodbye fun not wait directly excecutes
// goodbye1();

// function hello1(){
    // setTimeout(() => {
    //     console.log("Hello!");
    //     }, 2000);   
// }

// function goodbye1(){
//     console.log("Goodbye!");
// }


// hello(goodbye);
// function hello(callback){
//     console.log("Hello!");
//     callback();
// }
// function goodbye(){
//     console.log("Goodbye!");
// }

sum(printResult,2,3);
sum(displayDOM,2,3);
function sum(callback, x, y){
    setTimeout(() => {
        const result = x + y;
        callback(result);
        }, 2000);
              
}
function printResult(result){
    console.log("Thank you for Waiting Result: ",result);
}

function displayDOM(result){
    document.getElementById("myH1").textContent = `Thank for Waiting \n Result :${result}`
}