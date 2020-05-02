int potPin = 2;               //potmeter pin
int ledPin = LED_BUILTIN;     //Ingebouwde LED pin
int potVal = 0;               //Waarde van de potmeter

void setup() {
  Serial.begin(9600);         //stel de seriele moter in           
  pinMode(ledPin, OUTPUT);    //stel de ledpin in als uitvoer       
}

void loop() {
  potVal = analogRead(potPin);  //lees de analoge waarde van de potmeter
  Serial.println(potVal);       //toon de waarde in de seriele monitor

  digitalWrite(ledPin, HIGH);   //zet de ingebouwde led aan
  delay(potVal);                //pauzeer de waarde van de potmeter

  digitalWrite(ledPin, LOW);    //zet de ingebwouwde led uit
  delay(potVal);                //pauzeer de waaarde van de potmeter
  
  }
