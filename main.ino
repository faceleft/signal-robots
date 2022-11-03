#include "pins.h"
#include "settings.h"
#include "buttons.h"
//#include "display.h"
#include "voltage.h"
#include <UTFT.h>
buttons b(0);
UTFT display(TFT01_22SP,
             pins().led_sck,
             pins().led_mosi,
             pins().led_dc,
             pins().led_reset,
             pins().led_cs);

extern uint8_t BigFont[];

int n;
int m;
void print(String s, byte r = 255, byte g = 255, byte b = 255) {
  int k = 20;
  if (n > 11) {
    display.clrScr();
    n = 0;
  }
  display.setColor(r, g, b);
  display.print(s, LEFT, n * k);
  //display.print(String(s.length()), LEFT, (n+1) * k);
  display.setColor(255, 255, 255);
  n++;
}

void setup() {
  Serial.begin(settings().SerialSpeed);
  Serial.setTimeout(settings().SerialTimeout);
  display.InitLCD();
  display.clrScr();
  display.setFont(BigFont);
  display.setColor(VGA_GREEN);
  print("Buttons:",0,255,255);
}

void loop() {
  byte a = b.scan();
  if (a) {
    String s = String(a) + " " + String(voltage(A2)) + "V " + String(analogRead(pins().buttons));
    print(s);


  }
}
