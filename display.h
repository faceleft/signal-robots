#ifndef display_h
#define display_h
#include <Arduino.h>
#include "pins.h"
#include "settings.h"
#include <UTFT.h>

class display: public UTFT {
  public:
    display(bool none): UTFT(TFT01_22SP,
                               pins().led_sck,
                               pins().led_mosi,
                               pins().led_dc,
                               pins().led_reset,
                               pins().led_cs) {
      this->InitLCD();
      this->clrScr();
      //this->setFont(this->BigFont);
    }
  private:
    UTFT myGLCD(TFT01_22SP,
                pins().led_sck,
                pins().led_mosi,
                pins().led_dc,
                pins().led_reset,
                pins().led_cs);
};
#endif
