// while loop = repeat some code WHILE some condition is true
// while else also done

// let username = ""; 

// while(username ==="" || username === null){
//     username = window.prompt("Enter user name : ");
//     // if u press cancel then it retuns null
// }

// let username;   // in while loop it value is undefined so while loop not run
// do{
//     username = window.prompt("Enter user name : ");
// }while(username ==="" || username === null);
// console.log("hello ",username);


let loggedin = false;
let username;
let password;

while(!loggedin){
    username = window.prompt("Enter username :");
    password = window.prompt("Enter Password :");

    if(username === "myUsername" && password === "myPassword"){
        loggedin = true;
        console.log("your are logged in!");
    }else{
        console.log("Invalid Credentials ! Please Try again")
    }
}
// we can also write code on console it website to run but not modify source code
// by observing source code we can change values of variables and run a particular we have writen

