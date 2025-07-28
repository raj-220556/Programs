// spread operator = ... allows an iterable such as an 
//                 array or string to be expanded into
//                 seperate elements(unpacks the elements)

let numbers = [1,2,3,4,5];
// let maximum = Math.max(numbers)  //NaN
let maximum = Math.max(...numbers); //it's open list into pieces
console.log(maximum);

// also do this whith string
let username = "Raj kuamr";
let letters = [...username];
let string = [...username].join("-");
console.log(string);
console.log(letters);

// combining arrays
let fruits = ["apple","cherry","banana"];
let vegetables = ["carrots","celery","potatoes"];

let foods = [...fruits,...vegetables,"eggs","milk",0,12]
console.log(foods);