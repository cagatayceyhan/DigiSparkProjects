#include "DigiKeyboard.h"
void setup() {
}
void loop() {
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("%windir%/System32/SndVol.exe -f 49825268"); //opens volume slider
  DigiKeyboard.sendKeyStroke(KEY_ENTER); //sets volume slider to 100
  for(int i=0; i<101; i++){
    DigiKeyboard.delay(100); //any values less than 100 make the KEYUP not work
    DigiKeyboard.sendKeyStroke(KEY_UP_ARROW);
  }
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("https://youtu.be/lXMskKTw3Bc");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(4000);
  DigiKeyboard.sendKeyStroke(KEY_F);
  for(;;){ }
}
