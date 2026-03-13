// variable = A container that stores a value.
//    Behaves as if it were the value it contains

// 1.declaration let x;
// 2.assignment x = 100;

// let x;
// // let x; it be unique
// x = 10;
// let y = 123;

// console.log(x);

// let age = 20;   //number type
// let price = 10.99;
// let gpa = 2.1;  //number type

let name = "Raj";    //String type
// let food = "Bonda";     // if you do not put ; we not get error
// let email = "n220556@rguktn.ac.in"

// let online = true;
// let offline = false;

// console.log("Raj is online : ", online);
// console.log("Raj is online :",online,"raj is not offline :",offline);
// console.log(age,y);
console.log(typeof name);
// console.log(`your emai is : ${email}`);
// console.log(`your name is ${name}`);
// console.log(`you favouraite food is ${food}`);
// console.log(`you are ${age} years old`);  //only back tags insert variables
// console.log(`the price is $${price}`);
// console.log(`your gpa is ${gpa}`);


// Using variables in webpages

let fullName = "Raj Kumar";
let age = 20;
let isStudent = true;

document.getElementById("p1").textContent = `Yor name is :${fullName}`;
document.getElementById("p2").textContent = `your ${age} years old`;
document.getElementById("p3").textContent = `Enrolled: ${isStudent}`;