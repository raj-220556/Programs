// Rock Paper Scissors

const choices = ["rock", "paper", "scissor"];
const player = document.getElementById("playerschoice");
const computer = document.getElementById("computerschoice");
const result = document.getElementById("result");
const psdisplay = document.getElementById("PSDisplay");
const csdisplay = document.getElementById("CSDisplay");

let pscore = 0;
let cscore = 0;

function playGame(p){
    const c = choices[Math.floor(Math.random() * 3)];
    let resultc = "";

    if(p === c){
        resultc = "IT'S A TIE!";
    }
    else{
        switch(p){
            case "rock":
                resultc = (c === "scissor") ? "YOU WIN!" : "YOU LOSE!";
                break;
            case "paper":
                resultc = (c === "rock") ? "YOU WIN!" : "YOU LOSE!";
                break; 
            case "scissor":
                resultc = (c === "paper") ? "YOU WIN!" : "YOU LOSE!";
                break;  
        }
    }

    player.textContent = `PLAYER : ${p}`;
    computer.textContent = `COMPUTER : ${c}`;
    result.textContent = resultc;

    result.classList.remove("greenText", "redText");

    switch(resultc){
        case "YOU WIN!":
            result.classList.add("greenText");
            pscore++;
            psdisplay.textContent = pscore;
            break;
        case "YOU LOSE!":
            result.classList.add("redText");
            cscore++;
            csdisplay.textContent = cscore;
            break;
    }
}