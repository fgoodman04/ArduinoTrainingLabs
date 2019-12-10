
/* Programmer: Faith Goodman
   Date: 12/3/19
   Program: Potientiometer
   
   AnalogReadSerial
   Reads an analog pinput on pin A0, prints to the serial monitor
   
   Update: 12/10/19
   Add serial read to be able to read voltages from 0 to 5 volts
*/


void setup() {
  // Initialize the serial communication at 9600 bits per second
  Serial.begin(9600);
}

void loop() {
  // Read the input on analog pin 0
  int potientiometerValue = analogRead(A0);

  // Convert the analog read from 0-1023 to 0-5 volts
  float voltage = potientiometerValue * (5.0 / 1023.0);

  // Print the value of the potientiometer
  Serial.println(voltage);

  //Add a delay for stability
  delay(1);

}
