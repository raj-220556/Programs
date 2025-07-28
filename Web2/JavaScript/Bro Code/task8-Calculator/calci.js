// Calculator Program

const display = document.getElementById("display");

function appendToDisplay(input){
    console.log("Current display value:", display.value); // Debugging statement
    display.value += input;
}


function allClear(){
    display.value = "";
}

function calculate(){
    try{
        console.log("Input to evaluate:", display.value); // Debugging statement
        if (display.value.trim() === "") {
            display.value = "Error"; // Handle empty input
            return;
        }
        display.value = eval(display.value);
        // eval() evaluate expression(1+2+5);
    }
    catch(err){
        display.value = "Error";
    }
}
