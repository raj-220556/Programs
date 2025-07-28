// Dice Roller program

function rollDice(){
    const numOfDice = document.getElementById("numofdice").value;
    const diceResult = document.getElementById("diceResult");
    const diceImages = document.getElementById("diceImages");

    const values = [];
    const images = [];

    for (let i = 0; i < numOfDice; i++) {
        const random = Math.floor(Math.random() * 6) + 1;
        values.push(random);
        images.push(`<img src= "dice${random}.png " alt="Dice ${random}">`);
    }

    diceResult.textContent = `Dice: ${values.join(",")}`;
    diceImages.innerHTML = images.join('');
}