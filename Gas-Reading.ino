
int analogVal;
float x;

void setup() {
  Serial.begin(9600);
  delay(2000);

}

void loop() {
  analogVal=analogRead(A0);
   Serial.print("analog Value: ");
  Serial.println(analogVal);
  delay(1000);
  Serial.print("Gas Value: ");
   x= (analogVal*5.0)/1023;
  Serial.println(x);
  delay(1000);
}
