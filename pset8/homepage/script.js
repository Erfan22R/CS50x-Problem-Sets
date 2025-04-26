document.addEventListener("DOMContentLoaded", function() {
    const form = document.getElementById("contact-form");
    const nameInput = document.getElementById("name");
    const emailInput = document.getElementById("email");
    const messageInput = document.getElementById("message");

    form.addEventListener("submit", function(e) {
        e.preventDefault();
        let valid = true;

        document.querySelectorAll(".error").forEach(function(error) {
            error.remove();
        });

        if (nameInput.value.trim() === "") {
            showError(nameInput, "Name is required");
            valid = false;
        }

        if (!validateEmail(emailInput.value.trim())) {
            showError(emailInput, "Please enter a valid email");
            valid = false;
        }

        if (messageInput.value.trim() === "") {
            showError(messageInput, "Message cannot be empty");
            valid = false;
        }

        if (valid) {
            alert("Your message has been sent successfully!");
            form.reset();
        }
    });

    function showError(input, message) {
        const error = document.createElement("div");
        error.classList.add("error");
        error.textContent = message;
        input.insertAdjacentElement("afterend", error);
    }

    function validateEmail(email) {
        const re = /^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}$/;
        return re.test(String(email).toLowerCase());
    }
});
