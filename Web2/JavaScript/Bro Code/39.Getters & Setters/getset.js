// getter = special method that makes a property readable
// setter = special method that makes a property writable

// validate and modify a value when reading/writing a property
// This are Used for Input Validation if we worng Input then it will give us error

class Rectangle{

    constructor(width, height){
        this.width = width;
        this.height = height;
    }

    // these are only writeable not readable(means not assign again)
    set width(newWidth){
        if(newWidth > 0){
            this._width = newWidth; // _ prefix tells other developer it's private property
        }else{
            // throw new Error("Width must be greater than 0");
            console.error("Width must be greater than 0");
            //if it comes here then width value not be assigned
        }
    }

    set height(newHeight){
        if(newHeight > 0){
            this._height = newHeight;
        }else{
            console.error("Height must be greater than 0");
        }

    }

    // these are assign values into it this.width
    get width(){
        return `${this._width.toFixed(1)} cm`;
    }
    get height(){
        return `${this._height.toFixed(1)} cm`;
    }

    get area(){
        return `${(this._width * this._height).toFixed(2)} cm^2`;
    }

}

const rect1 = new Rectangle(3,4);

//it throws given error
// rect1.width = -10000;
// rect1.height = "pizza";

// console.log(rect1._width);  //having sending value while if is accepeted

console.log(rect1.width);
console.log(rect1.height);
console.log(rect1.area);