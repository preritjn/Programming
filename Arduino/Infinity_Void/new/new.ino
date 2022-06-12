int s1 = 3;
int s2 = 5;
int s3 = 6;
int s4 = 9;
int s5 = 10;
int s6 = 11;
int s7 = 12;
int s8 = 13;
int m1 = 7;
int m2 = 8;
int EA = A0;
int m3 = 2;
int m4 = 4;
int EB = A1;
int Ir1, Ir2, Ir3, Ir4, Ir5, Ir6, Ir7, Ir8;
int MS = 150;
int error = 30;

void setup()
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(m1, OUTPUT);
  pinMode(m2, OUTPUT);
  pinMode(EA, OUTPUT);
  pinMode(m3, OUTPUT);
  pinMode(m4, OUTPUT);
  pinMode(EB, OUTPUT);
  pinMode(Ir1, INPUT);
  pinMode(Ir2, INPUT);
  pinMode(Ir3, INPUT);
  pinMode(Ir4, INPUT);
  pinMode(Ir5, INPUT);
  pinMode(Ir6, INPUT);
  pinMode(Ir7, INPUT);
  pinMode(Ir8, INPUT);
}
void turn()
{
  analogWrite(EA, MS);
  digitalWrite(m1,LOW);
  digitalWrite(m2,HIGH);
  digitalWrite(m3,HIGH);
  digitalWrite(m4,LOW);  
}

void turn1()
{
  analogWrite(EA, MS);
  digitalWrite(m1,HIGH);
  digitalWrite(m2,LOW);
  digitalWrite(m3,LOW);
  digitalWrite(m4,HIGH);  
}

void forward()
{
  analogWrite(EA, MS);
  digitalWrite(m1, LOW);
  digitalWrite(m2, HIGH);
  analogWrite(EB, MS);
  digitalWrite(m3, LOW);
  digitalWrite(m4, HIGH);

}
void stop1()
{
  analogWrite(EA, MS);
  digitalWrite(m1, LOW);
  digitalWrite(m2, LOW);
  analogWrite(EB, MS);
  digitalWrite(m3, LOW);
  digitalWrite(m4, LOW);
}
void left()
{
  analogWrite(EA, MS - error);
  digitalWrite(m1, LOW);
  digitalWrite(m2, HIGH);
  analogWrite(EB, MS);
  digitalWrite(m3, LOW);
  digitalWrite(m4, HIGH);
}
void right()
{
  analogWrite(EA, MS);
  digitalWrite(m1, LOW);
  digitalWrite(m2, HIGH);
  analogWrite(EB, MS - error);
  digitalWrite(m3, LOW);
  digitalWrite(m4, HIGH);
}
void hardleft()
{
  analogWrite(EA, MS);
  digitalWrite(m1, LOW);
  digitalWrite(m2, LOW);
  analogWrite(EB, MS);
  digitalWrite(m3, LOW);
  digitalWrite(m4, HIGH);
}
void hardright()
{
  analogWrite(EA, MS);
  digitalWrite(m1, LOW);
  digitalWrite(m2, HIGH);
  analogWrite(EB, MS);
  digitalWrite(m3, LOW);
  digitalWrite(m4, LOW);
}
void loop()
{
  // put your main code here, to run repeatedly:
  Ir1 = digitalRead(s1);
  Ir2 = digitalRead(s2);
  Ir3 = digitalRead(s3);
  Ir4 = digitalRead(s4);
  Ir5 = digitalRead(s5);
  Ir6 = digitalRead(s6);
  Ir7 = digitalRead(s7);
  Ir8 = digitalRead(s8);
  if (Ir1 == 1 && Ir2 == 1 && Ir3 == 1 && Ir4 == 0 && Ir5 == 0 && Ir6 == 1 && Ir7 == 1 && Ir8 == 1)
  {
    forward();
  }
  else if (Ir1 == 1 && Ir2 == 1 && Ir3 == 0 && Ir4 == 0 && Ir5 == 1 && Ir6 == 1 && Ir7 == 1 && Ir8 == 1)
  {
    delay(50);
    left();
  }
  else if (Ir1 == 1 && Ir2 == 1 && Ir3 == 0 && Ir4 == 0 && Ir5 == 0 && Ir6 == 1 && Ir7 == 1 && Ir8 == 1)
  {
    delay(50);
    left();
  }
  else if (Ir1 == 1 && Ir2 == 0 && Ir3 == 0 && Ir4 == 0 && Ir5 == 1 && Ir6 == 1 && Ir7 == 1 && Ir8 == 1)
  {
    delay(50);
    left();
  }
  else if (Ir1 == 1 && Ir2 == 0 && Ir3 == 0 && Ir4 == 0 && Ir5 == 0 && Ir6 == 1 && Ir7 == 1 && Ir8 == 1)
  {
    delay(50);
    left();
  }
  else if (Ir1 == 0 && Ir2 == 1 && Ir3 == 1 && Ir4 == 1 && Ir5 == 1 && Ir6 == 1 && Ir7 == 1 && Ir8 == 1)
  {
    delay(50);
    left();
  }
  else if (Ir1 == 0 && Ir2 == 0 && Ir3 == 0 && Ir4 == 0 && Ir5 == 0 && Ir6 == 0 && Ir7 == 0 && Ir8 == 1)
  {
    delay(50);
    hardleft();
  }
  else if (Ir1 == 1 && Ir2 == 1 && Ir3 == 1 && Ir4 == 1 && Ir5 == 0 && Ir6 == 0 && Ir7 == 1 && Ir8 == 1)
  {
    delay(50);
    right();
  }
  else if (Ir1 == 1 && Ir2 == 1 && Ir3 == 1 && Ir4 == 0 && Ir5 == 0 && Ir6 == 0 && Ir7 == 1 && Ir8 == 1)
  {
    delay(50);
    right();
  }
  else if (Ir1 == 1 && Ir2 == 1 && Ir3 == 1 && Ir4 == 1 && Ir5 == 0 && Ir6 == 0 && Ir7 == 0 && Ir8 == 1)
  {
    delay(50);
    right();
  }
  else if (Ir1 == 1 && Ir2 == 1 && Ir3 == 1 && Ir4 == 1 && Ir5 == 1
  && Ir6 == 0 && Ir7 == 0 && Ir8 == 0)
  {
    delay(50);
    right();
  }
  else if (Ir1 == 1 && Ir2 == 1 && Ir3 == 1 && Ir4 == 1 && Ir5 == 1 && Ir6 == 1 && Ir7 == 1 && Ir8 == 0)
  {
    delay(50);
    right();
  }
  else if (Ir1 == 1 && Ir2 == 1 && Ir3 == 1 && Ir4 == 0 && Ir5 == 0 && Ir6 == 0 && Ir7 == 0 && Ir8 == 1)
  {
    delay(50);
    right();
  }
  else if (Ir1 == 1 && Ir2 == 0 && Ir3 == 0 && Ir4 == 0 && Ir5 == 0 && Ir6 == 0 && Ir7 == 0 && Ir8 == 0)
  {
    delay(50);
    hardright();
  }
  else if (Ir1 == 0 && Ir2 == 0 && Ir3 == 0 && Ir4 == 0 && Ir5 == 1 && Ir6 == 1 && Ir7 == 1 && Ir8 == 1)
  {
    delay(150);
    hardleft();
  }
  else if (Ir1 == 0 && Ir2 == 0 && Ir3 == 0 && Ir4 == 0 && Ir5 == 0 && Ir6 == 1 && Ir7 == 1 && Ir8 == 1)
  {
    delay(150);
    hardleft();
  }
  else if (Ir1 == 1 && Ir2 == 1 && Ir3 == 1 && Ir4 == 1 && Ir5 == 0 && Ir6 == 0 && Ir7 == 0 && Ir8 == 0)
  {
    delay(100);
    hardright();
  }
  else if (Ir1 == 1 && Ir2 == 1 && Ir3 == 1 && Ir4 == 0 && Ir5 == 0 && Ir6 == 0 && Ir7 == 0 && Ir8 == 0)
  {
    delay(100);
    hardright();
  }
  else if (Ir1 == 1 && Ir2 == 1 && Ir3 == 1 && Ir4 == 1 && Ir5 == 1 && Ir6 == 1 && Ir7 == 0 && Ir8 == 0)
  {
    delay(100);
    hardright();
  }
  else if (Ir1 == 1 && Ir2 == 1 && Ir3 == 1 && Ir4 == 1 && Ir5 == 1 && Ir6 == 1 && Ir7 == 1 && Ir8 == 1)
  {
    delay(50);
    turn();
    delay(50);
  }
  else if (Ir1 == 1 && Ir2 == 1 && Ir3 == 1 && Ir4 == 1 && Ir5 == 1 && Ir6 == 1 && Ir7 == 1 && Ir8 == 1)
  {
    delay(50);
    turn1();
    delay(50);
  }
  else if (Ir1 == 0 && Ir2 == 0 && Ir3 == 0 && Ir4 == 0 && Ir5 == 0 && Ir6 == 0 && Ir7 == 0 && Ir8 == 0)
  {
    delay(1000);
    stop1();
  }
}
