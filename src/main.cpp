#include <Arduino.h>
//I Sechan Bae, 000803348 certify that this material is my original work. No other person's work has been used without due acknowledgement. I have not made my work available to anyone else."
unsigned long myTime;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("\n\nHello World");
  Serial.println("\n\nSechan Bae 000803348");
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Time: ");
  myTime=millis();
  Serial.println(myTime);
  delay(2000);
}