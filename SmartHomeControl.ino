char val;
int lightPin = 13;  
int fanPin = 12;    

void setup() {
  pinMode(lightPin, OUTPUT);
  pinMode(fanPin, OUTPUT);
  Serial.begin(9600);
  
  digitalWrite(lightPin, HIGH);
  digitalWrite(fanPin, HIGH);
  
  Serial.println("Smart Home Light and Fan Control Initialized");
}

void loop() {
  if (Serial.available()) {
    val = Serial.read();
    Serial.println(val);
  }

  if (val == '1') {
    digitalWrite(lightPin, LOW);  
    Serial.println("Light ON");
  } 
  else if (val == '2') {
    digitalWrite(lightPin, HIGH);  
    Serial.println("Light OFF");
  }

  if (val == '3') {
    digitalWrite(fanPin, LOW);  
    Serial.println("Fan ON");
  } 
  else if (val == '4') {
    digitalWrite(fanPin, HIGH);  
    Serial.println("Fan OFF");
  }

  delay(100);
}
