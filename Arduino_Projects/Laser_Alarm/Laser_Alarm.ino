
#define NOTE_F6  1397
#define NOTE_G4  392
 
int LED = 13;
int LaserSensor = 2;
int SensorReading = HIGH;  // HIGH MEANS NO OBSTACLE
int Laser = 12;
int alarmSpeaker = 7;
 
void setup() {
  pinMode(LED, OUTPUT);
  pinMode(Laser, OUTPUT);
  pinMode(alarmSpeaker, OUTPUT);
  pinMode(LaserSensor, INPUT);
}
 
void alarmTone() {
   tone(7, 1000, 500);
   delay(1);
    tone(7, 500, 500);
  
}
 
void alarm() {
  
  alarmTone();
  alarmTone();
  alarmTone();
  alarmTone();
  alarmTone();
  alarmTone();
  alarmTone();
  alarmTone();
  alarmTone();
  alarmTone();
  alarmTone();
   alarmTone();
  alarmTone();
  alarmTone();
  alarmTone();
  alarmTone();
  alarmTone();
  alarmTone();
  alarmTone();
  alarmTone();
  alarmTone();
  alarmTone();
   alarmTone();
  alarmTone();
  alarmTone();
  alarmTone();
  alarmTone();
  alarmTone();
  alarmTone();
  alarmTone();
  alarmTone();
  alarmTone();
  alarmTone();
    alarmTone();
  alarmTone();
  alarmTone();
  alarmTone();
  alarmTone();
  alarmTone();
  alarmTone();
  alarmTone();
  alarmTone();
  alarmTone();
  alarmTone();
   alarmTone();
  alarmTone();
  alarmTone();
  alarmTone();
  alarmTone();
  alarmTone();
  alarmTone();
  alarmTone();
  alarmTone();
  alarmTone();
  alarmTone();
   alarmTone();
  alarmTone();
  alarmTone();
  alarmTone();
  alarmTone();
  alarmTone();
  alarmTone();
  alarmTone();
  alarmTone();
  alarmTone();
  alarmTone();

  }
 
void loop() {
  digitalWrite(Laser, HIGH);
  delay(0);
  SensorReading = digitalRead(LaserSensor);
  if (SensorReading == LOW)
  {
    digitalWrite(LED, HIGH);
    alarm();
  }
 
  else
  {
    digitalWrite(LED, LOW);
  }
}
