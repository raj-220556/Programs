// .checked = property that determine the checked state of an 
//             HTML checkbox or radio button element

const myCheckBox = document.getElementById("myCheckBox");
const visaBtn = document.getElementById("radiobtn1");
const masterBtn = document.getElementById("radiobtn2");
const paypalBtn = document.getElementById("radiobtn3");
const submitBtn = document.getElementById("mySubmit");
const subResult = document.getElementById("subResult");
const paymentResult = document.getElementById("paymentResult");

let subscribe;


submitBtn.onclick = function(){
    subscribe = myCheckBox.checked;
    if(subscribe){
        subResult.textContent = "You are Successfully Subscribed to TwoGuysGaming";
    } else {
        subResult.textContent = "You are Not Subscribed, So you may not see me again!";
    }

    // Payment method logic
    if (visaBtn.checked) {
        paymentResult.textContent = "Payment method: Visa";
    } else if (masterBtn.checked) {
        paymentResult.textContent = "Payment method: MasterCard";
    } else if (paypalBtn.checked) {
        paymentResult.textContent = "Payment method: PayPal";
    } else {
        paymentResult.textContent = "No payment method selected.";
    }
}
