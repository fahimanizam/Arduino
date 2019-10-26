
const int buttonPin = 2;   
const int ledPin =  6;    
//const int buttonPinq = 4;
const int ledPinq =  7; 

int buttonState = 0;        

void setup() {

  pinMode(ledPin, OUTPUT);
  pinMode(ledPinq, OUTPUT);
 
  pinMode(buttonPin, INPUT);
//pinMode(buttonPinq, INPUT);
}
void loop() {
  buttonState = digitalRead(buttonPin);

  
  if (buttonState == HIGH) {
    
    digitalWrite(ledPin, HIGH); digitalWrite(ledPinq, LOW);
  } else {
    
    digitalWrite(ledPin, LOW); digitalWrite(ledPinq, HIGH);
  }
delay(20);
}
