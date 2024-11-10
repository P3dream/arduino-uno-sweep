#include <Servo.h>

Servo myservo;

int pos = 0; 
float media = 0;

void setup() {
  myservo.attach(9);
}

void loop() {
  for (int novaPos = 0; novaPos <= 180; novaPos += 1) {
    media = (media * 9 + novaPos) / 10.0;
    myservo.write(media);
    
    delay(15);
  }
  for (int novaPos = 180; novaPos >= 0; novaPos -= 1) {
    media = (media * 9 + novaPos) / 10.0;
    myservo.write(media);
    delay(15);
  }
}