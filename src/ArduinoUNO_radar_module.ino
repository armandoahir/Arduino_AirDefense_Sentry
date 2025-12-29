#include <Servo.h>

const int trigPin = 10;
const int echoPin = 11;
long duration;
int distance;
Servo myServo; 

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT); 
  Serial.begin(9600);
  myServo.attach(12); // pin where servo's attached
}
void loop() {
  //servo motor rotation from 15 to 165 degrees
  for(int i=15;i<=165;i++){  
 
  myServo.write(i);
  delay(30);
  distance = calculateDistance();//calculating the distance measured by the Ultrasonic sensor for each degree
  
  Serial.print(i); 
  Serial.print(","); 
  Serial.print(distance); 
  Serial.print(".");
  }
  
  for(int i=165;i>15;i--){  
  myServo.write(i);
  delay(30);
  distance = calculateDistance();
  
  Serial.print(i);
  Serial.print(",");
  Serial.print(distance);
  Serial.print(".");
  }
}

int calculateDistance(){ 
  
  digitalWrite(trigPin, LOW); 
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH); 
  delayMicroseconds(10);

  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH); // Reads the echoPin, returns the sound wave travel time in microseconds
  distance= duration*0.034/2;

  return distance;
}
