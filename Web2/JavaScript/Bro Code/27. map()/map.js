// .map() = accept a callback and applies that function
//          to each element of an array, then return a new array

const numbers = [1,2,3,4,5];

const squares = numbers.map(square); //returns a new array

console.log(squares);

function square(element){
    return Math.pow(element, 2);
}

// format dates

const dates = ["2025-1-10","2025-2-14","2026-3-20"];
const newDates = dates.map(formatDates);

console.log(newDates);

function formatDates(element){
    const parts = element.split("-");
    return `${parts[2]}/${parts[1]}/${parts[0]}`;
}