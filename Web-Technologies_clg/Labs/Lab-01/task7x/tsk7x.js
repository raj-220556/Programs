// Function 1: Personalized Greeting using prompt()
function displayGreeting() {
    // 1. Use prompt() to ask the user for their name
    const userName = prompt("Please enter your name for a personalized greeting:");
    const greetingElement = document.getElementById('greeting');
    
    if (userName) {
        // Display personalized greeting
        greetingElement.textContent = `Hello, ${userName}! Welcome to the Interactive Form.`;
    } else {
        // Fallback greeting
        greetingElement.textContent = `Hello, Guest! Welcome to the Interactive Form.`;
    }
}

// Function 2: Input Validation Logic
function validateForm(event) {
    // Prevent the default form submission (which reloads the page)
    event.preventDefault(); 
    
    let isValid = true;

    // --- Get all input values ---
    const idInput = document.getElementById('id');
    const nameInput = document.getElementById('name');
    const branchSelect = document.getElementById('branch');
    const genderMale = document.getElementById('malebtn');
    const genderFemale = document.getElementById('femalebtn');
    
    // --- Error message elements ---
    const idError = document.getElementById('id-error');
    const nameError = document.getElementById('name-error');
    const genderError = document.getElementById('gender-error');
    const branchError = document.getElementById('branch-error');

    // Reset errors
    idError.textContent = '';
    nameError.textContent = '';
    genderError.textContent = '';
    branchError.textContent = '';
    
    // --- Validation Rules ---

    // 1. Validate ID Number (e.g., must start with N and be at least 5 characters)
    const idValue = idInput.value.trim();
    if (idValue === "") {
        idError.textContent = 'ID Number is required.';
        isValid = false;
    } else if (!/^N[0-9]{4,}$/i.test(idValue)) {
        idError.textContent = 'ID must start with N followed by at least 4 digits.';
        isValid = false;
    }

    // 2. Validate Name (e.g., required and min length)
    const nameValue = nameInput.value.trim();
    if (nameValue.length < 3) {
        nameError.textContent = 'Name must be at least 3 characters long.';
        isValid = false;
    }

    // 3. Validate Gender (at least one radio button checked)
    if (!genderMale.checked && !genderFemale.checked) {
        genderError.textContent = 'Please select a gender.';
        isValid = false;
    }

    // 4. Validate Branch (must be a selected value, not the default disabled one)
    if (branchSelect.value === "") {
        branchError.textContent = 'Please select a branch.';
        isValid = false;
    }


    // --- Final Action ---
    if (isValid) {
        alert("Form Data Submitted Successfully!\n" +
              "ID: " + idValue + "\n" +
              "Name: " + nameValue + "\n" +
              "Gender: " + (genderMale.checked ? 'Male' : 'Female') + "\n" +
              "Branch: " + branchSelect.value);
        // If truly submitting data to a server, you would remove event.preventDefault() 
        // or use an AJAX call here. For this task, we'll stop after the alert.
    }
}

// Function 3: Trigger Browser Print Dialog
function triggerPrint() {
    window.print();
}


// --- Event Listeners and Initial Setup ---

// 1. Call the greeting function immediately on page load
window.onload = displayGreeting; 

// 2. Attach the validation function to the form's submit event
const form = document.getElementById('dataForm');
form.addEventListener('submit', validateForm);

// 3. Attach the print function to the print button
const printButton = document.getElementById('printBtn');
printButton.addEventListener('click', triggerPrint);