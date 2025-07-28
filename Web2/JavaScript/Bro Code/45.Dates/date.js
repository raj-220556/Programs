// Date Objects = Objects taht contain values that represent dates
//              and times
//      These date Objects can be changed and formated


const date1 = new Date();

console.log(date1);


// Date(year, month, day, hour, minute, second, ms)

const date2 = new Date(2024, 0, 12, 10, 30, 20, 10);
console.log(date2);

const date3 = new Date("2025-02-19T00:00:00Z");
console.log(date3);

const date4 = new Date(0); //apeek date
console.log(date4);

const date5 = new Date(999999999999999); // next ms of apeek date
console.log(date5);

const date = new Date();

// const year = date.getFullYear();
// const month = date.getMonth();
// const day = date.getDate();
// const week = date.getDay();
// const hour = date.getHours();
// const minutes = date.getMinutes();
// const seconds = date.getSeconds();

// console.log(year);
// console.log(month); //january 0
// console.log(day);
// console.log(week);  //sunday 0
// console.log(hour);
// console.log(minutes);
// console.log(seconds);



// date.setFullYear(2024);
// date.setMonth(9);
// date.setDate(25);
// date.setHours(1);
// date.setMinutes(2);
// date.setSeconds(10);
// console.log(date);

if(date2 > date1){
    console.log(date2.getFullYear(), "is greater than", date1.getFullYear());
}else{
    console.log(date2.getFullYear(), "is less than", date1.getFullYear());
}