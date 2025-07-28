// Counter pogram

const decresebtn = document.getElementById('decreasebtn');
const resetbtn = document.getElementById('resetbtn');
const incresebtn = document.getElementById('increasebtn');
const countlabel = document.getElementById("countlabel");

let count = 0;

incresebtn.onclick = function(){
    count++;
    countlabel.textContent = count;
}
decresebtn.onclick = function(){
    count--;
    countlabel.textContent = count;
}
resetbtn.onclick = function(){
    count = 0;
    countlabel.textContent = count;
}