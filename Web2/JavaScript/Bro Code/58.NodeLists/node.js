// NodeList = Static colloction of HTML elements by (id, class, element)
//            Can be created by using querySelectorAll()
//            Similar to an array, but no (map, filter, reduce)
//            NodeList won't update to automatically reflect changes


let buttons = document.querySelectorAll(".mybtn");

// console.log(buttons); //we check methods also there

// // Add Html / Css Properties

// buttons.forEach(button => {
//     button.style.backgroundColor = "green";
//     button.textContent += " O";
// })


// CLICK event listener

buttons.forEach(button => {
    button.addEventListener("click", event => {
        event.target.style.backgroundColor = "tomato";
    });
});

// MOUSEOVER + MOUSEOUT event listener

buttons.forEach(button => {
    button.addEventListener("mouseover", event => {
        event.target.style.backgroundColor = "lightblue";
    });
});

buttons.forEach(button => {
    button.addEventListener("mouseout", event => {
        event.target.style.backgroundColor = "blue";
    });
});


// ADD an Element to NodeList
const newbtn = document.createElement("button");  //step 1

newbtn.textContent = "button5"; //Step 2
newbtn.classList = "mybtn";


document.body.appendChild(newbtn);

console.log(buttons); //It have only 4
// NodeList is static collection not dynamic


// we need to add NodeList by manually
buttons = document.querySelectorAll(".mybtn");
console.log(buttons ); // Now it is 5

// Remove an ELement
buttons.forEach(button => {
    button.addEventListener("click", event => {
        event.target.remove();
        buttons = document.querySelectorAll(".mybtn");
        console.log(buttons);
    })
});