


int faruk=13;

int Hossain=12;
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(faruk, OUTPUT);
  pinMode(Hossain, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(faruk, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(faruk, LOW);    // turn the LED off by making the voltage LOW
  delay(100);              // wait for a second

    digitalWrite(Hossain, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(Hossain, LOW);    // turn the LED off by making the voltage LOW
  delay(100);              // wait for a second

  
}
