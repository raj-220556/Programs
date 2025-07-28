// arrow functions = a concise way to write function expressions
//                  good for simpple functions that you use only once
//                 (parameters) => some code


// function decleration
function hellodecl(){
    console.log("hello");
}
hellodecl();
// function expressions
const helloexp = function(){
    console.log("hello");
}
helloexp();

// arrow function
const hello = () => console.log("hello");
hello();


const withParameters = (name) => {
                                    console.log(`hello ${name}`);
                                    console.log(`You got a golden chance`);
                                }
withParameters("raj");



setTimeout( () =>  console.log("hello"),3000);

const numbers = [1, 2, 3, 4, 5, 6, 7];

const squares = numbers.map((element) => Math.pow(element, 2));
const cubes = numbers.map((element) => Math.pow(element, 3));
const evenNums = numbers.filter((element) => element % 2 === 0);
const oddNums = numbers.filter((element) => element % 2 !== 0);
const total = numbers.reduce((accumulator,element) => accumulator + element);

console.log(squares);
console.log(cubes);
console.log(evenNums);
console.log(oddNums);
console.log(total);