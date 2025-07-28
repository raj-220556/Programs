// Number Guessing Game

const min = 1;
const max = 100;
const answer = Math.floor(Math.random()*(max-min +1)) + min;
// (max-min +1)how many that we want to generate [0,max-min]and  adding min makes 
// that [min,max]

let attempts = 0;
let guess;
let running = true;

while(running){

    guess = window.prompt(`Guess Number Btw ${min} and ${max} :`);
    guess = Number(guess);
    
    if(isNaN(guess)){
        window.alert("Enter a Number!");
    }else if(guess < min || guess> max){
        window.alert("Enter a Valid Number!")
    }else{
        attempts++;
        if(guess < answer){
            window.alert("TOO LOW! TRY AGAIN");
        }else if(guess > answer){
            window.alert("TOO HIGH! TRY AGAIN");
        }else{
            window.alert(`====YOU WON ====\n Answer is ${answer} it took u ${attempts} attempts.`)
            running = false;
        }
    }

}