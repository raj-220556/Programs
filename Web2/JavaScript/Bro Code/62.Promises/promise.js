// Promise  = An Object that manages asynchronous operations.
//            Wrap a Promise Object around {asynchronous code}
//            "I promise to return a value"
//            PENDING -> RESOLVED or REJECTED
//            new Promise((resolve, reject) => {asynchronous code})

// DO THESE CHORES IN ORDER

// 1.WALK THE DOG
// 2.CLEAN THE KITCHEN
// 3.TAKE OUT THE TRASH

// function walkDog(){

//     return new Promise((resolve, reject) => {
//         setTimeout(() => {
//             resolve("You walk the dog !");
//         }, 1500);
//     });
// }

// function cleanKitchen(){

//     return new Promise((resolve, reject) => {
//         setTimeout(() => {
//             resolve("You clean the kitchen!");
//         }, 2500);
//     });
// }

// function takeOutTrash(){

//     return new Promise((resolve, reject) => {
//         setTimeout(() => {
//             resolve("You take out the trash !");
//         }, 500);
//     })
// }

// // Prmoise we are method Chaining

// // walkDog().then(value => console.log(value));

// walkDog().then(value => {console.log(value); return cleanKitchen()})
//          .then(value => {console.log(value); return takeOutTrash()})
//          .then(value => {console.log(value); console.log("You finished all the Chores");});


// -------using reject ----

function walkDog(){

    return new Promise((resolve, reject) => {

        setTimeout(() => {
            const dogwalked = true;
            if(dogwalked){
                resolve("You walk the dog !");
            }else{
                reject("You didn't walk the dog");
            }
            
        }, 1500);
    });
}

function cleanKitchen(){

    return new Promise((resolve, reject) => {

        setTimeout(() => {
            const kitchencleaned = true;
            if(kitchencleaned){
                resolve("You clean the kitchen!");  
            }else{
                reject("You didn't clean the kitchen!");
            }
            
        }, 2500);
    });
}

function takeOutTrash(){

    return new Promise((resolve, reject) => {
        setTimeout(() => {
            const trashout = false;
            if(trashout){
                resolve("You take out the trash !");
            }
            else{
                reject("You didn't take out the trash !");
            }
            
        }, 500);
    })
}


walkDog().then(value => {console.log(value); return cleanKitchen()})
         .then(value => {console.log(value); return takeOutTrash()})
         .then(value => {console.log(value); console.log("You finished all the Chores");})
         .catch(error => console.error(error));
// If one is rejected then we don't go to next one




