#include <Playtune.h> //You need playtune.h to run the Sketch. You get it here: https://github.com/LenShustek/arduino-playtune or at my github page.

const unsigned char PROGMEM score [] = {
  
  
  
  
  
  Playtune pt;

void setup() {
 
 delay(2000);    
  
  pt.tune_initchan (0);
  pt.tune_initchan (1);
  pt.tune_initchan (2);
  pt.tune_initchan (3);
  pt.tune_initchan (4);
  pt.tune_initchan (5);
  pt.tune_initchan (6);
  pt.tune_initchan (7);
  pt.tune_initchan (8);
  pt.tune_initchan (9);
  pt.tune_initchan (10);
  pt.tune_initchan (11);
  pt.tune_initchan (12);
  pt.tune_initchan (13);
  pt.tune_initchan (14);
  pt.tune_initchan (15); //You do not need that much, but I've just activated them all 
  //pt.tune_initchan (16);

 
  
  pt.tune_playscore (score); //Start
}

void loop () {
