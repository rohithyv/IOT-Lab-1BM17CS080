int ledPin = 11; 
int inPin = 2;   
int val = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);  
  pinMode(inPin, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  val = digitalRead(inPin);  
  if (val == HIGH) {         
    digitalWrite(ledPin, HIGH);  
  } else {
    digitalWrite(ledPin, LOW); 
  }
  

}
