int In = A0;
int V = 11;
int sensorReading;
char alpha[26] = {'a','b','c','d','e','f','g','h','i','j','k','l',
'm','n','o','p','q','r','s','t','u','v','w','x','y','z'};
int maxR = 1023;
int Interval = maxR / 26;

void setup() {
  pinMode(In, INPUT);
  pinMode(V, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(V,HIGH);
  sensorReading = analogRead(In);
  for (int i = 0; i < 26; i++) {
    Serial.print(sensorReading % Interval);
    if (i == (sensorReading % Interval)) {
      Serial.print(alpha[i]);
    }
  }
  Serial.print('\n');
  //Serial.print(sensorReading);
  //Serial.print('\n');
  delay(2000);
}
