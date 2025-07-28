// Hide & Show Element

const btn = document.getElementById("mybtn");
const myimg = document.getElementById("myImg");

btn.addEventListener("click", event => {

    // if(myimg.style.display === "none"){
    //     myimg.style.display = "block"; //It shows image
    //     btn.textContent = "Hide";
    // }
    // else{
    //     myimg.style.display = "none"; //It hide image
    //     btn.textContent = "show";
    // }

    // ----- provide space to show image ----
    if(myimg.style.visibility === "hidden"){
        myimg.style.visibility = "visible"; //It shows image
        btn.textContent = "Hide";
    }
    else{
        myimg.style.visibility = "hidden"; //It hide image
        btn.textContent = "show";
    }
});