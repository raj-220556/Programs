// Task 1
let x = 10;
const pi = 3.14;
var name = "square";

console.log("Task: 1");
console.log(`${name} area is ${pi*x*x}`);


// Task 2

function add(a,b){
    return a+b;
}

const sub = (a,b) => {
    return a-b;
}

console.log("Task: 2");
console.log("addiyion of (2,3):",add(2,3));
console.log("subtraction of (2,3):"+sub(2,3));

// Task: 3

// console.log("Task: 3");
// alert("Welcome Task 3");
// console.log("Welcome alert: poped");
// let input = prompt("Enter your Name : ");
// console.log("prompt input completed")
// alert(`Hi ${input} welcome to Task 3`);
// console.log("Task 3 - Completed");

// Task: 4

function task4(){
    const p4 = document.getElementById("t4p");
    const btn4 = document.getElementById("t4btn");

    // msg4 = p4.textContent;
    msg4 = "Click button To change Text";
    
    if (btn4.value == "click"){

        console.log("click");
        p4.textContent = "You successfully Changed the Text";
        btn4.innerText = "back";
        btn4.value = "back"
    }else{

        console.log("else");
        p4.textContent = msg4;
        btn4.innerText = "click";
        btn4.value = "click";
    }
}

// Task: 5
t5 = true;
function task5(){
    const p5 = document.getElementById("t5p");
    console.log(t5);
    if(t5){
        
        p5.style.fontFamily = "italic";
        p5.style.fontSize = "50px ";
        p5.style.color = "red";
        p5.style.backgroundColor = "lightblue";
        t5 = false
    }else{
        p5.style.font = null;
        p5.style.fontSize = "30px";
        p5.style.color = "chocolate";
        p5.style.backgroundColor = null;
        t5 = true
    }
}

// Task: 6

const btn6 = document.getElementById("t6btn");

btn6.addEventListener("click",
    event => {
        event.target.style.backgroundColor = "yellow";
        event.target.textContent = "Task completed";
        console.log("Task 6 submited");
    }
);
btn6.addEventListener("mouseover", event => {
    event.target.style.backgroundColor = "tomato";
    event.target.textContent = "don't do it!";
});
btn6.addEventListener("mouseout", event => {
    event.target.style.backgroundColor = "white";
    event.target.textContent = "Click me!";
});


// Task: 7
