int s2 = 11;
int s3 = 10;
int s4 = 9;
int s5 = 8;
int s6 = 7;
int s7 = 6;
int v7 = 12;
int v8 = 13;
int m1 = A1;
int m2 = A2;
int m3 = A3;
int m4 = A4;
int Ir1, Ir2, Ir3, Ir4, Ir5, Ir6;
int Ir7, Ir8;

void setup()
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(m1, OUTPUT);
  pinMode(m2, OUTPUT);
  //  pinMode(motorLEnable,OUTPUT);
  pinMode(m3, OUTPUT);
  pinMode(m4, OUTPUT);
  //  pinMode(motorREnable,OUTPUT);
  pinMode(Ir1, INPUT);
  pinMode(Ir2, INPUT);
  pinMode(Ir3, INPUT);
  pinMode(Ir4, INPUT);
  pinMode(Ir5, INPUT);
  pinMode(Ir6, INPUT);
  pinMode(Ir7, INPUT);
  pinMode(Ir8, INPUT);
}

void forward()
{
  analogWrite(m1, 0);
  analogWrite(m2, 255);
  analogWrite(m3, 0);
  analogWrite(m4, 255);

}
void stop1()
{
  analogWrite(m1, 0);
  analogWrite(m2, 0);
  analogWrite(m3, 0);
  analogWrite(m4, 0);
}
void left()
{
  analogWrite(m1, 0);
  analogWrite(m2, 75);
  analogWrite(m3, 0);
  analogWrite(m4, 150);
}
void right()
{
  analogWrite(m1, 0);
  analogWrite(m2, 150);
  analogWrite(m3, 0);
  analogWrite(m4, 75);
}
void hardleft()
{
  analogWrite(m1, 100);
  analogWrite(m2, 0);
  analogWrite(m3, 0);
  analogWrite(m4, 100);
}
void hardright()
{
  analogWrite(m1, 0);
  analogWrite(m2, 100);
  analogWrite(m3, 100);
  analogWrite(m4, 0);
}
void loop()
{
  // put your main code here, to run repeatedly:
  Ir1 = digitalRead(s2);
  Ir2 = digitalRead(s3);
  Ir3 = digitalRead(s4);
  Ir4 = digitalRead(s5);
  Ir5 = digitalRead(s6);
  Ir6 = digitalRead(s7);
  Ir7 = digitalRead(v7);
  Ir8 = digitalRead(v8);
  if (Ir1 == 1 && Ir2 == 1 && Ir3 == 0 && Ir4 == 0 && Ir5 == 0 && Ir6 == 0 && Ir7 == 1 && Ir8 == 1)
  {
    forward();
  }
  if (Ir1 == 1 && Ir2 == 0 && Ir3 == 0 && Ir4 == 0 && Ir5 == 0 && Ir6 == 1 && Ir7 == 1 && Ir8 == 1)
  {
    left();
  }
  if (Ir1 == 1 && Ir2 == 0 && Ir3 == 0 && Ir4 == 0 && Ir5 == 1 && Ir6 == 1 && Ir7 == 1 && Ir8 == 1)
  {
    left();
  }
  if (Ir1 == 1 && Ir2 == 1 && Ir3 == 1 && Ir4 == 0 && Ir5 == 0 && Ir6 == 0 && Ir7 == 0 && Ir8 == 1)
  {
    right();
  }
  if (Ir1 == 1 && Ir2 == 1 && Ir3 == 1 && Ir4 == 1 && Ir5 == 0 && Ir6 == 0 && Ir7 == 0 && Ir8 == 1)
  {
    right();
  }
  if (Ir1 == 0 && Ir2 == 0 && Ir3 == 0 && Ir4 == 0 && Ir5 == 0 && Ir6 == 0 && Ir7 == 1 && Ir8 == 1)
  {
    delay(1000);
    hardleft();
  }
  if (Ir1 == 1 && Ir2 == 1 && Ir3 == 0 && Ir4 == 0 && Ir5 == 0 && Ir6 == 0 && Ir7 == 0 && Ir8 == 0)
  {
    delay(1000);
    hardright();
  }
  if (Ir1 == 1 && Ir2 == 1 && Ir3 == 1 && Ir4 == 1 && Ir5 == 1 && Ir6 == 1 && Ir7 == 1 && Ir8 == 1)
  {
    forward();
  }
  if (Ir1 == 0 && Ir2 == 0 && Ir3 == 0 && Ir4 == 0 && Ir5 == 0 && Ir6 == 0 && Ir7 == 0 && Ir8 == 0)
  {
    stop1();
  }
}
