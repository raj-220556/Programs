// JSON = (JavaScript Object Notation) data-interchange format
//        Used for exchanging data btw a server and a Wed application
//        JSON files object{key:value} OR [value1, value2, value3] OR [{objects}, {}, {}]

//     JSON.stringify() = converts a JS object to a JSON string.
//     JSON.parse() = converts a JSON string to a Js object


// ------ JSON.stringify() -------
// const names = ["Raj", "Pani", "Kiran", "Ravi", "Ratna"];
// const person = {
//     "name": "raj",
//     "age": 20,
//     "isEmployed": true,
//     "hobbies": ["eating", "sleepin", "coding"]
// };
// const people = [{"name": "raj","age": 20,"isEmployed": true},
//                 {"name": "Pani","age": 22,"isEmployed": false},
//                 {"name": "Ravi","age": 25,"isEmployed": true},
//                 {"name": "Ratna","age": 22,"isEmployed": true}
//                ];

// const jsonString =JSON.stringify(people);

// console.log(jsonString);
// // console.log(names);
// console.log(people);


// // ---------- JSON.parse()------------------
// const jsonNames = `["Raj", "Pani", "Kiran", "Ravi", "Ratna"]`;
// const jsonPerson = `{"name": "raj","age": 20,"isEmployed": true,"hobbies": ["eating", "sleepin", "coding"]}`;
// const jsonPeople = `[{"name": "raj","age": 20,"isEmployed": true},
//                 {"name": "Pani","age": 22,"isEmployed": false},
//                 {"name": "Ravi","age": 25,"isEmployed": true},
//                 {"name": "Ratna","age": 22,"isEmployed": true}
//                ]`;

// const parseData = JSON.parse(jsonNames);

// console.log(jsonNames);
// console.log(parseData);


// ------ fetch JSON file---------
// fetch returns Promise

fetch("person.json")
    .then(response => response.json()) //response.json returns Promise
    .then(value => console.log(value));

fetch("people.json")
    .then(response => response.json()) //response.json returns Promise
    .then(values => values.forEach(value =>{
        // (console.log(value))
        console.log(value.isEmployed);
    }))
    .catch(error => console.error(error));