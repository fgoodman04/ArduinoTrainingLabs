
/* Programmer: Faith Goodman
 * Date: 11.6.19
 * Program: Blink
 * This program will turn on an LED for a certain 
 * amount of time, turn it off, and back on in a While Loop
 */

//intitialize the LED to Pin 13

int led = 13;



void setup() {
  // Using the function pinMode to call the variable led and provide Output
  pinMode(led, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
  delay(1000);
}
