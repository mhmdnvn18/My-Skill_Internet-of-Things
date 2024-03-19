#include <ESP32Servo.h>   //Library untuk servo

const int servoPin = 4;   //pin yang digunakan untuk servo
Servo servo;
int pos = 0;                //Posisi derajat servo

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Hello, ESP32!");
  servo.attach(servoPin, 500, 2400); //Memberikan rentang timming ms
}

void loop() {
  // // put your main code here, to run repeatedly:
  // //fungsi untuk memutar servo dengan pergerakan setiap derajat
  // for (pos=0;pos<=180;pos++){
  //   servo.write(pos);
  // delay(10);
  // }
  // for (pos=180;pos>=0;pos--){
  //   servo.write(pos);
  // delay(10);
  //}

  int analogValue = analogRead(14);
  pos = map(analogValue, 0, 4095, 0, 160);
  delay(10);
}