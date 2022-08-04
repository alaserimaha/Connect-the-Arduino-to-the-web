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

    
       const connection = SimpleSerial.connect(); 
       
### Sending events
Define events you want to send to the Arduino ,any valid JSON can be sent as parameter :
    
    connection.send('event-with-string', parameter);
    
To see the code file for the entire web page after adding the modifications, you can find it from the attachments above [speech to text HTML file](https://github.com/alaserimaha/Connect-the-Arduino-to-the-web/blob/main/speech.html)

## 4. Arduino Usage
At the top of the sketch create an instance of Simple Web Series and add connection speed used in the JavaScript library ( 57600 is the default)

    #include <SimpleWebSerial.h>
    SimpleWebSerial WebSerial;
    
    void setup() {
        Serial.begin(57600);
    }
    

    

