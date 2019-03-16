int buttonPin = 2;
int buttonState = 0;

void setup() {

  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
  digitalWrite(buttonPin, HIGH);

}


void loop() {
  buttonState = digitalRead(buttonPin);
  if (buttonState == LOW) {
    Serial.println("Hello");
  }

}
