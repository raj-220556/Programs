// class = (ES6 feature) provides a more structured and cleaner
//         way to work with objects compared to traditional 
//         constructor functions
// ex. static keyword, Encapsulation, Inheritance

//class is reusable
class Product{
    constructor(name, price){
        this.name = name;
        this.price = price;
    }

    //Inside we don't need function keyword
    displayProduct(){
        console.log(`product : ${this.name}`);
        console.log(`price : ${this.price.toFixed(2)}`);
    }

    calculateTotal(salesTax){
        return this.price + (this.price * salesTax)
    }
}

const p1 = new Product("Shirt", 19.994);    //19.99
const p2 = new Product("Pant", 20.785);     //20.79
const p3 = new Product("Niker", 101.999);   //102.00

// p1.displayProduct();
// p2.displayProduct();
p3.displayProduct();

const total = p3.calculateTotal(0.5);
console.log(`Total price (With Tax) : $${total.toFixed(3)}`);