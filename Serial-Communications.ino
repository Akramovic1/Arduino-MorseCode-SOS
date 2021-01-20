int i1;
int i2;
void setup()
{
  Serial.begin(9600);
  Serial.setTimeout(10);
}

void loop()
{
  if(Serial.available()){
    i1 = Serial.parseInt();
    i2 = Serial.parseInt();
    while(i2 == 0){
    	i2 = Serial.parseInt();
    }
    Serial.println(i1);
    Serial.println(i2);
    Serial.println(i1+i2);
    
  } 
}