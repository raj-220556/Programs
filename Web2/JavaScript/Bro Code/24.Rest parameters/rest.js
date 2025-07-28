// rest parameters = (...rest) allow a function work with a varible
//                number of arguments by bundling then into an array

//      spread = expands an array into seperate elements
//      rest = bundles seperate elements into an array


function openFridge(...foods){//rest combines all into array
    console.log(...foods);// spread again sperate an array
}
function getFoods(...foods){
    return foods;//returning array combining elements
}
const food1 = "pizza";
const food2 = "hamburger";
const food3 = "hotdog";
const food4 = "sushi";
const food5 = "dosa";


// openFridge(food1,food2,food3,food4,food5);

const foods = getFoods(food1,food2,food3,food4,food5);
console.log(foods);

// sum of bunch of numbers
function sum(...numbers){
    let result = 0;
    for(let number of numbers){
        result += number;
    }
    return result;
}
function getAverage(...numbers){
    let result = 0;
    for(let number of numbers){
        result += number;
    }
    return result/numbers.length;
}

console.log(sum(1,2,3,7,8),getAverage(1,2,3,7,8));



// Combine Strings
function combineStrings(...strings){
    return strings.join("-");
}
console.log(combineStrings("raj","he", "is", "a","king"));
