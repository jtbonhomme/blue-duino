#define BUZZ  12
#define LED   13
String readString;

void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  pinMode(BUZZ, OUTPUT);
  Serial.println("Arduino initialized bluetooth communication");
}

void loop() {
  while (Serial.available()) {
    delay(3);  
    char c = Serial.read();
    Serial.println("\n  received:");
    Serial.print(c, DEC); 
    if (c == 1)     
    {
      digitalWrite(LED,  HIGH);
      digitalWrite(BUZZ, HIGH);
      delay(50);
      digitalWrite(LED,  LOW);
      digitalWrite(BUZZ, LOW);
    }
    if (c == 0)
    {
      digitalWrite(LED,  LOW);
      digitalWrite(BUZZ, LOW);
    }
  }
}
