// Wheather APP

const weatherFrom = document.querySelector(".weatherFrom");
const cityinput = document.querySelector(".cityinput");
const card = document.querySelector(".card");
const apiKey = "4b3fe3ad6a247dc93c62fd843e65190c"

weatherFrom.addEventListener("submit",async event =>{

    event.preventDefault();

    const city = cityinput.value.trim();

    if(city){
        try{
            const weatherData = await getWeatherData(city);
            displayWeather(weatherData);
        }
        catch(error){
            console.log(error);
            displayError(error);
        }

    }
    else{
        displayError("Please Enter a City")
    }
});

async function getWeatherData(city){
    
    const apiUrl = `https://api.openweathermap.org/data/2.5/weather?q=${city}&appid=${apiKey}`;

    const reposnse = await fetch(apiUrl);
    // console.log(reposnse);

    if(!reposnse.ok){
        throw new Error("Could not fetch weather");
    }

    return await reposnse.json();
}

function displayWeather(data){
    // console.log(data); 
    const {name: city,
            main: {temp, humidity},
            weather : [{description, id}]} = data;

    card.textContent = "";
    card.style.display = "flex";

    const cityElement = document.createElement("h1");
    const tempElement = document.createElement("p");
    const humidityElement = document.createElement("p");
    const descriptionElement = document.createElement("p");
    const weatherEmoji = document.createElement("p");

    cityElement.textContent = city;
    tempElement.textContent = `${(temp - 273.15).toFixed(1)}C`;
    humidityElement.textContent = `Humidity: ${humidity}%`;
    descriptionElement.textContent = `Description: ${description}`;
    weatherEmoji.textContent = getWeatherEmoji(id);

    cityElement.classList.add("citydisplay");
    tempElement.classList.add("tempdisplay");
    humidityElement.classList.add("humidity");
    descriptionElement.classList.add("description");
    weatherEmoji.classList.add("weatherEmoji");

    card.appendChild(cityElement);
    card.appendChild(tempElement);
    card.appendChild(humidityElement);
    card.appendChild(descriptionElement);
    card.appendChild(weatherEmoji);
}

function getWeatherEmoji(weatherId){
    switch(true){
        case weatherId >= 200 && weatherId <= 232:
            return "⛈️";
        case weatherId >= 300 && weatherId <= 321:
            return "🌧️";
        case weatherId >= 500 && weatherId <= 531:
            return "🌧️";
        case weatherId >= 600 && weatherId <= 622:
            return "❄️";
        case weatherId >= 701 && weatherId <= 781:
            return "🌫️";
        case weatherId >= 800:
            return "☀️";
        default:
            return "?";
    }
}

function displayError(message){
    const errorElement = document.createElement("p");
    errorElement.textContent = message;
    errorElement.classList.add("errordisplay");

    card.textContent = "";
    card.style.display = "flex";
    card.appendChild(errorElement);
}