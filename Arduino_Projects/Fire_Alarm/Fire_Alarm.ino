const int ledpin=12; // ledpin,flamepin and buzpin are not changed throughout the process
const int flamepin=A0;
const int buzpin=8;
const int GAS=A5;
const int threshold=300;// sets threshold value for flame sensor
int flamesensvalue=0; // initialize flamesensor reading

void setup() 
{
 Serial.begin(9600);
 pinMode(ledpin,OUTPUT);
 pinMode(flamepin,INPUT);
 pinMode(buzpin,OUTPUT);
}

void loop() 
{ 
  int sensorValue = analogRead(GAS);
  Serial.println(sensorValue);
  flamesensvalue=analogRead(flamepin); // reads analog data from flame sensor 
  if (flamesensvalue<=threshold || sensorValue >= 300) 
  { // compares reading from flame sensor with the threshold value
     digitalWrite(ledpin,HIGH); //turns on led and buzzer
     tone(buzpin,100);
     }
  else
  {
    digitalWrite(ledpin,LOW); //turns led off led and buzzer
    noTone(buzpin); 
  }
}
