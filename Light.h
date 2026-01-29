/*
Version -`1.0
Francis O'Donovan
1-29-2026

Setup and decleration of Light class.  
Class is responcible for activating the aporite light via functions.
Can be called with "Light.NAME()", or "Light.NAME(flase)" to turn the light off.

*/

#include <Arduino.h>

class Light {
  private:
    int brakePin;
    int reversePin;
    int runningPin;
    int turnLeftPin;
    int turnRightPin;

  public:
   // Constructor
    Light(int b, int r, int run, int tl, int tr){
      brakePin = b;
      reversePin = r;
      runningPin = run;
      turnLeftPin = tl;
      turnRightPin =tr;
    }
  // Setup pin outputs
    void begin() {
      pinMode(brakePin, 8);
      pinMode(reversePin, 9);
      pinMode(runningPin, 10);
      pinMode(turnLeftPin, 11);
      pinMode(turnRightPin, 12);
    }
        // Actions
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