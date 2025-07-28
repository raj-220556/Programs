// this = reference to the object where THIS is used 
//        (the object depends on the immediate context)
//         person.name = this.name

const person1 = {
    name:"Raj kumar",
    favFood: "pizza",
    sayHello: function(){console.log(`Hey i am ${this.name}`);},
    eat: function(){console.log(`hey i'm eating ${this.favFood}`);}
    // you can't use arrow function it get this values as undefined
    // () =>  refers to the window object
}
const person2 = {
    name:"pani",
    favFood:"bonda",
    sayHello: function(){console.log(`Hey i am ${person2.name}`);},
    eat: function(){console.log(`hey i'm eating ${this.favFood}`);}
}
person1.sayHello();
person1.eat();
person2.sayHello();
person2.eat();//undefined

console.log(this); //window object