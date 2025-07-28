//  Variable Scope = Where a variable is recognized
//                   and accessible(local vs gobal)

let x = 1; //gobal variable

function1();
function2();
function function1(){
    let x = 5;  //local variable
    console.log(x);
}
function function2(){
    console.log(x);
}
// if we not declered variable and using it then we get ReferenceError