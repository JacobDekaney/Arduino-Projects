int G = 11;
int R = 10;
int Y = 9;
int B = 8;

void Clear() {
  digitalWrite(G, LOW);
  digitalWrite(R, LOW);
  digitalWrite(Y, LOW);
  digitalWrite(B, LOW);
}

void RGBY(void) {
  digitalWrite(G, HIGH);
  delay(1000);
  digitalWrite(R, HIGH);
  delay(1000);
  digitalWrite(Y, HIGH);
  delay(1000);
  digitalWrite(B, HIGH);
  delay(1000);
  Clear();
  delay(1000);
}

void setup() {
  pinMode(G,OUTPUT);
  pinMode(R,OUTPUT);
  pinMode(Y,OUTPUT);
  pinMode(B,OUTPUT);
}

void loop() {
  RGBY();
}
