void setup() {
 pinMode(2,OUTPUT); //led 1-5 are set up as outputs
 pinMode(3,OUTPUT);
 pinMode(4,OUTPUT);
 pinMode(5,OUTPUT);
 pinMode(6,OUTPUT);
}
int d = 250;
void loop() {
 digitalWrite(2, HIGH); // Turns on LED 1
 delay(d); // wait half a second
 digitalWrite(2, LOW);  // Turns off LED 1
 digitalWrite(3, HIGH); // repeats for LED 2-5
 delay(d);
 digitalWrite(3, LOW);
 digitalWrite(4, HIGH);
 delay(d);
 digitalWrite(4, LOW);
 digitalWrite(5, HIGH);
 delay(d);
 digitalWrite(5, LOW);
 digitalWrite(6, HIGH);
 delay(d);
 digitalWrite(6, LOW);
 digitalWrite(5, HIGH);
 delay(d);
 digitalWrite(5, LOW);   
  digitalWrite(4, HIGH);
 delay(d);
 digitalWrite(4, LOW);
 digitalWrite(3, HIGH);
 delay(d);
 digitalWrite(3, LOW);
}
