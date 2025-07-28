// eventListener = Listen for specific events to create interactive 
//                 web pages
//             events: click, mouseover, mouseout
//             .addEventListener(event, callback);

const mybox = document.getElementById("myBox");

// function changeColor(event){
//     console.log(event);

//     event.target.style.backgroundColor = "tomato";
//     event.target.textContent = "It's Tomato!";
    
// }

// mybox.addEventListener("click", changeColor);

//annomous function or arrow funtion
mybox.addEventListener("click", event => {  //for single parameter we don't need ()
    event.target.style.backgroundColor = "tomato";
    event.target.textContent = "It's Tomato!";
} );

// mouseover when u move cursor there
mybox.addEventListener("mouseover", event => {
    event.target.style.backgroundColor = "yellow";
    event.target.textContent = "Don't do it";
})

// mouseout when u remove mouse on there
mybox.addEventListener("mouseout", event => {
    event.target.style.backgroundColor = "lightgreen";
    event.target.textContent = "Click Me";
});


// ----- button ----

const myButton = document.getElementById("mybtn");

myButton.addEventListener("click", event => {
    event.target.style.backgroundColor = "pink";
    event.target.textContent = "You are done";
});

myButton.addEventListener("mouseover", event => {
    // event.target.style.textAlign = "center";
    event.target.style.backgroundColor = "yellow";
    event.target.textContent = "It's Not Button";
})

myButton.addEventListener("mouseout", event => {
    event.target.style.backgroundColor = "white";
    event.target.textContent = "click me!";
})