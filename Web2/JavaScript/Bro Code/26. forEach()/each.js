// foreach() = method used to iterate over the elements of
//             an array and apply a specified function(callback)
//             to each element 

//      array.forEach(callback)
//      element , index ,array, are provided
// provides callback function element ,index, array are parameters
let numbers = [1,2,3,4,5];

numbers.forEach(square);
numbers.forEach(display);   

function double(element, index ,array){
    array[index] = element * 2; //it changes the value in array
}
function square(element, index ,array){
    array[index] = Math.pow(element,2);
}
function display(element){
    console.log(element);
}