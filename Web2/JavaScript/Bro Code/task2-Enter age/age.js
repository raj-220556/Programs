const input = document.getElementById("myText");
const btn = document.getElementById("myButton");
const paragraph = document.getElementById("myP");
let age;
btn.onclick = function(){
    age = input.value;
    age = Number(age);
    if(age == NaN){
        // console.log("Enter a valid number");
        paragraph.textContent = "Enter a valid number";
    }else if(age >= 100){
        paragraph.textContent = "You are a centenarian!";
    }else if(age >= 18){
        paragraph.textContent = "You Eligible Enter this Site";
    }else if(age > 0){
        paragraph.textContent = "You Must be 18+ to Enter this Site";
    }else if(age == 0){
        praagraph.textContent = "Hoo your are Born Just Now";
    }else{
        paragraph.textContent = "You are not eligible to enter this site";
    }

}


