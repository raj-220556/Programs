// static = keyword that defines properties or methods that belong
//          to a class itself rather than the objects created
//      from that class (class owns anything static, not the objects members)

class MathUtil{
    static PI = 3.14159;

    static getDiameter(radius){
        return radius*2;
    }
    static getCircumference(radius){
        return 2 * this.PI * radius;
    }
    getArea(radius){
        return this.PI * radius * radius;
    }
}


console.log(MathUtil.PI);   // no need any object to use it
console.log(MathUtil.getDiameter(3));
console.log(MathUtil.getCircumference(3).toFixed(3));
// console.log(MathUtil.getArea(3)); // gives TypeError

const m = new MathUtil();
console.log(m.getArea(3)); //we can't use any Staic variables in objects here PI
// console.log(m.getCircumference(3)); //gives TypeError

class User{
    static userCount = 0;
    constructor(username){
        this.username = username;
        User.userCount++; //don't use this for while Changing value
        // using value of static this is ok
    }
    static getUserCount(){
        console.log(`There are ${this.userCount} users online`);
        console.log(`There are ${User.userCount} users online`);
        return "Look How Console Works!"
    }

    sayHello(){
        console.log(`Hello, my username is ${this.username}`);
    }
}

const user1 = new User("Raj");
const user2 = new User("pani");
const user3 = new User("Sandy");

// console.log(user1.username);
// console.log(user2.username);
console.log(`return value :`+ User.getUserCount()); // if not return anything :undefined

user1.sayHello();
