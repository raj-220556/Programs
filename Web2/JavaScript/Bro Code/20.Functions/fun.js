// function = A Section of reusable code.
//            Declare code once, use it whenever you want.
//            call the function to execute that code.


// // deceleration
// function happyBirthday(username, age){
//     console.log("Happy Birthday to you!");
//     console.log("Happy Birthday to you!");
//     console.log(`Happy Birthday dear ${username}`);
//     console.log("Happy Birthday to you!");
//     console.log(`You are ${age} years old!`);
// }
// // calling 
// happyBirthday("Raj kumar",20);
// happyBirthday("Brocode", 26);
// happyBirthday(30, "Ramesh"); // username = 30 ; age = Ramesh

// // Order of the parameters we want check when passing arguments


// RETURN KEYWORD
function add(x,y){
    let result = x+ y;
    return result;
}
function sub(x, y){
    return x-y;
}

let answer = add(2,3);
console.log(answer);
console.log(add(5,4));
console.log(sub); // shows function code
console.log(sub(5,4));

function isEven(number){
    return number % 2 == 0  ? true: false;
}
console.log(isEven(4));

function isValidEmail(email){
    return email.includes("@") ? true : false;
}
console.log(isValidEmail(`raj@gamil.com`));
console.log(isValidEmail(`relonmuskgamil.com`));