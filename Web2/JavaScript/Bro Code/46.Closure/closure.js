// closure = A function defined inside of another function,
//          the inner function has access to the variables
//          and scope of the outer function.
//         Allow for privaate variables and state maintenance
//         Used frequently in JS framework: React, Vue, Angular


// function outer(){
//     let message = "Hello!";
// encapsulate variable make them private

//     function inner(){
//         console.log(message);
//     }
//     inner();
// }

// message = "Goodbye!"; // outer function scope
// outer(); // Hello!



function createCounter(){
    let count = 0;
    function increment(){
        count++;
        console.log(`count increment : ${count}`);
    }

    function getCount(){
        return count;
    }

    return {increment, getCount};
}

const counter = createCounter();

counter.increment(); // count increment : 1
counter.increment(); // count increment : 2
counter.increment(); // count increment : 3

// counter.count = 10; // error: count is not defined
console.log(counter.count); // error: count is not defined


console.log(`The Current count is ${counter.getCount()}`);



// Another Example of Game


function createGame(){
    let score = 0;

    function increaseScore(points){
        score += points;
        console.log(`+${points}pts`);
    }

    function decreaseScore(points){
        score -= points;
        console.log(`-${points}pts`);
    }

    function getScore(){
        return score;
    }

    return {increaseScore, decreaseScore, getScore};
}

const game = createGame();
game.increaseScore(10); // +10pts
game.increaseScore(20); // +20pts
game.decreaseScore(5); // -5pts
game.decreaseScore(10); // -10pts

console.log(`The final score is ${game.getScore()}`);