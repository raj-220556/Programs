//  .reduce() = reduce the elements of an array 
//              to a single value

const prices = [5, 30, 10, 25, 15, 20];

const total = prices.reduce(sum);

console.log(`$${total}`);

function sum(accumulator, element){
    return accumulator + element;
}

// (previous, next) variable whatever is not problem

const grades = [90,70, 95, 60, 20];

const maximum = grades.reduce(getMax);

console.log(maximum);

function getMax(accumulator , element){
    return Math.max(accumulator, element);
}