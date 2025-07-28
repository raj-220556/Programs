/// To Understand Clearly make all comment read line by line

// DOM Navigation = The process of navigation through the structure
//                  of an HTML document JavaScript.

// .firstElementChild
// .lastElementChild
// .nextElementSibling
// .previousElementSibling
// .parentElement
// .children


// ----------- .firstElementChild -----------
// unorderList (ul) have their childs list(li)
// first li is first child

const fruits = document.getElementById("fruits");

const firstChild = fruits.firstElementChild;
firstChild.style.backgroundColor = "yellow";

console.log(firstChild);

//---for all first childs
const allUl = document.querySelectorAll("ul");
allUl.forEach(ul => ul.firstElementChild.style.backgroundColor = "pink");

// ---------- .lastElementChild ---------

const lastChild = fruits.lastElementChild;

lastChild.style.backgroundColor = "orange";


// ------- .nextElementSibling ---------
// giving each list have unique id

const apple = document.getElementById("apple");
const nextSibling = apple.nextElementSibling; //orange (banana doesn't have nextSibling)

nextSibling.style.backgroundColor = "violet";


const fnextSibling = fruits.nextElementSibling; //selects next ul
fnextSibling.style.backgroundColor = "violet";
fruits.nextElementSibling.nextElementSibling.style.backgroundColor = "grey";

// --------- .previousElementSibling -------

const banana = document.getElementById("banana"); //first have no previous
const orange = banana.previousElementSibling;
orange.style.backgroundColor = "Orange";


// ---------- .parentElement --------

const appleParent = apple.parentElement;
appleParent.style.backgroundColor = "yellow";

// Parent of Ul is ---body---
fruits.parentElement.style.backgroundColor = "black";


// ---------- .children --------
// It returns HTML collection
const fruitsChild = fruits.children;

console.log(fruitsChild);

Array.from(fruitsChild).forEach(child => {
    child.style.backgroundColor = "white";
});

// we can also access byn index
fruitsChild[1].style.backgroundColor = "orange";


