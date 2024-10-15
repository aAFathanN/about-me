#define m1 2
#define h1 3
#define b1 4
#define m2 5
#define h2 6
#define b2 7
#define m3 8
#define h3 9
#define b3 10
#define m4 11
#define h4 12
#define b4 13
#define sensors A0


void setup() {
  // put your setup code here, to run once:
pinMode(sensors,   INPUT);
pinMode(m1,        OUTPUT);
pinMode(h1,        OUTPUT);
pinMode(b1,        OUTPUT);

pinMode(m2,        OUTPUT);
pinMode(h2,        OUTPUT);
pinMode(b2,        OUTPUT);

pinMode(m3,        OUTPUT);
pinMode(h3,        OUTPUT);
pinMode(b3,        OUTPUT);

pinMode(m4,        OUTPUT);
pinMode(h4,        OUTPUT);
pinMode(b4,        OUTPUT);
Serial.begin(9600);

}

void loop() {
int membaca_analog = analogRead(sensors);
  Serial.println (membaca_analog); 
  delay (250);
  if (membaca_analog > 900)
  {

   gelap ();

  }
  else if (membaca_analog < 900 && membaca_analog > 400)
  {

   redup ();

  }
  else if (membaca_analog < 400)
  {

    terang ();

  }
}

 

 void gelap () {
 analogWrite(m1, 255);
 analogWrite(h1, 255);
 analogWrite(b1, 255);

 analogWrite(m2, 255);
 analogWrite(h2, 255);
 analogWrite(b2, 255);

 analogWrite(m3, 255);
 analogWrite(h3, 255);
 analogWrite(b3, 255);

 analogWrite(m4, 255);
 analogWrite(h4, 255);
 analogWrite(b4, 255);
 }

 void redup () {
 analogWrite(m1, 255);
 analogWrite(h1, 255);
 analogWrite(b1, 0);

 analogWrite(m2, 255);
 analogWrite(h2, 255);
 analogWrite(b2, 0);

 analogWrite(m3, 255);
 analogWrite(h3, 255);
 analogWrite(b3, 0);

 analogWrite(m4, 255);
 analogWrite(h4, 255);
 analogWrite(b4, 0);
 }

 void terang () {
 analogWrite(m1, 0);
 analogWrite(h1, 0);
 analogWrite(b1, 0);

 analogWrite(m2, 0);
 analogWrite(h2, 0);
 analogWrite(b2, 0);

 analogWrite(m3, 0);
 analogWrite(h3, 0);
 analogWrite(b3, 0);

 analogWrite(m4, 0);
 analogWrite(h4, 0);
 analogWrite(b4, 0);
 }