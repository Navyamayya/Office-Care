#include <LiquidCrystal.h>
#include <Servo.h>

int gate1 = 0;
int Distance = 0;
int i = 0;

long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);  // Clear the trigger
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  // Sets the trigger pin to HIGH state for 10 microseconds
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  // Reads the echo pin, and returns the sound wave travel time in microseconds
  return pulseIn(echoPin, HIGH);
}
// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 7, en = 6, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

Servo servo_A5;

int counter;
int counter2;

void setup()
{
  pinMode(A2, INPUT);
  Serial.begin(9600);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(11, OUTPUT);
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  servo_A5.attach(A5);
}

void loop()
{
  Distance = 0.01723 * readUltrasonicDistance(A3, A3);
  gate1 = digitalRead(A2);
  Serial.println(gate1);
 //Welcome Gate
  if (gate1 == 1) 
  {
     lcd.setCursor(4,0);
     lcd.print("WELCOME");
     lcd.setCursor(0,1);
     lcd.print("HAVE A GREAT DAY :)");
  //To open the Gate
    digitalWrite(8, LOW);
    digitalWrite(9, HIGH);
    delay(3000); // Wait for 3000 millisecond(s)
  //To close the Gate
    digitalWrite(9, LOW);
    digitalWrite(8, HIGH);
    delay(3000); // Wait for 3000 millisecond(s)
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    lcd.clear();
    delay(3000); // Wait for 3000 millisecond(s)
  }
 //Sanitizing Area
   if (Distance <= 30) 
   {
 //Automatic Sanitizer 
    servo_A5.write(180);
    lcd.setCursor(4,0);
    lcd.print("SANITIZE");
    delay(3000); // Wait for 3000 millisecond(s)
    servo_A5.write(0);
    delay(6000); // Wait for 6000 millisecond(s)
    lcd.clear();
  //Pass Gate
    for (counter = 0; counter < 3; ++counter) {
      lcd.setCursor(2,0);
      lcd.print("EXIT SANITIZE");
      lcd.setCursor(6,1);
      lcd.print("AREA");
  //Opens Pass Gate
      digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
  //Blinks Green LED
      digitalWrite(10, HIGH);
      delay(1000); // Wait for 1000 millisecond(s)
      digitalWrite(10, LOW);
      lcd.clear();
      delay(1000);// Wait for 1000 millisecond(s)
    }
  //closes Pass Gate
    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
    delay(3000); // Wait for 3000 millisecond(s)
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
  //To glow Red Led and play Buzzer 
    for (counter2 = 0; counter2 < 1; ++counter2) {
      digitalWrite(11, HIGH);
      tone(A4, 523, 1000); // play tone 60 (C5 = 523 Hz)
      delay(1000); // Wait for 1000 millisecond(s)
    }
    digitalWrite(11, LOW);
  }
  servo_A5.write(0);
}
