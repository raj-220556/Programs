// Super = keyword is used in classes to call the constructor or
//         access the properties and methods of a parent (superclass)
//         this = this object
//         super = the parent

class Animal{
    isAlive = true;
    constructor(name, age){
        this.name = name;
        this.age = age;
    }

    move(speed){
        console.log(`The ${this.name} moves at a speed of ${speed} km/h`);
    }
}

class Rabbit extends Animal{

    constructor(name, age, runSpeed){
        super(name, age); // don't call the constructor of the parent gives error
        this.runSpeed = runSpeed;
        super.isAlive = false;
    }

    run(){
        console.log(`This ${this.name} can run`);
        //also let call parent move
        super.move(this.runSpeed);
    }
}

class Fish extends Animal{
    constructor(name, age, swimSpeed){
        super(name, age);
        this.swimSpeed = swimSpeed;

    }
    swim(){
        console.log(`This ${this.name} can run`);
        //also let call parent move
        super.move(this.swimSpeed);
    }
}

const rabbit = new Rabbit('Rabbit', 2, 50);
const fish = new Fish('Fish', 1, 20); 

console.log(rabbit.runSpeed);

console.log(rabbit.isAlive); //false
console.log(fish.isAlive);  //true



rabbit.run();
fish.swim();