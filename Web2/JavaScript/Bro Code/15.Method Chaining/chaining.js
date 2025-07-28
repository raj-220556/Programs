//  Method Chaining = calling one method after another
//                    in one continuous line of code

let username = window.prompt("Enter user name :");
// --------No Method Chaining-------------

// removing spaces first and last .take first make it uppercase and all other make lowercase


username = username.trim();
let first = username.charAt(0);
first = first.toUpperCase();

let extrachars = username.slice(1);
extrachars = extrachars.toLowerCase();
username = first + extrachars;

document.getElementById("myP").textContent = `Username : ${username}`;

//  ------- Method Chaining -----------

username = username.trim().charAt(0).toUpperCase()+username.slice(1).toLowerCase();
document.getElementById("myP").textContent = `Username : ${username}`;
