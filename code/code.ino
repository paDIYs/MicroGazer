//include library
#include <passopasso.ino>
#include <Bridge.h>
#include <Process.h>

//define stepperMotor pin
int DIR_A = 12;
int STP_A = 3;
int DIR_B = 13;
int STP_B = 11;


void setup() {
  Bridge.begin();
  //Serial.begin(9600);
  pinMode(DIR_A, OUTPUT);
  pinMode(DIR_B, OUTPUT);
  pinMode(STP_A, OUTPUT);
  pinMode(STP_B, OUTPUT);
}


void loop() {
  Process p;
  //rotate to 1st Petri Dish
  for (int x = 0; x < 7; x++) {
    passoIn(20);
  }
  //take a photo
  p.runShellCommand("python /mnt/sda1/arduino/www/dpbcam.py 'a'");
  while (p.running());
  delay(3000);

  //rotate to 2nd Petri Dish
  for (int x = 0; x < 9; x++) {
    passoIn(20);
  }
  //take a photo
  p.runShellCommand("python /mnt/sda1/arduino/www/dpbcam.py 'b'");
  while (p.running());
  delay(3000);

  //rotate to 3rd Petri Dish
  for (int x = 0; x < 9; x++) {
    passoIn(20);
  }
  //take a photo
  p.runShellCommand("python /mnt/sda1/arduino/www/dpbcam.py 'c'");
  while (p.running());
  delay(3000);

  //rotate to 4th Petri Dish
  for (int x = 0; x < 9; x++) {
    passoIn(20);
  }
  //take a photo
  p.runShellCommand("python /mnt/sda1/arduino/www/dpbcam.py 'd'");
  while (p.running());
  delay(3000);

  //rotate to 5th Petri Dish
  for (int x = 0; x < 9; x++) {
    passoIn(20);
  }
  //take a photo
  p.runShellCommand("python /mnt/sda1/arduino/www/dpbcam.py 'e'");
  while (p.running());
  passoOff(3000);

  //stop 15 minute
  for (int x = 0; x < 7; x++) {
    passoIn(20);
  }
  delay(1000);
  passoOff(2000);
  delay(900000);
}
