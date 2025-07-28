// Logical operators = used to combine or manipulate boolean vaues
//                  (true or false)

//   AND = &&
//   OR = ||
//   NOT = !

const temp = 20;

if(temp > 0 && temp <= 30){
    console.log("wheather is GOOD");
}else{
    console.log("weather is BAD");
}

if(temp <=  0 || temp > 30){
    console.log("wheather is BAD");
}else{
    console.log("weather is GOOD");
}

const isSunny = true;
if(!isSunny){
    console.log("its Raining");
}else{
    console.log("its Sunny");
}