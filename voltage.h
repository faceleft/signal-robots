#ifndef voltage_h
#define voltage_h
#include <Arduino.h>
#include "pins.h"
#include "settings.h"
float voltage(byte pin) {
  return ((float)analogRead(pin) * settings().Vref) / (float)analogRead(pins().Vref);
}
#endif
