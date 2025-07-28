//  = assignment operator
//  == comparison operator (compare if values are equal)
//  === strict equality operator (compare if values are equal & datatype are equal)
//  !=  inequality operator
//  !== strict inequality operator

const PI = 3.14;
if(PI == "3.14"){  // acc to js it is true if(PI === "3.14") then it will be false
    console.log("that is PI");
}else{
    console.log("that is not a PI");
}

if(PI !== "3.14"){ 
    console.log("that is not a PI");
}else{
     console.log("that is PI");
}