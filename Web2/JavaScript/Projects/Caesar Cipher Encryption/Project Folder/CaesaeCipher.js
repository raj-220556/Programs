// let x = "a";
// let ascii = x.charCodeAt(0);
// let y = String.fromCharCode(ascii + 1);
// console.log(x);
// console.log(y);


// -------- Code For Project ---------

let side = 0;
let outputmsg = "";

const sideText = document.getElementById("sidebox");
const errorBox = document.getElementById("errormsg");
const outputTextBox = document.getElementById("outputTextBox");

function left(){
    side = 1;
    sideText.textContent = "Left Side Encryption";
}

function right(){
    side = 2;
    sideText.textContent = "Right Side Encryption";
}

function encryptData(data, key){
    key = Number(key);  //input value is String
    for (let ch of data) {
        let ascii = ch.charCodeAt(0);
        let charvalue = ascii + key;

        if (ascii === 32) continue; // Skip spaces

        if (ascii >= 65 && ascii <= 90) { // Uppercase letters
            if (charvalue > 90) {
                charvalue = 65 + (charvalue - 91); // Wrap around to 'A'
            } else if (charvalue < 65) {
                charvalue = 90 - (64 - charvalue); // Wrap around to 'Z'
            }
        }

        if (ascii >= 97 && ascii <= 122) { // Lowercase letters
            if (charvalue < 97) {
                charvalue = 122 - (96 - charvalue); // Wrap around to 'a'
            } else if (charvalue > 122) {
                charvalue = 97 + (charvalue - 123); // Wrap around to 'z'
            }
        }

        let y = String.fromCharCode(charvalue);
        outputmsg += y; 
  
    }
    return outputmsg;
}

function startEncryption(){
    outputTextBox.textContent = "";
    outputmsg = "";

    const inputText = document.getElementById("inputTextBox").value;

    const key = document.getElementById("inputNum").value;
 

    if (inputText === "") {
        errorBox.textContent = "- Enter Text For Encryption -";
        errorBox.classList.replace("errorDisabled", "errorEnable");
        return;
    }

    if (side === 1) {
        // Left Side Encryption
        console.log(key);
        outputmsg = encryptData(inputText, -key); 
        errorBox.classList.replace("errorEnable", "errorDisabled");

    } else if (side === 2) {
        // Right Side Encryption
        outputmsg = encryptData(inputText, key);
        errorBox.classList.replace("errorEnable", "errorDisabled");
    } else {
        console.log("error");
        errorBox.textContent = "- Please Select Side Of Encryption -"; 
        errorBox.classList.replace("errorDisabled", "errorEnable");
    }

    outputTextBox.textContent = outputmsg; 
  
}
