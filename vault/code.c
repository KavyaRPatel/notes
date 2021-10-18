// C++ code
//
float x,y; 
void setup()
{
  pinMode(11, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
    	digitalWrite(11,HIGH);

	if(digitalRead(7)==HIGH)
    {
    	digitalWrite(3, HIGH);
      	digitalWrite(2, LOW);
    }
  	else
    {
    	digitalWrite(3, LOW);
    	digitalWrite(2,HIGH);
    }
  
}