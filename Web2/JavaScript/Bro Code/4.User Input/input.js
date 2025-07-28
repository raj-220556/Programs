// how to accept user input

// 1.Easy Way = window prompt
// 2.PROFESSIONAL WAY = HTML textbox

// // easy way (asks input in a popup alert msg)

// let username;
// username = window.prompt("what is your username :");
// console.log(username);

// Professional way

// let username;
// document.getElementById("mySubmit").onclick = function(){
//     username = document.getElementById("myText").value; // Updated ID
//     console.log(username);    //getting me a typeerror
//     // console.log("username is : ", username);
// }
document.getElementById("mySubmit").onclick = function(){
    username = document.getElementById("myText").value;
    document.getElementById("myH1").textContent = `Hello ${username}`; // Fixed typo
}
document.getElementById("mySubmit").onclick = function(){
    username = document.getElementById("myText").value; // Updated ID
    console.log(username); // Fixed TypeError
    document.getElementById("myH1").textContent = `Hello ${username}`; // Fixed typo
}
