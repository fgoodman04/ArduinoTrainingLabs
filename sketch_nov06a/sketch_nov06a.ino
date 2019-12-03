
/* Programmer: Faith Goodman
   Date: 11.6.19
   Program: Blink
   This program will turn on an LED for a certain
   amount of time, turn it off, and back on in a While Loop

  Merged 12.2.19

   Programmer: Faith Goodman
   Date: 11.14.19
   Program: Digital Read and Serial Port
   This program will read a digital input on pin 2, prints the
   result to the serial monitor
*/

//intitialize the LED to Pin 13

int led = 13;
// Digital pin 2 has a push button attached to it
int pushButton = 2;


void setup() {
  // Using the function pinMode to call the variable led and provide Output
  pinMode(led, OUTPUT);

  // Initializes serial communication at 9600 bits per second
  Serial.begin(9600);
  //make the pushButton pin an input
  pinMode(pushButton, INPUT);

}

void loop() {

  // Read the input pin
  int buttonState = digitalRead(pushButton);
  //prints out the state of the button
  Serial.println(buttonState);
  if (buttonState == HIGH) {
    digitalWrite(led, HIGH);
  }
  else {
    digitalWrite(led, LOW);
  }

  delay(1);
  //delay in between readings for stability
}
