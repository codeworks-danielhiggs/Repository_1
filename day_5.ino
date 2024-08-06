int red = 12;
int green = 11;
int blue = 10;
int SWITCH = 2;
int SWITCH2 = 3;
int SWITCH3 = 4;

void setup() {
  // put your setup code here, to run once:
pinMode(red, OUTPUT);
pinMode(green, OUTPUT);
pinMode(blue, OUTPUT);
pinMode(SWITCH, INPUT);
pinMode(SWITCH2 = INPUT);
pinMode(SWITCH3, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(SWITCH) == HIGH) {
digitalWrite(red, HIGH);
delay(500);
digitalWrite(red, LOW);
digitalWrite(green, HIGH);
delay(500);
digitalWrite(green, LOW);
digitalWrite(blue, HIGH);
delay(500);
digitalWrite(blue, LOW);
  }
if (digitalRead(SWITCH2) == LOW) { 
digitalWrite(red, HIGH);
delay(500);
digitalWrite(red, LOW);
digitalWrite(green, HIGH);
delay(500);
digitalWrite(green, LOW);
digitalWrite(blue, HIGH);
delay(500);
digitalWrite(blue, LOW);
digitalWrite(red, HIGH);
digitalWrite(green, HIGH);
delay(500);
digitalWrite(red, LOW);
digitalWrite(blue, HIGH);
delay(500);
digitalWrite(green, LOW);
digitalWrite(red, HIGH);
delay(500);
digitalWrite(blue, LOW);
}
if (digitalRead(SWITCH3) == HIGH) {
digitalWrite(red, HIGH);
digitalWrite(green, HIGH);
digitalWrite(blue, HIGH);
}
  if (digitalRead(SWITCH) == LOW) {
   if (digitalRead(SWITCH2) == LOW) {
     if (digitalRead(SWITCH3) == LOW) {
digitalWrite(red, LOW);
digitalWrite(green, LOW);
digitalWrite(blue, LOW);
  }
  }
  }
}