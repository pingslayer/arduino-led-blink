int ledPin = 13;
int blinkInterval = 100;
int blinkCountLimit = 1;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  blinkLed();
  delay(2000);

}

void blinkLed() {
  Serial.print("blinking started.....");
  for(int blinkCount = 1; blinkCount <= blinkCountLimit; blinkCount++) {
    digitalWrite(ledPin, HIGH);
    delay(blinkInterval); 
    digitalWrite(ledPin, LOW);
    delay(blinkInterval); 
  }
  Serial.print("blinking stopped");
  Serial.print(" (");
  Serial.print(blinkCountLimit);
  Serial.println(")");
  blinkCountLimit++;
}


