
/* Programmer: Faith Goodman
   Date: 12/10/19
   Program: LED and Potientiometer

   Read analog port and turn on LED at a determind threshold
*/

const int analogPin = A0;
const int ledPin = 13;
float threshold = 2.25;

void setup() {
  // Initialize the LED pin as an output
  pinMode(ledPin, OUTPUT);
  // Initialize the serial communication at 9600 bits per second
  Serial.begin(9600);
}

void loop() {
  // Read the input on analog pin 0
  int potientiometerValue = analogRead(analogPin);
  //Conver the analog read from 0 - 1-23 to 0-5 volts
  float voltage = potientiometerValue * (5.0 / 1023.0);

  // Print the value of the potientiometer
  Serial.println(voltage);

  // If the analog value is higher than Threshold Variable it will turn on the LED
  if (voltage > threshold) {
    digitalWrite(ledPin, HIGH);
  }
  else {
    digitalWrite(ledPin, LOW);
  }

  //Add a delay for stability
  delay(1);

}
