/* 
 
 ***********************************************************************
 **                                                                   **
 ** alt.ctrl.analogue - analogue interface example                    **
 **                                                                   **
 ***********************************************************************

 */
 
const int tooth_top = A0;   // Analog input pin that the IR proximity sensor is attached to
const int tooth_side = A1;   // Analog input pin that the IR proximity sensor is attached to

void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600);
}

void loop() {
  // read the analog in value:
  // write sensor value to serial
  Serial.print(analogRead(tooth_top));
  Serial.print("\t");
  Serial.print(analogRead(tooth_side)); 
  Serial.print("\t"); 
  Serial.println();
  // wait 100 milliseconds
  delay(100);
}
