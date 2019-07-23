#include <Chrono.h>
#include <LightChrono.h>

#include<LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2); //Interface pins of the LCD 
const int trig_pin=7;
const int echo_pin=6;
long distance,duration;

const int startDistance = 141;
const int endDistance = 72;

int timespent[2];

Chrono chrono(Chrono::MICROS); 

void setup() {
lcd.begin(16,2);
lcd.setCursor(0,0); //set the cursor to column 0 and line 0
pinMode(7,OUTPUT);
pinMode(6,INPUT);
Serial.begin(9600);
}


void loop() {
digitalWrite(7,LOW);
delayMicroseconds(2);
digitalWrite(7,HIGH);
delayMicroseconds(10);
digitalWrite(7,LOW);
duration = pulseIn(echo_pin, HIGH); //To receive the reflected signal.
distance= duration*0.034/2;
lcd.setCursor(0,0); //set the cursor to column 0 and line 1
lcd.print(distance);
lcd.print("cm");
if (distance > 141 || distance < 36){
  delay(500);
}
if (distance < 141 && distance > 36){
  chrono.restart();
  timespent[0] = chrono.elapsed();
}
if (distance < 36){
  timespent[1] = chrono.elapsed();
}
lcd.clear();

}

    
