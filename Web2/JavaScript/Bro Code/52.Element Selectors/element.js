// // element selectors = Methods used to target and manipulate HTML elements
// //                    They allow you to select one or multiple HTML elements
// //                    from the DOM (Document Object Model) and perform actions on them

// //  1. document.getElementById()          // Element Or NULL
// //  2. document.getElementsClassName()    // HTML Collection
// //  3. document.getElementsByTagName()    // HTML Collection
// //  4. document.querySelector()           // First Element Or NULL
// //  5. document.querySelectorAll()        // NodeList


// // --------- document.getElementById() --------
// const myH1 = document.getElementById("myH1");

// const myH2 = document.getElementById("myH2");  //Element is not in HTML

// // By accessing css properties it have Camel case property
// myH1.style.backgroundColor = "yellow";
// myH1.style.textAlign = "center";

// console.log(myH1); //It returns HTML tag with including CSS properties
// console.log(myH2); //It returns = null

// // ------------ document.getElementClassName() -----------

// const fruits = document.getElementsByClassName("fruits");

// console.log(fruits); //It looks Like an Array But technically not

// fruits[0].style.backgroundColor = "red";

// for(let fruit of fruits){
//     fruit.style.backgroundColor = "yellow";
// }

// // fruits.style.backgroundColor = "red";   //ERROR
// // fruits.forEach(); //ERROR html element not have forEach() 

// // Array.from() return array of fruits It is Known as TypeCasting
// Array.from(fruits).forEach(fruit =>{
//     setTimeout(() =>fruit.style.backgroundColor = "red",3000);
// });  


// // ------------ document.getElementByTagName() ----------

// const H4Tag = document.getElementsByTagName("h4");
// const liTag = document.getElementsByTagName("li");

// // H4Tag[0].style.backgroundColor = "yellow";

// for(let h4 of H4Tag){
//     h4.style.backgroundColor = "red";
// }

// for(let li of liTag){
//     li.style.backgroundColor = "lightgreen";
// }

// Array.from(liTag).forEach(li => {
//     setTimeout(() => li.style.backgroundColor = "darkgreen", 3000);
// })


// // ------------ document.querySelector() -----------------

// // (.ClassName || Tag || )
// const element = document.querySelector(".fruits"); //It return first matching element
// const fli = document.querySelector("li");
// const fh4 = document.querySelector("h4");
// const ful = document.querySelector("ul");
// // It returns only one Element
// element.style.backgroundColor = "pink";
// fli.style.backgroundColor = "red";
// fh4.style.backgroundColor = "pink";
// ful.style.backgroundColor = "pink";

// const fol = document.querySelector("ol"); //returns null; there is ol
// console.log(fol);

// // --------- document.querySelectorAll() --------

// // It returns NODELIST it is Similary to htmlCollections except has built in methods
// // NODELIST is Static they don't update automatically in DOM but htmlCollections will

const fruits = document.querySelectorAll(".fruits");
const foods = document.querySelectorAll("li");

fruits[0].style.backgroundColor = "yellow";

console.log(fruits);    //Nodelist
console.log(foods);

foods.forEach(food =>{      //No need to TypeCast as an Array
    food.style.backgroundColor = "orange";
});
