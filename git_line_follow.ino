

int s1;
int s2;
int s3;
int s4;
int s5;
int s6;
int s7;
int s8;

const int ENA = 5 ;
const int IN1 = 6 ;
const int IN2 = 7 ;
const int ENB = 10 ;
const int IN3 = 8 ;
const int IN4 = 9 ;

void setup() 
{
  // put your setup code here, to run once:
  pinMode(22,INPUT);
  pinMode(24,INPUT);
  pinMode(26,INPUT);
  pinMode(28,INPUT);
  pinMode(30,INPUT);
  pinMode(32,INPUT);
  pinMode(34,INPUT);
  pinMode(34,INPUT);

  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);
  Serial.begin(9600);

  //forward();
  delay(2000);
}

void loop() 
{
  s1=digitalRead(22);
  s2=digitalRead(24);
  s3=digitalRead(26);
  s4=digitalRead(28);
  s5=digitalRead(30);
  s6=digitalRead(32);
  s7=digitalRead(34);
  s8=digitalRead(36);

//
//  Serial.print(s1);
//  Serial.print(" ");
//  Serial.print(s2);
//  Serial.print(" ");
//  Serial.print(s3);
//  Serial.print(" ");
//  Serial.print(s4);
//  Serial.print(" ");
//  Serial.print(s5);
//  Serial.print(" ");
//  Serial.print(s6);
//  Serial.print(" ");
//  Serial.print(s7);
//  Serial.print(" ");
//  Serial.print(s8);
//  Serial.println(" ");
//  delay (1000);
  
  
  //black=1
  //white=0
  //forward
  
  if(
      ( (s1==0)&&(s2==0)&&(s3==0)&&(s4==1)&&(s5==1)&&(s6==0)&&(s7==0)&&(s8==0) )||
      ( (s1==0)&&(s2==0)&&(s3==1)&&(s4==1)&&(s5==1)&&(s6==1)&&(s7==0)&&(s8==0) )||
      ( (s1==0)&&(s2==1)&&(s3==1)&&(s4==1)&&(s5==1)&&(s6==1)&&(s7==1)&&(s8==0) )||
      ( (s1==0)&&(s2==0)&&(s3==0)&&(s4==1)&&(s5==0)&&(s6==0)&&(s7==0)&&(s8==0) )||
      ( (s1==0)&&(s2==0)&&(s3==0)&&(s4==0)&&(s5==1)&&(s6==0)&&(s7==0)&&(s8==0) )
    )
  {
    forward();
//    Serial.println(" forward ");
delay(200);
  }
  
  //right
  else if(
          ( (s1==0)&&(s2==1)&&(s3==1)&&(s4==1)&&(s5==1)&&(s6==1)&&(s7==1)&&(s8==1)  )||
          ( (s1==0)&&(s2==0)&&(s3==1)&&(s4==1)&&(s5==1)&&(s6==1)&&(s7==1)&&(s8==1)  )||
          ( (s1==0)&&(s2==0)&&(s3==0)&&(s4==1)&&(s5==1)&&(s6==1)&&(s7==1)&&(s8==1)  )||
          ( (s1==0)&&(s2==0)&&(s3==0)&&(s4==0)&&(s5==1)&&(s6==1)&&(s7==1)&&(s8==1)  )||
          ( (s1==0)&&(s2==0)&&(s3==0)&&(s4==0)&&(s5==0)&&(s6==1)&&(s7==1)&&(s8==1)  )||
          ( (s1==0)&&(s2==0)&&(s3==0)&&(s4==0)&&(s5==0)&&(s6==0)&&(s7==1)&&(s8==1)  )||
          ( (s1==0)&&(s2==0)&&(s3==0)&&(s4==0)&&(s5==0)&&(s6==0)&&(s7==0)&&(s8==1)  )||
          ( (s1==0)&&(s2==0)&&(s3==0)&&(s4==0)&&(s5==0)&&(s6==1)&&(s7==1)&&(s8==0)  )||
          ( (s1==0)&&(s2==0)&&(s3==0)&&(s4==0)&&(s5==1)&&(s6==1)&&(s7==0)&&(s8==0)  )||
          ( (s1==0)&&(s2==0)&&(s3==0)&&(s4==0)&&(s5==1)&&(s6==1)&&(s7==1)&&(s8==0)  )||
          ( (s1==0)&&(s2==0)&&(s3==0)&&(s4==1)&&(s5==1)&&(s6==1)&&(s7==0)&&(s8==0)  )||
          ( (s1==0)&&(s2==0)&&(s3==0)&&(s4==1)&&(s5==1)&&(s6==1)&&(s7==1)&&(s8==0)  )||
          ( (s1==0)&&(s2==0)&&(s3==1)&&(s4==1)&&(s5==1)&&(s6==1)&&(s7==1)&&(s8==0)  )||
          ( (s1==0)&&(s2==0)&&(s3==0)&&(s4==0)&&(s5==0)&&(s6==0)&&(s7==1)&&(s8==0)  )||
          ( (s1==0)&&(s2==0)&&(s3==0)&&(s4==0)&&(s5==0)&&(s6==1)&&(s7==0)&&(s8==0)  )
        )
  {
   left();
//    Serial.println(" left ");
delay(300);
  }
  
  else if(
  ((s1==1)&&(s2==1)&&(s3==1)&&(s4==1)&&(s5==1)&&(s6==1)&&(s7==1)&&(s8==0))||
  ((s1==1)&&(s2==1)&&(s3==1)&&(s4==1)&&(s5==1)&&(s6==1)&&(s7==0)&&(s8==0))||
  ((s1==1)&&(s2==1)&&(s3==1)&&(s4==1)&&(s5==1)&&(s6==0)&&(s7==0)&&(s8==0))||
  ((s1==1)&&(s2==1)&&(s3==1)&&(s4==1)&&(s5==0)&&(s6==0)&&(s7==0)&&(s8==0))||
  ((s1==1)&&(s2==1)&&(s3==1)&&(s4==0)&&(s5==0)&&(s6==0)&&(s7==0)&&(s8==0))||
  ((s1==1)&&(s2==1)&&(s3==0)&&(s4==0)&&(s5==0)&&(s6==0)&&(s7==0)&&(s8==0))||
  ((s1==1)&&(s2==0)&&(s3==0)&&(s4==0)&&(s5==0)&&(s6==0)&&(s7==0)&&(s8==0))||
  ((s1==0)&&(s2==1)&&(s3==1)&&(s4==0)&&(s5==0)&&(s6==0)&&(s7==0)&&(s8==0))||
  ((s1==0)&&(s2==0)&&(s3==1)&&(s4==1)&&(s5==0)&&(s6==0)&&(s7==0)&&(s8==0))||
  ((s1==0)&&(s2==1)&&(s3==1)&&(s4==1)&&(s5==0)&&(s6==0)&&(s7==0)&&(s8==0))||
  ((s1==0)&&(s2==0)&&(s3==1)&&(s4==1)&&(s5==1)&&(s6==0)&&(s7==0)&&(s8==0))||
  ((s1==0)&&(s2==1)&&(s3==1)&&(s4==1)&&(s5==1)&&(s6==0)&&(s7==0)&&(s8==0))||
  ((s1==0)&&(s2==1)&&(s3==1)&&(s4==1)&&(s5==1)&&(s6==1)&&(s7==0)&&(s8==0))||
  ((s1==0)&&(s2==0)&&(s3==1)&&(s4==0)&&(s5==0)&&(s6==0)&&(s7==0)&&(s8==0))||
  ((s1==0)&&(s2==1)&&(s3==0)&&(s4==0)&&(s5==0)&&(s6==0)&&(s7==0)&&(s8==0))
  )
  {
  

       right();
       delay(300);
//    Serial.println(" right ");
  }
  else
  {
      gol_gol();
  }
}

void forward()
{
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  analogWrite(ENA, 80);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  analogWrite(ENB, 80);
}

void right()
{
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  analogWrite(ENA, 45);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  analogWrite(ENB, 60);
}

void left()
{
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  analogWrite(ENA, 60);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  analogWrite(ENB, 45);
}

void motor_stop()
{
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  analogWrite(ENA, 0);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  analogWrite(ENB, 0);
}

void gol_gol()
{
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  analogWrite(ENA, 70);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  analogWrite(ENB, 40);
}
