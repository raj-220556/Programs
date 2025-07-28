// Object = A collection of related properties and/or methods 
//          Can represent real world objects (people, products, planes)
//          object = {key:value,
//                     function()}

const person1 = {
    firstName: "Raj",   //comma to end of key property
    lastName: "Kumar",
    age: 20,
    isEmployed: true,
    sayhello: function(){console.log(`Hi i am Raj!`);},
    eat:() => {console.log("hey i am eating");}
}

const person2 = {  // objects can't be a same name
    firstName: "Behara",   
    lastName: "Chakrapani",
    age: 19,
    isEmployed: true,
    sayhello: () => {console.log("Hey i am Chakrapani");}
}
console.log(person1.firstName);
console.log(person1.lastName);
console.log(person1.age);
console.log(person1.isEmployed);

person1.sayhello();
person2.sayhello();
person1.eat();

