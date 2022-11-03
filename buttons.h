#ifndef buttons_h
#define buttons_h
#include <Arduino.h>
#include "pins.h"
#include "settings.h"

class buttons {
  public:
    buttons(bool none) {
      this->del = settings().buttons_max_level / settings().buttons_num;
    }
    byte scan() {
      float input = analogRead(pins().buttons);
      for (byte k = 0; k <= settings().buttons_num; k++) {
        if (abs(input - del * k) <= ((settings().buttons_max_level * settings().buttons_accuracy) / 100)) {
          if (k && !flag) {
            flag = true;
            timer = millis();
            return k;
          }
          else if (!k && flag && millis() - timer >= settings().buttons_delay) {
            flag = false;
          }
        }
      }
      return 0;
    }
  private:
    unsigned long timer;
    bool flag;
    float del;
};

#endif
