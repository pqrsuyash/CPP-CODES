function calculateTime() {
    const speed = parseFloat(document.getElementById('train-speed').value);
    const length = parseFloat(document.getElementById('train-length').value);

    if (isNaN(speed) || isNaN(length) || speed <= 0 || length <= 0) {
        alert('Please enter valid values for train speed and length.');
        return;
    }

    const timeInSeconds = (length / (speed * 1000 / 3600)) * 60; // time = distance / speed

    const currentTime = new Date();
    const gateOpenTime = new Date(currentTime.getTime() + (timeInSeconds * 1000)); // Adding time in milliseconds

    const hours = gateOpenTime.getHours();
    const minutes = gateOpenTime.getMinutes();

    document.getElementById('result').innerText = `${hours}:${minutes < 10 ? '0' + minutes : minutes}`;
}
