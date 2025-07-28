
// -------- Example 1 <h1> ---------

// Step 1 create the elememt 

const newH1 = document.createElement("h1");

// step 2 Add Attributes/Properties

newH1.textContent = "I like Pizza!";
newH1.id = "myH1";
newH1.style.color  = "tomato";
newH1.style.textAlign = "center";

// Step 3 Append Elelment To DOM

// document.body.append(newH1); //This is New Element is a Last Child
// document.body.prepend(newH1); //This is First Child of body

document.getElementById("box3").append(newH1);
// document.getElementById("box3").prepend(newH1);

//Snadwich in btw  1&2
// const box2 = document.getElementById("box2");
// document.body.insertBefore(newH1, box2); //(newElement, currentElement)

// If ELements don't have "id"
// const boxes = document.querySelectorAll(".box");
// document.body.insertBefore(newH1, boxes[2]);


// Remove HTML Element
// document.body.removeChild(newH1);

document.getElementById("box3").removeChild(newH1);