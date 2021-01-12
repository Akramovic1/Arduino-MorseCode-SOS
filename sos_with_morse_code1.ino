
int ledPin = 13;
int unitTime = 500;
void setup()
{
  pinMode(ledPin, OUTPUT);
}
void loop()
{
  	//S
  	digitalWrite(ledPin, HIGH);
	delay(unitTime);
	digitalWrite(ledPin, LOW);
	delay(unitTime);
  
  	digitalWrite(ledPin, HIGH);
	delay(unitTime);
	digitalWrite(ledPin, LOW);
	delay(unitTime);
  
  	digitalWrite(ledPin, HIGH);
	delay(unitTime);
	digitalWrite(ledPin, LOW);
	delay(3*unitTime);
  
  	//O
  	digitalWrite(ledPin, HIGH);
	delay(3*unitTime);
	digitalWrite(ledPin, LOW);
	delay(unitTime);
  
  	digitalWrite(ledPin, HIGH);
	delay(3*unitTime);
	digitalWrite(ledPin, LOW);
	delay(unitTime);
  
  	digitalWrite(ledPin, HIGH);
	delay(3*unitTime);
	digitalWrite(ledPin, LOW);
	delay(3*unitTime);
  
  	//S
  	digitalWrite(ledPin, HIGH);
	delay(unitTime);
	digitalWrite(ledPin, LOW);
	delay(unitTime);
  
  	digitalWrite(ledPin, HIGH);
	delay(unitTime);
	digitalWrite(ledPin, LOW);
	delay(unitTime);
  
  	digitalWrite(ledPin, HIGH);
	delay(unitTime);
	digitalWrite(ledPin, LOW);
	delay(7*unitTime);
  
  
  	
}