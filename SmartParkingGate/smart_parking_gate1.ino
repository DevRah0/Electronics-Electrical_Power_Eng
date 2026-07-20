#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <Servo.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);
Servo gate;

// المنافذ
const int trigPin = 7;
const int echoPin = 6;

const int servoPin = 9;

const int redLED = 2;
const int greenLED = 3;

const int buzzer = 8;

// متغيرات
long duration;
int distance;

bool gateOpen = false;

void setup() {

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);

  pinMode(buzzer, OUTPUT);

  gate.attach(servoPin);

  lcd.init();
  lcd.backlight();

  gate.write(0);

  digitalWrite(redLED, HIGH);
  digitalWrite(greenLED, LOW);

  lcd.setCursor(0,0);
  lcd.print("Parking Gate");
  lcd.setCursor(0,1);
  lcd.print("System Ready");

  delay(2000);
  lcd.clear();
}

void loop() {

  distance = getDistance();

  lcd.setCursor(0,0);
  lcd.print("Distance:");
  lcd.print(distance);
  lcd.print("cm   ");

  // إذا اقتربت سيارة
  if(distance <= 35 && !gateOpen){

      gateOpen = true;

      gate.write(90);

      digitalWrite(redLED, LOW);
      digitalWrite(greenLED, HIGH);

      lcd.setCursor(0,1);
      lcd.print("Gate Open     ");

      tone(buzzer,1000);
      delay(250);
      noTone(buzzer);

  }

  // إذا ابتعدت السيارة
  if(distance > 40 && gateOpen){

      gateOpen = false;

      gate.write(0);

      digitalWrite(redLED, HIGH);
      digitalWrite(greenLED, LOW);

      lcd.setCursor(0,1);
      lcd.print("Gate Closed   ");

      tone(buzzer,600);
      delay(250);
      noTone(buzzer);

  }

  delay(100);

}

int getDistance(){

  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);

  duration = pulseIn(echoPin,HIGH);

  distance = duration * 0.034 / 2;

  return distance;
}