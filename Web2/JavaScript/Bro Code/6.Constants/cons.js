// const = a variable that can't be changed

const PI = 3.14159; // we can't reassign const value
let radius;
let circumference;

document.getElementById("mySubmit").onclick = function() {
    radius = document.getElementById("radius").value;
    radius = Number(radius);
    circumference = 2 * PI * radius;
    document.getElementById("myH3").textContent = "Circumference of the circle is " + circumference +"cm";
}

console.log(circumference);
