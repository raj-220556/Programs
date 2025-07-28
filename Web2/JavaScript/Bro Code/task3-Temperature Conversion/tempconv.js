// Temperature Conversion Pogram

const textbox = document.getElementById("textbox");
const toFahrenheit = document.getElementById("toFahrenheit");
const toCelsius = document.getElementById("toCelsius");
// const button = document.getElementById("button");      //we writen it on html file
const result = document.getElementById("result");

let temp;

function convert(){
    if(toFahrenheit.checked){
        temp = Number(textbox.value);
        temp = temp *9/5 + 35;
        result.textContent = temp.toFixed(1) +"'F"  //toFixed add remove decimals add one like 1.6783 = 1.7
    }else if(toCelsius.checked){
        temp = Number(textbox.value);
        temp = (temp - 32) * (5/9);
        result.textContent = temp.toFixed(1) + " 'C"
    }else{
        result.textContent = "Select a unit"
    }
}