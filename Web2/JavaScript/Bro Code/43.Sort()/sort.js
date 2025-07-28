// sort() = method used to sort elements of anarray in place.
//          Sorts elements as strings in lexicographic order, not 
//          alphabetical
//         lexicographic = (alphabet + numbers + symbols) as strings


// ------ Sorting Numbers --------
let numbers = [1,10,2,4,3,7,5,8,9];
// numbers.sort(); //[1, 10, 2, 3, 4, 5, 7, 8, 9] numbers taken as string 

numbers.sort((a, b) => a - b); // sort numbers in ascending order

// numbers.sort((a, b) => b - a); // sort numbers in descending order


console.log(numbers);

// --------- Array of Objects ---------
let students = [
    {name: 'RAj', age: 50},
    {name: 'anil', age: 72},
    {name: 'raj', age: 41}
    ];

// students.sort((a, b) => a.age - b.age); // sort students by age
console.log(students);

// students.sort((a, b) => a.name.localeCompare(b.name)); // sort students by name comparing Strings
console.log(students); // sort students by name comparing Strings

// students.sort((a, b) => b.name.localeCompare(a.name)); // sort by reverse
