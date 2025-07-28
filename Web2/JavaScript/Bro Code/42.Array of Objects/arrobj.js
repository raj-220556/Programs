// Array of Objects


const fruits = [{name: "apple", color : "red", price: 1.00},
                {name: "banana", color : "yellow", price: 3.50},    
                {name: "orange", color : "orange", price: 54.50},
                {name: "coconut", color : "white", price: 90.50},
                {name: "guva", color : "green", price: 70.50}];


console.log(fruits[3].name);

fruits.push({name: "grapes", color : "purple", price: 20.50});
// fruits.pop(); //removes last one
// fruits.splice(1, 2); //remove 1 to 2 indexs

console.log(fruits);

// ----------- forEach() --------------
// fruits.forEach(fruit => console.log(fruit));
fruits.forEach(fruit => console.log(fruit.name));

// ---------- map() -------------
//return array
const fruitNames = fruits.map(fruit => fruit.name);
console.log(fruitNames);

// --------- filter() ------------
//return array
const expensiveFruits = fruits.filter(fruit => fruit.price > 50);
console.log(expensiveFruits);

// ---------- reduce() -----------
// It returns a Single Object
const total = fruits.reduce((accumulator, fruit) => accumulator + fruit.price, 0);
console.log(total);

const maxPrice = fruits.reduce((accu, fruit) => accu > fruit.price ? accu : fruit.price, 0);
console.log(maxPrice);