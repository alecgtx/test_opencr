int x;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.setTimeout(1);
  pinMode(22, OUTPUT);
  pinMode(23, OUTPUT);
  pinMode(24, OUTPUT);
  pinMode(25, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 while (!Serial.available());
 x = Serial.readString().toInt();
   digitalWrite(22,0);
   digitalWrite(23,0);
   digitalWrite(24,0);
   digitalWrite(25,0);
   digitalWrite(13,0);
   
 if (x = 1) {
   digitalWrite(22,1);
  digitalWrite(24,1);
  delay(1000);
  digitalWrite(22,0);
  digitalWrite(24,0);
  delay(1000);
 } else if (x = 2) {
    digitalWrite(23,1);
    digitalWrite(25,1);
    digitalWrite(13,1);
    delay(1000);
    digitalWrite(22,0);
    digitalWrite(25,0);
    digitalWrite(13,0);
    delay(1000);
  } else if (x = 3) {
      digitalWrite(22,1);
      digitalWrite(23,1);
      digitalWrite(24,1);
      digitalWrite(25,1);
      digitalWrite(13,1);
      delay(1000);
      digitalWrite(22,0);
      digitalWrite(23,0);
      digitalWrite(24,0);
      digitalWrite(25,0);
      digitalWrite(13,0);
      delay(1000);
    } else if (x = 4) {
        digitalWrite(22,0);
        digitalWrite(23,0);
        digitalWrite(24,0);
        digitalWrite(25,0);
        digitalWrite(13,0);
        delay(1000);
       } else if (x = 5) {
          digitalWrite(22,1);
          digitalWrite(23,1);
          digitalWrite(24,1);
          digitalWrite(25,1);
          digitalWrite(13,1);
          delay(1000);
          } 

}

