// destructuring = extract values from arrays and objects,
//                 then assign them to variables in a convenient way
//              [] = to perform array destructuring
//              {} = to perform object destructuring
//              5 examples

// -----------Example 1 -----------
// Swap the value of Two variables

let a = 1;
let b = 2;

[a, b] = [b, a];

console.log(a);
console.log(b);

// -----------Example 2 ----------
// Swap 2 Elements in an array

const colors = ["red", "green", "blue", "black", "white"];

[colors[0], colors[4]] = [colors[4], colors[0]];

console.log(colors);

// --------- Example 3 ----------
// Assign Array elements to Variables

const [firstcolor, secondcolor, thirdcolor, ...extracolors] = colors;

console.log(firstcolor); // assing by starting index
console.log(secondcolor);
console.log(thirdcolor);
console.log(extracolors);

// ---------- Example 4 ----------
// Extarct Values from Objects

const person1 = {
    firstname : "raj",
    lastname : "kumar",
    age : 20,
    job : "Student"
}

const person2 = {
    firstname : "pani",
    lastname : "chakra",
    age : 20,
}

const {age, firstname, lastname, job = "Un Employed"} = person2;

console.log(firstname);
console.log(lastname);
console.log(age);
console.log(job);

// ---------- Example 5 ---------
// Destructure In Function Parameters

function displayPerson({firstname, lastname, age, job = "UnEmployed"}){
    console.log(`name : ${firstname} ${lastname}`);
    console.log(`age : ${age}`);
    console.log(`job : ${job}`);
}

displayPerson(person1);
displayPerson(person2);