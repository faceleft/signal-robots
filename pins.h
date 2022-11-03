#ifndef pins_h
#define pins_h
#include <Arduino.h>

class pins {
  public:
    static const uint8_t Vref = A0;
    static const uint8_t Vbattery = A1;
    static const uint8_t buttons = A2;

    static const uint8_t led_sck = 9;
    static const uint8_t led_mosi = 8;
    static const uint8_t led_dc = 12;
    static const uint8_t led_reset = 11;
    static const uint8_t led_cs = 10;

    static const uint8_t motor_right_forward = 4;
    static const uint8_t motor_left_forward = 5;
    static const uint8_t motor_right_back = 6;
    static const uint8_t motor_left_back = 7;

    static const uint8_t servo_belt = 8;

    static const uint8_t servo_right1 = 9;
    static const uint8_t servo_right2 = 10;
    static const uint8_t servo_left1 = 11;
    static const uint8_t servo_left2 = 12;
};

#endif
