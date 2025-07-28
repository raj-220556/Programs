// Random Password Generator

function generatePassword(passwordLength,includeLowerCase,includeUpperCase,includeNumbers,includeSymbols){

    const lowercase = "abcdefghijklmnopqrstuvwxyz";
    const uppercase = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const numbers = "0123456789";
    const symbols = "!@#$%^&*()_+~";

    
    let password = "";
    let allowedchars ="";
    allowedchars += includeLowerCase ? lowercase : "";
    allowedchars += includeUpperCase ? uppercase : "";
    allowedchars += includeNumbers ? numbers: "";
    allowedchars += includeSymbols ? symbols: "";

    for(let i =0 ;i< passwordLength;i++){
        let index = Math.floor(Math.random() * allowedchars.length);
        password += allowedchars[index];

    }
    return password;
}



const passwordLength = 12;
const includeLowerCase = true;
const includeUpperCase = true;
const includeNumbers = true;
const includeSymbols = true;

let pass = generatePassword(passwordLength,includeLowerCase,includeUpperCase,includeNumbers,includeSymbols);
console.log(`Generated Password : ${pass}`);