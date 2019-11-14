
/* Programmer: Faith Goodman
 * Date: 11.14.19
 * Program: Digital Read and Serial Port
 * This program will read a digital input on pin 2, prints the 
 * result to the serial monitor
 */

//digital pin 2 has a push button attached to it
int pushButton = 2;

void setup() {
  //initializes serial communication at 9600 bits per second
  Serial.begin(9600);
  //make the pushButton pin an input
  pinMode(pushButton, INPUT);

}

void loop() {
  //read the input pin
  int buttonState = digitalRead(pushButton);
  //prints out the state of the button
  Serial.println(buttonState);
  delay(250);
  //delay in between readings for stability
  
}
