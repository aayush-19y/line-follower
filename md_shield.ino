#include<AFMotor.h>

AF_DCMotor motor1(1) ;
AF_DCMotor motor2(2) ;

  void setup()
  {
    
  
  Serial.begin(9600) ;
  }

void forward()
{
  motor1.setSpeed (120) ;
  motor2.setSpeed (100) ;
  motor1.run (FORWARD) ;
  motor2.run (FORWARD) ;

  delay(200);
}

void left()
{
  motor1.setSpeed (60) ;
  motor2.setSpeed (40) ;
  motor1.run (FORWARD) ;
  motor2.run (BACKWARD) ;

  delay(200);
}

void right()
{
  motor1.setSpeed (40) ;
  motor2.setSpeed (70) ;
  motor1.run (FORWARD) ;
  motor2.run (BACKWARD) ;

  delay(200);
}

void loop()
{
  
  forward();

  left();

  right();
}
