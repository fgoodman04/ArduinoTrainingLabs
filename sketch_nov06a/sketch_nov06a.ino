
/* Programmer: Faith Goodman
 * Date: 11.6.19
 * Program: Blink
 * This program will turn on an LED for a certain 
 * amount of time, turn it off, and back on in a While Loop
 * 
 * Update: 11.22.19
 * Program: Update Blink to allow the LED to fade
 */

// Intitializes the LED to Pin 9

int led = 9;

// The pin that the LED is attached to on the Arduino board

int brightness = 0;

// How bright the LED is

int fadeAmount = 5;

// How many point to fade the led

void setup() {
  // Using the function pinMode to call the variable led and provide Output
  pinMode(led, OUTPUT);

}

void loop() {
  // Sets the brightness of pin 9, which is the LED
  analogWrite(led, brightness);

  // Change the brightness for the next time through the loop

  brightness = brightness + fadeAmount;

  //reverse the direction of the fading at the end of the fade

  if (brightness == 0 || brightness == 255) {
    fadeAmount = -fadeAmount;
  }
  delay(30);
}
