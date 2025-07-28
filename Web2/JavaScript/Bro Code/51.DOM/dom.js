// DOM = DOCUMENT OBJECT MODEL
//      Object{} that represents the page you see in the web browser
//      and provides you with an API to interact with the it.
//      Web browser constructs the DOM when it loads an HTML document,
//      and structures all the elemenet ina tree-like representation.
//      JavaScript can access the DOM to dynamically
//      change the content , strucutre, and style of a web page.

//      It's a tree-like structure, where each node is an object
//      Each node has a set of properties and methods


console.log(document);  //show our html page

console.dir(document);   //directory it list all properties of document object
// console.log(document.body);  //show the body of the html page

document.title = "It is Changed"; //change the title of the page

//It is usefull change the dark mode and bright mode
// document.body.style.backgroundColor = "hsl(0, 0%, 15%)";   


const username = "raj";
const welcomeMsg = document.getElementById("myH1");

welcomeMsg.textContent += username === "" ? 'Guest' : username; 