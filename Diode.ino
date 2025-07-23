int signalPin = 19;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(signalPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int signalState = digitalRead(signalPin);

  if (signalState == HIGH) {
    Serial.println("High voltage detected!");
  } else{
    Serial.println("No high voltage detected(safe)");
  }

  delay(500);

}
