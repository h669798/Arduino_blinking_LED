void setup() {
  // Where the output will start on board:
  pinMode(7,OUTPUT);
}

void loop() {
  // This code controls the amount of voltage looping through the pin.
  // "HIGH" means 5v /on
  // "LOW" means 0v  /off
  // "delay" pauses it with parameter in ms (here one second):
  digitalWrite(7, HIGH);
  delay(1000);
  digitalWrite(7, LOW);
  delay(1000);
}
