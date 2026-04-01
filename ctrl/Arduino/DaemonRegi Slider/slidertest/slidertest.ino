#include <Joystick.h>

Joystick_ Joystick(JOYSTICK_DEFAULT_REPORT_ID,JOYSTICK_TYPE_GAMEPAD,
  0, 0,                  // Button Count, Hat Switch Count
  true, true, false,     // X and Y and Z Axis, OK
  false, false, false,   // No Rx, Ry, or Rz
  false, false,          // No rudder or throttle
  false, false, false);  // No accelerator, brake, or steering

int lastXAxisValue = -1;
int lastYAxisValue = -1;

void setup() {

  // Initialize Joystick Library
  Joystick.begin();
  Joystick.setXAxisRange(0, 1023);
  Joystick.setYAxisRange(0, 1023);
}

void loop() {

  // Read axis values
bool sendUpdate = false;

const int currentXAxisValue = analogRead(A3);
  if (currentXAxisValue != lastXAxisValue)
  {
    Joystick.setXAxis(currentXAxisValue);
    lastXAxisValue = currentXAxisValue;
    sendUpdate = true;
  }

const int currentYAxisValue = analogRead(A2);
  if (currentYAxisValue != lastYAxisValue)
  {
    Joystick.setYAxis(currentYAxisValue);
    lastYAxisValue = currentYAxisValue;
    sendUpdate = true;
  }
  if (sendUpdate)
  {
    Joystick.sendState();
  }
}

