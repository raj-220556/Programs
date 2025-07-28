// callback Hell = situation in JavaScript where callbacks
//                 are nested within other callbacks to the 
//                 degree where the code is difficult to read.
//                 Old pattern to handle asynchronous functions.
//            Use promises + async/await to avoid Callback Hell

// // -----synchronous --------
// function task1(){
//     console.log("Task 1 complete");
// }
// function task2(){
//     console.log("Task 2 complete");
// }
// function task3(){
//     console.log("Task 3 complete");
// }
// function task4(){
//     console.log("Task 4 complete");
// }

// task1();
// task2();
// task3();
// task4();
// console.log("All tasks Completed");

// ----- asynchronous --------
function task1(callback){
    setTimeout(() => {
        console.log("Task 1 complete");
        callback();
    }, 1000)  
}
function task2(callback){
    setTimeout(() => {
        console.log("Task 2 complete");
        callback();
    }, 2000)
}
function task3(callback){
    setTimeout(() => {
        console.log("Task 3 complete");
        callback();
    }, 3000)
}
function task4(callback){
    setTimeout(() => {
        console.log("Task 4 complete");
        callback();
    }, 1500)
}
function task5(callback){
    setTimeout(() => {
        console.log("Task 5 complete");
        callback();
    }, 2000)
}

//nested callback
//Callback Hell
task1(() =>{
    task2(() => {
        task3(() =>{
            task4(() => {
                task5(() => console.log("All tasks Completed"));
            });
        });
    });
});

