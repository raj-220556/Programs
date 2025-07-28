// String methods = allow you to manipulate and work with text (Strings)

let userName = " raj kumar ";

content = `${userName}\n`

content += "\n  charAt(7) :"+userName.charAt(7);  // index starts on 0
// content += "\n"      //didn't go to new line
console.log(userName.indexOf("a"));  // 1 gives first occurence
console.log(userName.lastIndexOf("a")); // 7
console.log(userName.length); //9
console.log(userName.toLowerCase()); //raj kumar
console.log(userName.toUpperCase()); //RAJ KUMAR
console.log(userName.trim()); //raj kumar  bunch of white spaces after or before it been removes
console.log(userName.repeat(3)); //repeat string 3 times
console.log(userName.startsWith(' ')); //return boolean
console.log(userName.endsWith(' ')); //return boolean
console.log(userName.includes('b')); //return boolean
console.log(userName.replace(' ', '_')); //replace space with underscore  of first oocurence
console.log(userName.replace(/ /g, '_')); //replace space with underscore  of all oocurence
console.log(userName.split(' ')); //split string into array
console.log(userName.replaceAll(" ","_"));
console.log(userName.padStart(15, '0')); //add 0 at the start of string
console.log(userName.padEnd(15, "0"));

// all methods returns values not change the original string
console.log(userName);
document.getElementById("myP").textContent = content;