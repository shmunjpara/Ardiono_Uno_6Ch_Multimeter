/*
  AnalogReadSerial

  Reads an analog input on pin 0 to 5, prints the result to the Serial Monitor.
  Graphical representation is available using Serial Plotter (Tools > Serial Plotter menu).
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/AnalogReadSerial
*/

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorA0Value = analogRead(A0);
  float voltageA0 = sensorA0Value * (5.0 / 1023.0);
  Serial.print(voltageA0);
  delay(10);        // delay in between reads for stability
Serial.print('N');

  int sensorA1Value = analogRead(A1);
  float voltageA1 = sensorA1Value * (5.0 / 1023.0);
  Serial.print(voltageA1);
  delay(10);        // delay in between reads for stability
Serial.print('N');

  int sensorA2Value = analogRead(A2);
  float voltageA2 = sensorA2Value * (5.0 / 1023.0);
  Serial.print(voltageA2);
  delay(10);        // delay in between reads for stability
Serial.print('N');

  int sensorA3Value = analogRead(A3);
  float voltageA3 = sensorA3Value * (5.0 / 1023.0);
  Serial.print(voltageA3);
  delay(10);        // delay in between reads for stability
Serial.print('N');

  int sensorA4Value = analogRead(A4);
  float voltageA4 = sensorA4Value * (5.0 / 1023.0);
  Serial.print(voltageA4);
  delay(10);        // delay in between reads for stability
Serial.print('N');

  int sensorA5Value = analogRead(A5);
  float voltageA5 = sensorA5Value * (5.0 / 1023.0);
  Serial.print(voltageA5);
  delay(10);        // delay in between reads for stability
  Serial.println();

  
}
