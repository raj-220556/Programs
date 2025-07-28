// eventListener = Listen for specific events to create interactive 
//                 web pages
//           events : keydown, keyup, keypress(avoid keypress)
//           document.addEventListener(event, callback);



// document.addEventListener("keydown", event => {
//     console.log(`key down = ${event.key}`);
// });

// document.addEventListener("keydown", event => {
//     console.log(`key up = ${event.key}`);
// });

//Key up and keydown have keyboardEvent like key(letterskeys, enter, shift, Arrowup...)



// ------- Box -------

const mybox = document.getElementById("myBox");
 
//Holding a it works
document.addEventListener("keydown", event => {
    mybox.textContent = `${event.key}`;
    mybox.style.backgroundColor = "tomato";
});

//releasing a key it works
document.addEventListener("keyup", event => {
    mybox.textContent = `Box`;
    mybox.style.backgroundColor = "lightblue";
});


// ------- Moving Element ------

const moveAmount = 100; //pressing arrow key how far we want to move
let x = 0;  // Coordinates -- Horizontal movement
let y = 0;  // vertical movement

document.addEventListener("keydown", event => {


    if(event.key.startsWith("Arrow")){

        // event.preventDefault(); //check difference to understand

        switch(event.key){
            case "ArrowUp":
                y -= moveAmount;
                break;
            case "ArrowDown":
                y += moveAmount;
                break;
            case "ArrowLeft":
                x -= moveAmount;
                break;
            case "ArrowRight":
                x += moveAmount;
                break;
        }

        mybox.style.top = `${y}px`;
        mybox.style.left = `${x}px`;
    }
})
