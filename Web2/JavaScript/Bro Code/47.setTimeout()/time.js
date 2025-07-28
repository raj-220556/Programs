// setTimeout() = function in JavaScript that allows you to scheduke
//                the excecution of a function after an amount of time (milliseconds)
//      Times are approximate (varies based on the workload of the JavaScript runtime env.)

//      setTimeout(callback, delay);
//      clearTimeout(timeoutId) = can cancel a timeout befor it triggers

// function sayhello(){
//     window.alert("Hello!");
// }
// setTimeout(sayhello, 3000); //3000ms = 3s

// annonmus function
// setTimeout(function(){window.alert(`Annonmus Function!`)}, 5000);

// arrow function
// setTimeout(() => {window.alert(`Arrow Function!`)}, 5000);


// // clearTimeout(timeoutId);
// const timeoutId = setTimeout(() => window.alert("Hello!"),3000);

// clearTimeout(timeoutId);


// ------- Creating Button to clearTimeout ------
let timeoutId;
const myp = document.getElementById("myP");
function startTimer(){
    timeoutId = setTimeout(() => window.alert("Hello!"),3000);
    myp.textContent = "Timer started";
}
function clearTimer(){
    clearTimeout(timeoutId);
    myp.textContent = `Timer was Cancelled!`
}