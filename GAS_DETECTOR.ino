// scientist BENIEL'S LAB
// GAS DETECTOR

int Input = A0;
int Buzzer = 4;
// VAL INTEGER
int val;
int MAX = 400;

void setup() {
  Serial.begin(9600);
  pinMode(Input ,INPUT);
  pinMode(Buzzer ,OUTPUT);
}

void loop() {
  val = analogRead(A0);
  if (val >= MAX) {
    digitalWrite(Buzzer ,HIGH);
    Serial.println("GAS LEAKING");
  }
  else {
    digitalWrite(Buzzer ,LOW);
    Serial.println("NORMAL");
  }
}
