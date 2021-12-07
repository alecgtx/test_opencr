void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:

}
int first= 33;
int second = 34;
int third = 35;
void loop() {
  Serial.println("Helo World !, WonJae Kim ");
  Serial.write(first);
  Serial.write(second);
  Serial.write(third);
  delay(1000);
  Serial.println(first);
  Serial.println(second);
  Serial.println(third);
  // put your main code here, to run repeatedly:


}

