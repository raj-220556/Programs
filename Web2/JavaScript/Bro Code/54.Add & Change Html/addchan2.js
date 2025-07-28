
// ---------- Example 2 <li> -------------

//  Step 1 create Element
const newli = document.createElement("li");

// Step 2 Add Attributes/properties
newli.textContent = "NewList";
newli.id = "newlist";
newli.style.color = "red";
newli.style.fontWeight = "bold";

// Step 3 Append Element To DOM
// document.body.append(newli);
// document.body.prepend(newli);

// document.getElementById("fruits").append(newli);
// document.getElementById("fruits").prepend(newli);

// const orange = document.getElementById("orange");
// document.getElementById("fruits").insertBefore(newli, orange);

const listItems = document.querySelectorAll("#fruits li"); //(li is decesendence)
document.getElementById("fruits").insertBefore(newli, listItems[2]);

// Remove HTML ELement
// document.getElementById("fruits").removeChild(orange);
document.getElementById("fruits").removeChild(newli);