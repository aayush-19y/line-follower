#define s1 22
#define s2 24
#define s3 26
#define s4 28
#define s5 30
#define s6 32
#define s7 34
#define s8 36


int S1 = 0;
int S2 = 0;
int S3 = 0;
int S4 = 0;
int S5 = 0;
int S6 = 0;
int S7 = 0;
int S8 = 0;

// RIGHT A 1
// LEFT B

#define ENA 5
#define ENB 10

#define IN1 6
#define IN2 7
#define IN3 8
#define IN4 9

void setup()
{

  // put your setup code here, to run once:
  pinMode(s1, INPUT);
  pinMode(s2, INPUT);
  pinMode(s3, INPUT);
  pinMode(s4, INPUT);
  pinMode(s5, INPUT);
  pinMode(s6, INPUT);
  pinMode(s7, INPUT);
  pinMode(s8, INPUT);

  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  pinMode(ENB, OUTPUT);
  pinMode(ENA, OUTPUT);

  Serial.begin(9600);

 
}

void loop()
{

  S1 = digitalRead(s1);
  S2 = digitalRead(s2);
  S3 = digitalRead(s3);
  S4 = digitalRead(s4);
  S5 = digitalRead(s5);
  S6 = digitalRead(s6);
  S7 = digitalRead(s7);
  S8 = digitalRead(s8);

  print();
  /////////////// left
 if( (S1 == 0 && S2 == 0 && S3 == 0 && S4 == 1 && S5 == 1 && S6 == 0 && S7 == 0 && S8 == 0)
 ||(S1 == 0 && S2 == 0 && S3 == 0 && S4 == 1 && S5 == 0 && S6 == 0 && S7 == 0 && S8 == 0)||
 (S1 == 0 && S2 == 0 && S3 == 0 && S4 == 0 && S5 == 1 && S6 == 0 && S7 == 0 && S8 == 0)
 )
 {
  forward();
 }
 else if(S1 == 0 && S2 == 0 && S3 == 0 && S4 == 0 && S5 == 0 && S6 == 1 && S7 == 0 && S8 == 0){
 S_LEFT();
   
 }else if(S1 == 0 && S2 == 0 && S3 == 0 && S4 == 0 && S5 == 0 && S6 == 0 && S7 == 1 && S8 == 1){
 S_LEFT();
 }
 else if(S1 == 0 && S2 == 0 && S3 == 0 && S4 == 0 && S5 == 0 && S6 == 0 && S7 == 1 && S8 == 0){
  S_LEFT();
 }
 else if(S1 == 0 && S2 == 0 && S3 == 0 && S4 == 0 && S5 == 0 && S6 == 0 && S7 == 0 && S8 == 1){
  S_LEFT();
 }
 else if(S1 == 0 && S2 == 0 && S3 == 1 && S4 == 0 && S5 == 0 && S6 == 0 && S7 == 0 && S8 == 0){
slow_right();
 }
 else if(S1 == 0 && S2 == 0 && S3 == 0 && S4 == 1 && S5 == 0 && S6 == 0 && S7 == 0 && S8 == 0){
 slow_right();
 }
 else if(S1 == 0 && S2 == 0 && S3 == 1 && S4 == 1 && S5 == 0 && S6 == 0 && S7 == 0 && S8 == 0){
   slow_right();
 }
 else if(S1 == 0 && S2 == 0 && S3 == 0 && S4 == 0 && S5 == 0 && S6 == 1 && S7 == 1 && S8 == 0){
  C_LEFT();
 }
 else if (S1 == 0 && S2 == 0 && S3 == 0 && S4 == 0 && S5 == 1 && S6 == 1 && S7 == 0 && S8 == 0){
  C_LEFT();
 }
 else if(S1 == 0 && S2 == 1 && S3 == 0 && S4 == 0 && S5 == 0 && S6 == 0 && S7 == 0 && S8 == 0){
  slow_right();
 }
 else if(S1 == 0 && S2 == 1 && S3 == 1 && S4 == 0 && S5 == 0 && S6 == 0 && S7 == 0 && S8 == 0){
  slow_right();
 }
else if (S1 == 0 && S2 == 0 && S3 == 0 && S4 == 0 && S5 == 0 && S6 == 1 && S7 == 1 && S8 == 1){
   //delay(50);  
    S_LEFT();
    delay(200);
    }
else if (S1 == 0 && S2 == 0 && S3 == 0 && S4 == 1 && S5 == 1 && S6 == 1 && S7 == 0 && S8 == 0){
   //delay(50);  
    S_LEFT();
    delay(200);
    }
 
else if (S1 == 0 && S2 == 0 && S3 == 0 && S4 == 0 && S5 == 1 && S6 == 1 && S7 == 1 && S8 == 0){
      //delay(50);
      S_LEFT();
      delay(200);
    //delay(50);
}
else if (S1 == 0 && S2 == 0 && S3 == 0 && S4 == 0 && S5 == 1 && S6 == 1 && S7 == 1 && S8 == 1){
      //delay(50);
      S_LEFT();
      delay(200);
    //delay(50);
    }
else if(S1 == 0 && S2 == 0 && S3 == 0 && S4 == 1 && S5 == 1 && S6 == 1 && S7 == 1 && S8 == 1){
     // delay(50);
      S_LEFT();
      delay(200);
    //delay(50);
    }
else if (S1 == 0 && S2 == 0 && S3 == 1 && S4 == 1 && S5 == 1 && S6 == 1 && S7 == 1 && S8 == 1){
      S_LEFT();
      delay(200);
    }

 //right////////
  else if(S1 == 0 && S2 == 0 && S3 == 1 && S4 == 0 && S5 == 0 && S6 == 0 && S7 == 0 && S8 == 0){
 S_Right();
   
 }else if(S1 == 1 && S2 == 1 && S3 == 0 && S4 == 0 && S5 == 0 && S6 == 0 && S7 == 0 && S8 == 0){
 S_Right();
 }
 else if(S1 == 0 && S2 == 1 && S3 == 0 && S4 == 0 && S5 == 0 && S6 == 0 && S7 == 0 && S8 == 0){
  S_Right();
 }
 else if(S1 == 1 && S2 == 0 && S3 == 0 && S4 == 0 && S5 == 0 && S6 == 0 && S7 == 0 && S8 == 0){
  S_Right();
 }
 else if(S1 == 0 && S2 == 0 && S3 == 0 && S4 == 0 && S5 == 0 && S6 == 1 && S7 == 0 && S8 == 0){
SLOW_LEFT();
 }
 else if(S1 == 0 && S2 == 0 && S3 == 0 && S4 == 0 && S5 == 1 && S6 == 0 && S7 == 0 && S8 == 0){
 SLOW_LEFT();
 }
 else if(S1 == 0 && S2 == 0 && S3 == 0 && S4 == 0 && S5 == 1 && S6 == 1 && S7 == 0 && S8 == 0){
   SLOW_LEFT();
 }
 else if(S1 == 0 && S2 == 1 && S3 == 1 && S4 == 0 && S5 == 0 && S6 == 0 && S7 == 0 && S8 == 0){
  C_Right();
 }
 else if (S1 == 0 && S2 == 0 && S3 == 1 && S4 ==  1 && S5 == 0 && S6 == 0 && S7 == 0 && S8 == 0){
  C_Right();
 }
 else if(S1 == 0 && S2 == 0 && S3 == 0 && S4 == 0 && S5 == 0 && S6 == 0 && S7 == 1 && S8 == 0){
  SLOW_LEFT();
 }
 else if(S1 == 0 && S2 == 0 && S3 == 0 && S4 == 0 && S5 == 0 && S6 == 1 && S7 == 1 && S8 == 0){
  SLOW_LEFT();
 }
else if (S1 == 1 && S2 == 1 && S3 == 1 && S4 == 0 && S5 == 0 && S6 == 0 && S7 == 0 && S8 == 0){
    S_Right();
     delay(200);
    //delay(50);
    }
else if (S1 == 0 && S2 == 1 && S3 == 1 && S4 == 1 && S5 == 0 && S6 == 0 && S7 == 0 && S8 == 0){
    S_Right();
     delay(200);
    //delay(50);
    }
else if (S1 == 1 && S2 == 1 && S3 == 1 && S4 == 1 && S5 == 0 && S6 == 0 && S7 == 0 && S8 == 0){
    S_Right();
     delay(200);
    //delay(50);
    }

else if (S1 == 1 && S2 == 1 && S3 == 1 && S4 == 1 && S5 == 1 && S6 == 0 && S7 == 0 && S8 == 0){
    S_Right();
     delay(200);
    //delay(50);
    }
 else if(S1 == 0 && S2 == 0&& S3 == 0 && S4 == 0 && S5 == 0 && S6 == 0 && S7 == 0 && S8 == 0)
  {
 UTurn();
 }
 

}

void UTurn() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  analogWrite(ENA, 80);
  digitalWrite(IN3, LOW);
  digitalWrite(IN3, HIGH);
  analogWrite(ENB, 50);
}


void forward()
{
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  analogWrite(ENA, 70);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  analogWrite(ENB, 70);
}

void slow_right()
{
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  analogWrite(ENA, 70);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  analogWrite(ENB, 90);
}


void S_stop()
{
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  analogWrite(ENA, 0);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  analogWrite(ENB, 0);
}
void S_Right()
{
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  analogWrite(ENA, 0);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  analogWrite(ENB, 150);
}
void C_Right()
{
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  analogWrite(ENA, 70);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  analogWrite(ENB, 100);
}

void S_LEFT()
{
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  analogWrite(ENA, 150);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  analogWrite(ENB, 0);
}
void SLOW_LEFT()
{
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  analogWrite(ENA, 90);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  analogWrite(ENB, 0);
}

void C_LEFT()
{
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  analogWrite(ENA, 120);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  analogWrite(ENB, 70);
}

void print()

{

  Serial.print(S1);
  Serial.print(" ");

  Serial.print(S2);
  Serial.print(" ");


  Serial.print(S3);
  Serial.print(" ");

  Serial.print(S4);
  Serial.print(" ");

  Serial.print(S5);
  Serial.print(" ");

  Serial.print(S6);
  Serial.print(" ");


  Serial.print(S7);
  Serial.print(" ");

  Serial.print(S8);
  Serial.println(" ");

}
