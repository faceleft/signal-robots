#ifndef settings_h
#define settings_h
#include <Arduino.h>

class settings {
  public:
    static const long SerialSpeed = 115200;
    static const int SerialTimeout = 100;

    static const byte msLen = 10;

    static const float Vref = 2.5;//V

    static const byte buttons_num = 6;
    static const float buttons_max_level = 1024;
    static const float buttons_accuracy = 3;//%
    static const float buttons_delay = 200;//ms
};

#endif
