// array = a variable like Structure that can hold more than one variable

let fruits = ["apple","orange","banana"];
// variable name be pural it help to readability

console.log(fruits);
console.log(fruits[0]);
console.log(fruits[1]);
console.log(fruits[2]);
console.log(fruits[3]); // undefined

fruits[0] = "coconut";
console.log(fruits[0]);

// adding element to array
fruits[3] = "apple";
fruits.push("cheery");
console.log(fruits[3]);
console.log(fruits[4]);

// remove
fruits.pop(); //pop is going remove and return last element
fruits.unshift("cheery"); // add element begining of array
fruits.shift(); //remove element for the begining

fruits.length; //reutrn length of array
fruits.indexOf("apple"); //return -1 if element not there
fruits.sort();  //sort elements in alphabetical order
fruits.sort().reverse();  //to sort an reverse order

for(let i = 0; i<fruits.length ;i++){
    console.log(fruits[i]);
}
// like for each
for(let fruit of fruits){
    console.log(fruit);
}

console.log(fruits);