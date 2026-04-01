#include <Joystick.h>

Joystick_ Joystick(JOYSTICK_DEFAULT_REPORT_ID,JOYSTICK_TYPE_GAMEPAD,
  0, 0,                  // Button Count, Hat Switch Count
  true, true, true,     // X and Y and Z Axis, OK
  false, false, false,   // No Rx, Ry, or Rz
  false, false,          // No rudder or throttle
  false, false, false);  // No accelerator, brake, or steering

int lastXAxisValue = -1;
int lastYAxisValue = -1;
int lastZAxisValue = -1;

void setup() {

  // Initialize Joystick Library
  Joystick.begin();
  Joystick.setXAxisRange(0, 1023);
  Joystick.setYAxisRange(0, 1023);
  Joystick.setZAxisRange(1023, 0);
}

void loop() {

  // Read axis values
bool sendUpdate = false;

const int currentXAxisValue = analogRead(A0);
  if (currentXAxisValue != lastXAxisValue)
  {
    Joystick.setXAxis(currentXAxisValue);
    lastXAxisValue = currentXAxisValue;
    sendUpdate = true;
  }

const int currentYAxisValue = analogRead(A1);
  if (currentYAxisValue != lastYAxisValue)
  {
    Joystick.setYAxis(currentYAxisValue);
    lastYAxisValue = currentYAxisValue;
    sendUpdate = true;
  }

const int currentZAxisValue = analogRead(A2);
  if (currentZAxisValue != lastZAxisValue)
  {
    Joystick.setZAxis(currentZAxisValue);
    lastZAxisValue = currentZAxisValue;
    sendUpdate = true;
  }
  if (sendUpdate)
  {
    Joystick.sendState();
  }
}

