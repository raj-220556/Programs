// ternary operator = a shortcut to if{} and else{} statements
//                     helps to assign a variable based on a condition
//                      condition ? codeIfTrue : codeIfFalse;

// let age = 12;
// let message = age >= 18 ?"You're an adult" : "You're a minor";

// console.log(message);
// document.getElementById("myP").textContent = message;


// let time = 16;
// let greeting = time < 12 ? "Good morning" : time < 18 ? "Good afternoon" : "Good evening";
// document.getElementById("myP").textContent = greeting; // this will display the greeting based on the tim
// // console.log(greeting); // this will display the greeting based on the time in the console

// Challenge
// we will have a purchace amount somebody buying somthing
// purchase amount is over $100 get 10% discount

let purchaseAmount = 1002;
let discount = purchaseAmount > 100 ? purchaseAmount * 0.1 : 0;
let finalAmount = purchaseAmount - discount;
document.getElementById("myP").textContent = `Final amount is $${finalAmount}`; 


