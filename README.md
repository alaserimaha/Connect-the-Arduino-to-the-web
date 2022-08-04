# Connect-the-Arduino-to-the-web
How can we design a web page that converts audio to text, and then sends this text to the Arduino to move the robot arm left or right?

Previously, we learned how to design a website to convert audio to text , To see: [speech to text](https://github.com/alaserimaha/speech-to-text)

And also we learned how to download the Arduino IDE to write code , To see: [Getting Started With ESP32](https://github.com/alaserimaha/Getting-Started-With-ESP32)

Now to complete the project, using [Web Serial API](https://web.dev/serial/) (which helps us to connect the website to the Arduino) through some steps:

## 1. Installation - JavaScript
## 2. Installation - Arduino
## 3. JavaScript Usage
## 4. Arduino Usage

## 1. Installation - JavaScript
There are several ways to install Web Serial API in a web page via JavaScript,
We will install Via <script> tag

This is the easiest method to get you started immediately. Just include the script tag inside the <head> of your document and you're good to go:

    
       <script lang="text/javascript" src="https://unpkg.com/simple-web-serial@latest/dist/simple-serial.min.js"></script>

## 2. Installation - Arduino
    1- Open the Arduino IDE
    2- Open the Library Manager
    3- Enter "Simple Web Serial" in the search field
    4- Click on Simple Web Serial and hit the install button. 
After the download is complete, the Arduino is ready to use!

## 3. JavaScript Usage
We will add some command lines in the previous web page to open a connection between the Arduino and the web page and then we will send the events
### Connection start
To start connection, store an instance of it in a variable by calling its connect method:

    
       - const connection = SimpleSerial.connect(); 
       - Select the Port (if you don’t see the COM Port in your Arduino IDE, you need to install the CP210x USB to UART Bridge VCP Drivers)):
       - Open the following example under File > Examples > WiFi (ESP32) > WiFiScan
       - A new sketch opens in your Arduino IDE
       - Press the Upload button in the Arduino IDE. Wait a few seconds while the code compiles and uploads to your board.
       - If everything went as expected, you should see a “Done uploading.” message.
       - Open the Arduino IDE Serial Monitor at a baud rate of 115200
       - Press the ESP32 on-board Enable button and you should see the networks available near your ESP32
       

    

    

