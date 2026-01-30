// francis od 1-29-2026

#include "Light.h"

// Input pins buttons
const int BrakeInput     = 2;
const int ReverseInput   = 3;
const int RunningInput   = 4;
const int TurnRightInput = 5;
const int TurnLeftInput  = 6;

// Output pins leds
const int BrakeOutput     = 8;
const int ReverseOutput   = 9;
const int RunningOutput   = 10;
const int TurnLeftOutput  = 11;
const int TurnRightOutput = 12;

// Create object
Light light(
  BrakeOutput,
  ReverseOutput,
  RunningOutput,
  TurnLeftOutput,
  TurnRightOutput
);

void setup() {
  pinMode(BrakeInput, INPUT_PULLUP);
  pinMode(ReverseInput, INPUT_PULLUP);
  pinMode(RunningInput, INPUT_PULLUP);
  pinMode(TurnLeftInput, INPUT_PULLUP);
  pinMode(TurnRightInput, INPUT_PULLUP);

  light.begin();
}

void loop() {
  light.Brake(digitalRead(BrakeInput) == LOW);
  light.Reverse(digitalRead(ReverseInput) == LOW);
  light.Running(digitalRead(RunningInput) == LOW);
  light.TurnLeft(digitalRead(TurnLeftInput) == LOW);
  light.TurnRight(digitalRead(TurnRightInput) == LOW);
}