// type conversion = change the data type of a variable to another 
// (strings,numbers,boolean)

// user input is a string

let age = window.prompt("How old are you :");
age = Number(age)
age +=1;
console.log(age,typeof age);      //20 +1 = 201 String concating

x = "pizza"
y = "pizza"
z = "pizza"

x = Number(x);
y = String(y);
z = Boolean(z);

console.log(x,typeof x);    //Nan 'number' NaN means Not a number
console.log(y,typeof y);    // not inisitalization it gives (undefined)
console.log(z,typeof z);    //true 'boolean'  (empty string is false)

//when user input is not given then we get boolen false