int Electromagnet = 2;
int button = 5;
int buttonstate;

void setup() {
  Serial.begin(9600);
  pinMode(Electromagnet, OUTPUT);
  pinMode(button, INPUT_PULLUP);
}
void loop() {
  buttonstate = digitalRead(button);
  if (buttonstate == LOW)
  {
    Serial.println("ON");
    digitalWrite(Electromagnet, HIGH);
    delay(200);

  }
  else
  {
    Serial.println("OFF");
    digitalWrite(Electromagnet, LOW);
    delay(200);
  }
}
