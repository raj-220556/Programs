// fetch = Function used for making HTTP requests to fetch resources.
//         (JSON style data, images, files)
//         Simplifies asynchronous data fetching in JavaScript and 
//         used for interacting with APIs to retrive and send 
//         data asynchronously over the web.
//     fetch(url, {options});
//     options : {method : "GET"} {method : "POST"} {method: "PUT"} "DELETE"


// ---Connection of Resource---
// fetch("https://pokeapi.co/api/v2/pokemon/pikachu")  //taken from pokeapi.co
//      .then(response => console.log(response))
//      .catch( error => console.error(error));

// ---- Fetching JSON Data--- Using data 
// fetch("https://pokeapi.co/api/v2/pokemon/pikachu")
//      .then(response => response.json()) //return Promise
//      .then(data => {
//         console.log(data);
//         console.log(data.name);
//         console.log(data.id);
//         console.log(data.weight);
//      })
//      .catch( error => console.error(error));

// // ----- Fetching Data Which is Not There
// fetch("https://pokeapi.co/api/v2/pokemon/Raj") //maked as Raj
//      .then(response =>{
//         if(!response.ok){
//             throw new Error("Couldn't fetch Resource"); //HTTP 404
//         }
//         return response.json();
//      })
//      .then(data => {
//         console.log(data);
//         console.log(data.name);
//         console.log(data.id);
//         console.log(data.weight);
//      })
//      .catch( error => console.error(error));

// // ---- fetching By using Async & Await
// async function fetchdata(){
    
//     try{
//         const response  = await fetch("https://pokeapi.co/api/v2/pokemon/typhlosion");

//         if(!response.ok){
//             throw new Error("Could not fetch resource");
//         }
//         const data = await response.json(); //retuns Promise So we use Await
//         console.log(data.name);
//         console.log(data);
//     }catch(error){
//         console.error(error);
//     }
// }

// fetchdata();


// ------- Creating to search a Pokemon and Displaying It---
async function fetchdata(){
    
    try{

        const pokeName = document.getElementById("pokeName").value.toLowerCase();

        const response  = await fetch(`https://pokeapi.co/api/v2/pokemon/${pokeName}`);

        if(!response.ok){
            throw new Error("Could not fetch resource");
        }
        const data = await response.json(); //retuns Promise So we use Await

        const pokeSprite = data.sprites.front_default;

        const pokeimg = document.getElementById("pokeimg");

        pokeimg.src = pokeSprite;
        pokeimg.style.display = "block";
        
    }catch(error){
        console.error(error);
    }
}