// synchronous = Executes line by line consecutively in a sequential manner
//              code that waits for an operation to complete.

// asynchronous = Allows multiple operations to be performed concurrently
//              without waiting Doesn't block the execution flow and 
//              allows the program to continue
//      (I/O operations, network requests, fetching data)
//      Handled with: Callbacks, promises, Async/Await


// -------Synchronous -------

// console.log("task 1");
// console.log("task 2");
// console.log("task 3");


// --------- Asynchronous --------

// setTimeout(() => console.log("task 1"), 3000);

// console.log("task 2");
// console.log("task 3");
// console.log("task 4");

function func1(callback){
    setTimeout(() => {console.log("task 1");
                       callback()}, 3000);
}

function func2(){
    console.log("task 2");
    console.log("task 3");
    console.log("task 4");
}

func1(func2);