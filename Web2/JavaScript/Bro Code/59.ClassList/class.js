// classList = Element property in JavaScript used to interact 
//             with an element's list of classes (CSS classes)
//             Allows you to make reusable classes for elements
//             across your webpage.

// add();
// remove();
// toggle(Remove if present, Add if not);
// replace(oldClass, newClass);
// contains();

const mybtn = document.getElementById("mybtn");

// mybtn.classList.add("enabled"); //Added class to Element
// mybtn.classList.remove("enabled"); //Removed class to Element

// mybtn.classList.add("hover");

// mybtn.addEventListener("mouseover", event =>{
//     event.target.classList.add("hover");
// });
// mybtn.addEventListener("mouseout", event =>{
//     event.target.classList.remove("hover");
// });

// ---- toggle() Remove if class is their || Add if class is not Present
// Looks Like as add & remove alternatively
// mybtn.addEventListener("mouseover", event =>{
//     event.target.classList.toggle("hover");
// });
// mybtn.addEventListener("mouseout", event =>{
//     event.target.classList.toggle("hover");
// });

// ------replace()  && contians()

// mybtn.classList.add('enabled');

// mybtn.addEventListener("click", event =>{
//     if(event.target.classList.contains("enabled")){
//         event.target.classList.replace("enabled", "disabled");
//     }
//     else{
//         event.target.classList.replace("disabled", "enabled");
//     }
    
// });

// // ----- H1 Element --------
// const myh1 = document.getElementById("myH1");

// myh1.classList.add("enabled");

// myh1.addEventListener("click", event =>{
//     if(event.target.classList.contains("enabled")){
//         event.target.classList.replace("enabled", "disabled");
//     }
//     else{
//         event.target.classList.replace("disabled", "enabled");
//     }
    
// });


// ------- Challenge ----------

let buttons = document.querySelectorAll(".mybtns");

buttons.forEach(button => {
    button.classList.add("enabled");
});

buttons.forEach(button => {
    button.addEventListener("mouseover", event =>{
        event.target.classList.toggle("hover");
    });
});
buttons.forEach(button => {
    button.addEventListener("mouseout", event =>{
        event.target.classList.toggle("hover");
    });
});

buttons.forEach(button => {

    button.addEventListener("click", event =>{
        //BroCode
        if(event.target.classList.contains("disabled")){
            event.target.textContent += "disabled"
        }
        else{
            event.target.classList.replace("enabled", "disabled");
        }
    });

});