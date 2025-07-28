// String slicing = create a substring from a portion of another string

//  string.slice(start,end);

const fullName = "Raj Kuamr"

let firstName = fullName.slice(0,fullName.indexOf(" ")); //last index is exclusive
let lastName = fullName.slice(fullName.indexOf(" ")+1);  // given start index
console.log(lastName);
console.log(firstName); //space is not printed

// for idea print first char and last char
// -Ve index of slicing is also workout

// make email into username and domain name
const email = "raj@gmail.com"
let username = email.slice(0,email.indexOf("@"));
let domain = email.slice(email.indexOf("@")+1);
console.log(username);
console.log(domain);
// console.log(email.slice(-1)); //last char of string
// console.log(email.slice(-2)); //last two char of string

