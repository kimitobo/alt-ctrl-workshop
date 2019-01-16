/*  
 
 *********************************************************************
 *                                                                   *
 * alt.ctrl.digital-analog - read two foot steps and sound volume    *
 *                                                                   *
 *********************************************************************

 */ 

// digital pin 2 and 3 have foot-step switches, analog 0 has mic-sensor
int right = 2;
int left = 3;
int soundVolume = A0;

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // make the pushbutton's pin an input:
  pinMode(left, INPUT);
  pinMode(right, INPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the foot switchess:
  int buttonStateLeft = digitalRead(left);
  int buttonStateRight = digitalRead(right);
  
  // print out the state of the foot-switches and sound volume
  Serial.print(buttonStateLeft);
  Serial.print("\t");   // separate with tabs 
  Serial.print(buttonStateRight);
  Serial.print("\t");   // separate with tabs
  Serial.print(analogRead(soundVolume));
  Serial.print("\t");   // separate with tabs
  Serial.println();     // add newline
  delay(1);             // delay in between reads for stability
}



