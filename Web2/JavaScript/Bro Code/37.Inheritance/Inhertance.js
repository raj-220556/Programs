//  Inheritance = allows a new class to inherit properties and methods 
//              from an existiong class(parent -> child)
//              helps with code reusabillity


class Animal{
    alive = true;

    eat(){
        console.log(`This ${this.name} is eating`);
    }
    sleep(){
        console.log(`This ${this.name} is sleeping`);
    }
}

// Child extends Parent
class Rabbit extends Animal{
    // static name = "rabbit"; // If we use static variable we can't
    // another parent or child class
    name = "Rabbit";
    run(){
        console.log(`This ${this.name} is running`);
    }
}


class Fish extends Animal{
    name = "Fish";
}

class Hawk extends Animal{
    name = "hawk"
}
const r = new Rabbit();
const f = new Fish();
const h = new Hawk();

r.alive = false;
console.log(r.alive);
r.eat(); //if u don't understand once use with static 
f.eat();

r.run();