void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  //Zet led aan -> 5 sec aan -> let uit -> 1 sec uit
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(5000);                       
  digitalWrite(LED_BUILTIN, LOW);    
  delay(1000);                       
}
