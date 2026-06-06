
// let name = prompt("Enter your name: ");
const greet = document.getElementById("greeting");
greet.textContent = `Hello, ${name}! Submit your details below:`;

const sbtn = document.getElementById("btn");

function submitDetails(){
    const id = document.getElementById("id").value;
    const name2 = document.getElementById("name").value;
    const male = document.getElementById("malebtn").checked;
    const female = document.getElementById("femalebtn").checked;
    const branch = document.getElementById("branch").value;
    const error = document.getElementById("error");
    let gender;
    error.textContent = "";
    if(id === "" || !(id[0] == "N" || id[0] == "n") || id.length != 7){
        error.textContent = "Invalid ID. It should start with 'N' and Length should be 7. ";
    }else if(name2 === ""){ 
        error.textContent = "Name cannot be empty. ";  
    }else if (!(male) && !(female)){
        error.textContent = "Please Select your Gender.";
    }else{
        gender = male ? "Male" : "Female";
        alert(`Id : ${id}\nName : ${name2}\nGender : ${gender}\nBranch : ${branch}\n
            Thank u for Submiting details`);
    }

    
}

function windowprint(){
    window.print();
}
