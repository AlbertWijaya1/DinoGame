#include <Servo.h>
int cactus = 300;   // try 250 ,260 and 300 value here 
int unpress_angle= 70; 
int press_angle= 36;


Servo myservo;  // create servo object to control a servo
bool trig=true;

void setup() {          
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
myservo.write(unpress_angle);   
}

void loop() {

 myservo.write(unpress_angle);              // unpress the button
 delay(1);
 if(analogRead(A0)< cactus)
 {
  
      myservo.write(press_angle);          // press the button
    delay(100 );                       // waits 100ms for the servo to reach the position
                      
 }                     
}
