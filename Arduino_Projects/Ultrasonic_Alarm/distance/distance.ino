const int trigPin = 9;
const int echoPin = 10;
const int buzzer = 11;
const int ledPin = 13;
const int Laser = 2;
const int LaserSensor=12;

long duration;
int distance;
int safetyDistance;
int SensorReading=HIGH;


void setup() {
pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
pinMode(echoPin, INPUT); // Sets the echoPin as an Input
pinMode(buzzer, OUTPUT);
pinMode(ledPin, OUTPUT);
pinMode(Laser, OUTPUT);
Serial.begin(9600); // Starts the serial communication
}


void loop() 
{
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);

// Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, HIGH);

// Calculating the distance
distance= duration*0.034/2;

digitalWrite(Laser, HIGH);
SensorReading = digitalRead(LaserSensor);
safetyDistance = distance;
if (safetyDistance <= 30 || SensorReading == LOW)
{
  digitalWrite(buzzer, HIGH);
  digitalWrite(ledPin, HIGH);
}
else
{
  digitalWrite(buzzer, LOW);
  digitalWrite(ledPin, LOW);
}
}
