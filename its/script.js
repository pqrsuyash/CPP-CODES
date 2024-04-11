// Function to generate a random light color
function getRandomLightColor() {
    const r = Math.floor(Math.random() * 56) + 200;
    const g = Math.floor(Math.random() * 56) + 200;
    const b = Math.floor(Math.random() * 56) + 200;
    return `rgb(${r},${g},${b})`;
}

// Function to change background color periodically
function changeBackgroundColor() {
    document.body.style.backgroundColor = getRandomLightColor();
}

// Function to calculate gate open time
function calculateTime() {
    const speed = parseFloat(document.getElementById('train-speed').value);
    const length = parseFloat(document.getElementById('train-length').value);

    if (isNaN(speed) || isNaN(length) || speed <= 0 || length <= 0) {
        alert('Please enter valid values for train speed and length.');
        return;
    }

    const timeInSeconds = (length / (speed * 1000 / 3600)) * 60;
    const currentTime = new Date();
    const gateOpenTime = new Date(currentTime.getTime() + (timeInSeconds * 1000));

    const hours = gateOpenTime.getHours();
    const minutes = gateOpenTime.getMinutes();

    document.getElementById('result').innerText = `Gate will open again at ${hours}:${minutes < 10 ? '0' + minutes : minutes}`;

    const countdown = setInterval(() => {
        const now = new Date();
        const remainingTime = gateOpenTime - now;
        if (remainingTime <= 0) {
            clearInterval(countdown);
            document.getElementById('result').innerText = 'Gate is open!';
            document.getElementById('countdown').innerText = '';
            gateOpens();
        } else {
            const seconds = Math.floor(remainingTime / 1000);
            const minutes = Math.floor(seconds / 60);
            const formattedSeconds = seconds % 60;
            document.getElementById('countdown').innerText = `Time remaining: ${minutes}:${formattedSeconds < 10 ? '0' + formattedSeconds : formattedSeconds}`;
        }
    }, 1000);

    const gateAnimation = document.getElementById('gate-animation');
    gateAnimation.style.opacity = '1'; // Show the gate animation
}

// Function to change gate animation symbol when gate opens
function gateOpens() {
    document.getElementById('gate-animation').innerHTML = '&#128275;'; // Unicode for unlocked padlock symbol
}

// Call the function to change background color every 5 seconds
setInterval(changeBackgroundColor, 5000);

// Add event listener to calculate button
document.getElementById('calculate-btn').addEventListener('click', calculateTime);
