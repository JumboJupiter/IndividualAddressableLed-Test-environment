/*
Version -`1.1
Francis O'Donovan
1-29-2026

Setup and decleration of Light class.  
Class is responcible for activating the aporite light via functions.
Can be called with "Light.NAME()", or "Light.NAME(flase)" to turn the light off.

*/

#ifndef LIGHT_H
#define LIGHT_H

#include <Arduino.h>

class Light {
private:
  int brakePin;
  int reversePin;
  int runningPin;
  int turnLeftPin;
  int turnRightPin;

public:
  Light(int b, int r, int run, int tl, int tr) {
    brakePin = b;
    reversePin = r;
    runningPin = run;
    turnLeftPin = tl;
    turnRightPin = tr;
  }

  void begin() {
    pinMode(brakePin, OUTPUT);
    pinMode(reversePin, OUTPUT);
    pinMode(runningPin, OUTPUT);
    pinMode(turnLeftPin, OUTPUT);
    pinMode(turnRightPin, OUTPUT);
  }

  void Brake(bool isOn = true) {
    digitalWrite(brakePin, isOn ? HIGH : LOW);
  }

  void Reverse(bool isOn = true) {
    digitalWrite(reversePin, isOn ? HIGH : LOW);
  }

  void Running(bool isOn = true) {
    digitalWrite(runningPin, isOn ? HIGH : LOW);
  }

  void TurnLeft(bool isOn = true) {
    digitalWrite(turnLeftPin, isOn ? HIGH : LOW);
  }

  void TurnRight(bool isOn = true) {
    digitalWrite(turnRightPin, isOn ? HIGH : LOW);
  }
};

#endif