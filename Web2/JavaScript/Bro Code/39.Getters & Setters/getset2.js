class Person{

    constructor(firstname, lastname, age){
        this.firstname = firstname;
        this.lastname = lastname;
        this.age = age;
    }

    set firstname(newFirstName){
        if(typeof newFirstName === "string" && newFirstName.length > 0){
            this._firstname = newFirstName;
        }else{
            console.error("First name Must be a non-empty String");
        }
    }
    set lastname(newLastName){
        if(typeof newLastName === "string" && newLastName.length > 0){
            this._lastname = newLastName;
        }else{
            console.error("Last name Must be a non-empty String");
        }
    }
    set age(newAge){
        if(typeof newAge === "number" && newAge > 0){
            this._age = newAge;
        }else{
            console.error("Age Must be a positive integer");
        }
    }

    get firstname(){
        return this._firstname;
    }

    get lastname(){
        return this._lastname;
    }
    get fullname(){
        return this._firstname + " " + this._lastname;
    }
    get age(){
        return this._age;
    }

}

const p = new Person("raj", "kumar", 19);

console.log(p.firstname);
console.log(p.lastname);
console.log(p.age);