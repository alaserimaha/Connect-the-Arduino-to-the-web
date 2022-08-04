# Connect-the-Arduino-to-the-web
How can we design a web page that converts audio to text, and then sends this text to the Arduino to move the robot arm left or right?

Previously, we learned how to design a website to convert audio to text , To see: [speech to text](https://github.com/alaserimaha/speech-to-text)

And also we learned how to download the Arduino IDE to write code , To see: [Getting Started With ESP32](https://github.com/alaserimaha/Getting-Started-With-ESP32)

Now to complete the project, using https://web.dev/serial/ (which helps us to connect the website to the Arduino) through some steps:

## 1. Installation - JavaScript
## 2. Installation - Arduino
## 3. JavaScript Usage
## 4. Arduino Usage

## 1. Installation - JavaScript
There are several ways to install Web Serial API in a web page via JavaScript,
We will install Via <script> tag

This is the easiest method to get you started immediately. Just include the script tag inside the <head> of your document and you're good to go:
        - <script lang="text/javascript" src="https://unpkg.com/simple-web-serial@latest/dist/simple-serial.min.js"></script>




