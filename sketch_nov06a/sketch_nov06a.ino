
/* Programmer: Faith Goodman
   Date: 12.3.19
   Program: Potientiometer

   AnalogReadSerial
   Reads an analog pinput on pin A0, prints to the serial monitor
*/


void setup() {
  // Initialize the serial communication at 9600 bits per second
  Serial.begin(9600);
}

void loop() {
  // Read the input on analog pin 0
  int potientiometerValue = analogRead(A0);

  // Print the value of the potientiometer
  Serial.println(potientiometerValue);

  //Add a delay for stability
  delay(1);

}
