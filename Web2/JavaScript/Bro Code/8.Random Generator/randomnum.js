// Random number generator

// // for in btw range
// function random(min, max) {
//     return Math.floor(Math.random() * (max - min + 1)) + min;
// }
// // let randomnum = Math.random(); // btw 0 t0 1
// let randomnum = Math.floor(Math.random() * 10); // btw 0 t0 9


// console.log(randomnum);


// in website 
const myButton = document.getElementById("myButton");
// const myLabel = document.getElementById("myLabel");

const Label1 = document.getElementById("Label1");
const Label2 = document.getElementById("Label2");
const Label3 = document.getElementById("Label3");

const min =1;
const max = 6;
// let randomnum;

let randomnum1;
let randomnum2;
let randomnum3;

// myButton.onclick = function(){
//     randomnum = Math.floor(Math.random()*(max-min) ) +min;
//     myLabel.textContent = randomnum;
// }

myButton.onclick = function(){
    randomnum1 = Math.floor(Math.random()*(max-min) ) +min;
    randomnum2 = Math.floor(Math.random()*(max-min) ) +min;
    randomnum3 = Math.floor(Math.random()*(max-min) ) +min;

    myLabel1.textContent = randomnum1;
    myLabel2.textContent = randomnum2;
    myLabel3.textContent = randomnum3;
}