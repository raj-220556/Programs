// nested objects = Objects inside of Other Objects.
//                  Allows you to represent more complex data structures
//                  Child Object is enclosed by a parent Object

//      Person{Address{}, ContactInfo{}}
//      ShoppingCar {Keyboard{}, Mouse{}, Monitor{}}


// const person = {
//     fullname : "Raj Kumar",
//     age :20,
//     isStudent :true,
//     hobbies : ["karate", "jellyfishing", "cooking"],
//     address: {
//         street : "124 Conch st.",
//         city: "Bikini Bottom",
//         country : "Int. Water"
//     }
// }

// console.log(person.address);
// console.log(person.fullname);
// console.log(person.age);
// console.log(person.hobbies[1]);
// console.log(person.address.city);

// for(const property in person.address){
//     console.log(person.address[property]);
// }



class Person{

    constructor(name, age, ...address){
        this.name = name;
        this.age = age;
        this.address = new Address(...address);
    }
}

class Address{

    constructor(street, city, country){
        this.street = street;
        this.city = city;
        this.country = country;
    }
}


const p1 = new Person("Raj", 20, "124 Conch st.", "Bikini Bottom","usa");


console.log(p1.address.country);
console.log(p1.name);