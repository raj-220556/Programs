// error = An object that is created to represent a problem that occurs
//         Occur often with user input or establishing a connection

//  try { } = Encloses code that might potentially cause an error
//  catch { } = Catch and handle any Thrown Errors from try { }
//  finally { } = (optional) Always executes. Used mostly for clean up
//                ex. close files, close connections, release resources


// TypeError occurs when we access the object that doesn't exist
// ReferenceError occurs we access variable which is not defined


// Errors are Araised By certain Issues
// Network Errors
// Promise Rejection
// Security Errors


// try{
//     console.log(x); 
//     console.lag("hi");  //Only one error excuted one time
//     console.log("hello");  //Not executed
// }
// catch(error){
//     console.log(error);
//     console.error(error); // it could be highlighted any error (help full debugging)
// }
// finally{
//     // close files
//     // close connections
//     // release resources
//     console.log("This always executes");
// }

// console.log("You have reached the end");


// ------

try{
    const dividend = Number(window.prompt("Enter a dividend : "));
    const divisor = Number(window.prompt("Enter a divisor : "));

    if(divisor == 0){
        throw new Error("You can't divide by zero! ");
    }
    if(isNaN(dividend) || isNaN(divisor)){
        throw new Error("Values Must be a Number");
    }

    const result = dividend / divisor; // gives infinity  NO ERROR
    console.log(result);
}
catch(e){
    console.error(e);
}

console.log("you have reached the end");