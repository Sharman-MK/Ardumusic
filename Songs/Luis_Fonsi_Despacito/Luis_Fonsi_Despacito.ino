
//******************************************************************************************************
//                                             Arduino Despacito by DonLaki
//                                             https://www.youtube.com/channel/UC4ApVu3GJwN9kiL3n8POSeg?

// This work is licensed under a Creative Commons Attribution-NonCommercial 4.0 International License.
// More infos see http://creativecommons.org/licenses/by-nc/4.0
//******************************************************************************************************

// Manual: Connect Digital Pin 0,1,2,3,4 and 5 each with 100 ohms resistor to + on the speaker and pin GND to - on the speaker

#include <Playtune.h> //You need playtune.h to run the Sketch. You get it here: https://github.com/LenShustek/arduino-playtune

const unsigned char PROGMEM score [] = {
0x90,51, 0x91,66, 1,59, 0x80, 0,18, 0x90,58, 1,42, 0x81, 0,16, 0x80, 0,18, 0x90,66, 
0x91,54, 1,59, 0x81, 0,18, 0x91,58, 1,42, 0x80, 0,16, 0x81, 0,18, 0x90,66, 0x91,51, 
1,59, 0x81, 0,18, 0x91,58, 1,42, 0x80, 0,16, 0x81, 0,18, 0x90,70, 0x91,54, 1,59, 
0x81, 0,18, 0x91,58, 1,42, 0x80, 0,16, 0x81, 0,18, 0x90,75, 0x91,47, 1,59, 0x81, 0,18, 
0x91,54, 1,42, 0x80, 0,16, 0x81, 0,18, 0x90,75, 0x91,51, 1,59, 0x81, 0,18, 0x91,54, 
1,42, 0x80, 0,16, 0x81, 0,18, 0x90,75, 0x91,47, 1,59, 0x81, 0,18, 0x91,54, 1,42, 
0x80, 0,16, 0x81, 0,18, 0x90,73, 0x91,51, 1,59, 0x81, 0,18, 0x91,54, 1,42, 0x80, 0,16, 
0x81, 0,18, 0x90,70, 0x91,54, 1,59, 0x81, 0,18, 0x91,61, 1,42, 0x80, 0,16, 0x81, 0,18, 
0x90,70, 0x91,58, 1,59, 0x81, 0,18, 0x91,61, 1,42, 0x80, 0,16, 0x81, 0,18, 0x90,70, 
0x91,54, 1,59, 0x81, 0,18, 0x91,61, 1,42, 0x80, 0,16, 0x81, 0,18, 0x90,70, 0x91,58, 
1,59, 0x81, 0,18, 0x91,61, 1,42, 0x80, 0,16, 0x81, 0,18, 0x90,65, 0x91,49, 1,59, 
0x81, 0,18, 0x91,56, 1,42, 0x80, 0,16, 0x81, 0,18, 0x90,65, 0x91,53, 1,59, 0x81, 0,18, 
0x91,56, 1,42, 0x80, 0,16, 0x81, 0,18, 0x90,65, 0x91,49, 1,59, 0x81, 0,18, 0x91,56, 
1,42, 0x80, 0,16, 0x81, 0,18, 0x90,63, 0x91,53, 1,59, 0x81, 0,18, 0x91,56, 1,42, 
0x80, 0,16, 0x81, 0,18, 0x90,51, 0x91,54, 0x92,58, 1,77, 0x93,78, 1,42, 0x80, 0x81, 0x82, 
0,16, 0x83, 0,18, 0x90,51, 0x91,78, 0x92,54, 0x93,63, 1,59, 0x81, 0,18, 0x91,75, 1,42, 
0x80, 0x82, 0x83, 0,16, 0x81, 0,18, 0x90,51, 0x91,78, 0x92,54, 0x93,63, 1,59, 0x81, 0,18, 
0x91,75, 1,42, 0x80, 0x82, 0x83, 0,16, 0x81, 0,18, 0x90,51, 0x91,78, 0x92,54, 0x93,61, 1,59, 
0x81, 0,18, 0x91,80, 1,42, 0x80, 0x82, 0x83, 0,16, 0x81, 0,18, 0x90,51, 0x91,80, 0x92,54, 
0x93,59, 0,62, 0x81, 0,1, 0x91,82, 2,56, 0x80, 0x82, 0x83, 0,1, 0x81, 0,33, 0x90,51, 
0x91,78, 0x92,54, 0x93,63, 1,59, 0x81, 0,18, 0x91,78, 1,42, 0x80, 0x82, 0x83, 0,16, 0x81, 
0,18, 0x90,51, 0x91,73, 0x92,54, 0x93,63, 1,59, 0x81, 0,18, 0x91,82, 1,42, 0x80, 0x82, 
0x83, 0,34, 0x90,51, 0x92,54, 0x93,61, 1,42, 0x81, 0,34, 0x91,80, 1,42, 0x80, 0x82, 0x83, 
0,16, 0x81, 0,18, 0x90,54, 0x91,58, 0x92,61, 2,119, 0x80, 0x81, 0x82, 0,34, 0x90,54, 0x91,58, 
0x92,61, 2,119, 0x80, 0x81, 0x82, 0,34, 0x90,54, 0x91,58, 0x92,61, 1,77, 0x93,78, 1,42, 
0x80, 0x81, 0x82, 0,16, 0x83, 0,18, 0x90,54, 0x91,78, 0x92,58, 0x93,61, 1,59, 0x81, 0,18, 
0x91,78, 1,42, 0x80, 0x82, 0x83, 0,16, 0x81, 0,18, 0x90,49, 0x91,77, 0x92,53, 0x93,56, 2,119, 
0x80, 0x82, 0x83, 0,34, 0x90,49, 0x92,53, 0x93,56, 1,25, 0x81, 0,51, 0x91,77, 1,42, 0x80, 
0x82, 0x83, 0,16, 0x81, 0,18, 0x90,49, 0x91,77, 0x92,53, 0x93,56, 1,59, 0x81, 0,18, 0x91,75, 
1,42, 0x80, 0x82, 0x83, 0,16, 0x81, 0,18, 0x90,49, 0x91,78, 0x92,53, 0x93,56, 2,119, 0x81, 
0x80, 0x82, 0x83, 0,34, 0x90,51, 0x91,54, 0x92,58, 1,77, 0x93,78, 1,42, 0x80, 0x81, 0x82, 0,16, 
0x83, 0,18, 0x90,51, 0x91,78, 0x92,54, 0x93,63, 1,59, 0x81, 0,18, 0x91,75, 1,42, 0x80, 
0x82, 0x83, 0,16, 0x81, 0,18, 0x90,51, 0x91,78, 0x92,54, 0x93,63, 1,59, 0x81, 0,18, 0x91,75, 
1,42, 0x80, 0x82, 0x83, 0,16, 0x81, 0,18, 0x90,51, 0x91,78, 0x92,54, 0x93,61, 1,59, 0x81, 
0,18, 0x91,80, 1,42, 0x80, 0x82, 0x83, 0,16, 0x81, 0,18, 0x90,51, 0x91,82, 0x92,54, 0x93,59, 
2,119, 0x81, 0x80, 0x82, 0x83, 0,34, 0x90,78, 0x91,51, 0x92,54, 0x93,63, 1,59, 0x80, 0,18, 
0x90,78, 1,42, 0x81, 0x82, 0x83, 0,16, 0x80, 0,18, 0x90,51, 0x91,85, 0x92,54, 0x93,63, 1,59, 
0x81, 0,18, 0x91,82, 1,42, 0x80, 0x82, 0x83, 0,34, 0x90,51, 0x92,54, 0x93,61, 2,103, 0x81, 
0,16, 0x80, 0x82, 0x83, 0,34, 0x90,54, 0x91,58, 0x92,61, 2,119, 0x80, 0x81, 0x82, 0,34, 0x90,54, 
0x91,58, 0x92,61, 2,119, 0x80, 0x81, 0x82, 0,34, 0x90,54, 0x91,58, 0x92,61, 1,77, 0x93,78, 
1,42, 0x80, 0x81, 0x82, 0,16, 0x83, 0,18, 0x90,54, 0x91,78, 0x92,58, 0x93,61, 1,59, 0x81, 
0,18, 0x91,80, 1,42, 0x80, 0x82, 0x83, 0,34, 0x90,49, 0x92,53, 0x93,56, 2,119, 0x80, 0x82, 
0x83, 0,34, 0x90,49, 0x92,53, 0x93,56, 2,69, 0x81, 0,50, 0x80, 0x82, 0x83, 0,34, 0x90,49, 
0x91,53, 0x92,56, 1,77, 0x93,70, 0x94,82, 1,42, 0x80, 0x81, 0x82, 0,16, 0x83, 0x84, 0,18, 
0x90,49, 0x91,70, 0x92,53, 0x93,82, 0x94,56, 1,59, 0x81, 0x83, 0,18, 0x91,70, 0x93,82, 1,42, 
0x80, 0x82, 0x84, 0,16, 0x81, 0x83, 0,18, 0x90,39, 0x91,70, 0x92,78, 0x93,82, 1,59, 0x80, 0,18, 
0x90,51, 0x94,54, 0,156, 0x80, 0x84, 0,141, 0x81, 0x82, 0x83, 0,34, 0x90,78, 1,59, 0x80, 0,18, 
0x90,51, 0x91,54, 0,156, 0x80, 0x81, 0,176, 0x90,78, 1,59, 0x80, 0,18, 0x90,51, 0x91,54, 
0,156, 0x80, 0x81, 0,176, 0x90,82, 1,59, 0x80, 0,18, 0x90,51, 0x91,54, 0,156, 0x80, 0x81, 
0,176, 0x90,87, 0x91,47, 1,59, 0x80, 0x81, 0,18, 0x90,51, 0x91,54, 0,156, 0x80, 0x81, 0,176, 
0x90,87, 1,59, 0x80, 0,18, 0x90,51, 0x91,54, 0,156, 0x80, 0x81, 0,176, 0x90,87, 1,59, 
0x80, 0,18, 0x90,51, 0x91,82, 0x92,54, 0,156, 0x80, 0x82, 0,158, 0x81, 0,18, 0x90,82, 0x91,85, 
1,59, 0x80, 0x81, 0,18, 0x90,51, 0x91,82, 0x92,54, 0,156, 0x80, 0x82, 0,158, 0x81, 0,18, 
0x90,42, 0x91,82, 1,59, 0x80, 0,18, 0x90,54, 0x92,58, 0,156, 0x80, 0x82, 0,141, 0x81, 0,34, 
0x90,82, 1,59, 0x80, 0,18, 0x90,54, 0x91,58, 0,156, 0x80, 0x81, 0,176, 0x90,82, 1,59, 
0x80, 0,18, 0x90,54, 0x91,58, 0,156, 0x80, 0x81, 0,176, 0x90,82, 1,59, 0x80, 0,18, 0x90,54, 
0x91,58, 0,156, 0x80, 0x81, 0,176, 0x90,77, 0x91,49, 1,59, 0x80, 0x81, 0,18, 0x90,53, 0x91,56, 
0,156, 0x80, 0x81, 0,176, 0x90,77, 1,59, 0x80, 0,18, 0x90,53, 0x91,56, 0,156, 0x80, 0x81, 
0,176, 0x90,77, 1,59, 0x80, 0,18, 0x90,53, 0x91,70, 0x92,56, 0x93,82, 0,156, 0x80, 0x82, 
0,158, 0x81, 0x83, 0,18, 0x90,70, 0x91,77, 0x92,82, 1,59, 0x80, 0x81, 0x82, 0,18, 0x90,53, 
0x91,70, 0x92,56, 0x93,82, 0,156, 0x80, 0x82, 0,158, 0x81, 0x83, 0,18, 0x90,39, 0x91,70, 0x92,78, 
0x93,82, 1,59, 0x80, 0,18, 0x90,51, 0x94,54, 0,156, 0x80, 0x84, 1,253, 0x90,51, 0x94,54, 
0,156, 0x80, 0x84, 0,108, 0x81, 0x82, 0x83, 1,145, 0x90,51, 0x91,66, 0x92,54, 0,156, 0x81, 0x80, 
0x82, 0,9, 0x90,68, 0,156, 0x80, 0,9, 0x90,68, 1,59, 0x80, 0,18, 0x90,51, 0x91,68, 
0x92,54, 0,156, 0x81, 0x80, 0x82, 0,9, 0x90,70, 0,156, 0x80, 0,9, 0x90,47, 0x91,68, 1,59, 
0x80, 0x81, 0,18, 0x90,51, 0x91,66, 0x92,54, 0,156, 0x80, 0x82, 0,158, 0x81, 0,18, 0x90,66, 
1,77, 0x91,51, 0x92,54, 0,156, 0x81, 0x82, 1,202, 0x80, 0,51, 0x90,51, 0x91,70, 0x92,54, 
0x93,82, 0,156, 0x80, 0x82, 0,158, 0x81, 0x83, 0,18, 0x90,70, 0x91,82, 1,59, 0x80, 0x81, 0,18, 
0x90,51, 0x91,70, 0x92,54, 0x93,82, 0,156, 0x80, 0x82, 0,158, 0x81, 0x83, 0,18, 0x90,42, 0x91,70, 
0x92,82, 1,59, 0x80, 0,18, 0x90,54, 0x93,58, 0,156, 0x80, 0x83, 1,253, 0x90,54, 0x93,58, 
0,156, 0x80, 0x83, 0,108, 0x81, 0x82, 1,145, 0x90,54, 0x91,66, 0x92,58, 0,156, 0x81, 0x80, 0x82, 
0,9, 0x90,66, 0,156, 0x80, 0,9, 0x90,66, 1,59, 0x80, 0,18, 0x90,54, 0x91,66, 0x92,58, 
0,156, 0x81, 0x80, 0x82, 0,9, 0x90,68, 0,156, 0x80, 0,9, 0x90,49, 0x91,65, 1,59, 0x80, 
0x81, 0,18, 0x90,53, 0x91,65, 0x92,56, 0,156, 0x80, 0x82, 0,158, 0x81, 0,18, 0x90,65, 1,59, 
0x80, 0,18, 0x90,53, 0x91,66, 0x92,56, 0,156, 0x80, 0x82, 1,253, 0x90,53, 0x92,56, 0,156, 
0x80, 0x82, 1,185, 0x81, 0,68, 0x90,53, 0x91,56, 0,156, 0x80, 0x81, 1,253, 0x90,70, 0x91,82, 
1,59, 0x80, 0x81, 0,18, 0x90,70, 0x91,82, 1,59, 0x80, 0x81, 0,18, 0x90,70, 0x91,82, 1,59, 
0x80, 0x81, 0,18, 0x90,39, 0x91,70, 0x92,51, 0x93,75, 0x94,78, 0x95,82, 2,119, 0x80, 0x82, 0,34, 
0x90,54, 0x92,58, 2,119, 0x80, 0x82, 0,34, 0x90,54, 0x92,58, 2,119, 0x80, 0x82, 0,34, 0x90,54, 
0x92,58, 0,215, 0x81, 0x83, 0x84, 0x85, 0,118, 0x91,66, 1,42, 0x80, 0x82, 0,16, 0x81, 0,18, 
0x90,35, 0x91,63, 0x92,47, 1,59, 0x81, 0,18, 0x91,61, 1,42, 0x80, 0x82, 0,34, 0x90,51, 
0x92,54, 0x93,59, 2,119, 0x80, 0x82, 0x83, 0,34, 0x90,51, 0x92,54, 0x93,59, 1,9, 0x81, 0,68, 
0x91,66, 1,42, 0x80, 0x82, 0x83, 0,16, 0x81, 0,18, 0x90,51, 0x91,73, 0x92,54, 0x93,59, 1,59, 
0x81, 0,18, 0x91,73, 0,156, 0x81, 0,9, 0x91,66, 0x94,70, 0,131, 0x80, 0x82, 0x83, 0,34, 
0x90,42, 0x92,54, 2,119, 0x80, 0x82, 0,34, 0x90,54, 0x92,58, 0x93,61, 2,78, 0x81, 0x84, 0,41, 
0x80, 0x82, 0x83, 0,34, 0x90,54, 0x91,58, 0x92,61, 1,77, 0x93,66, 1,42, 0x80, 0x81, 0x82, 0,16, 
0x83, 0,18, 0x90,54, 0x91,73, 0x92,58, 0x93,61, 1,59, 0x81, 0,18, 0x91,73, 0,156, 0x81, 
0,9, 0x91,65, 0x94,70, 0,131, 0x80, 0x82, 0x83, 0,34, 0x90,37, 0x92,49, 2,119, 0x80, 0x82, 
0,34, 0x90,53, 0x92,56, 0x93,61, 1,17, 0x81, 0x84, 0,59, 0x91,68, 1,42, 0x80, 0x82, 0x83, 
0,34, 0x90,53, 0x92,56, 0x93,61, 1,42, 0x81, 0,34, 0x91,70, 0x94,82, 1,42, 0x80, 0x82, 
0x83, 0,16, 0x81, 0x84, 0,18, 0x90,53, 0x91,70, 0x92,56, 0x93,82, 0x94,61, 1,59, 0x81, 0x83, 
0,18, 0x91,70, 0x93,82, 1,42, 0x80, 0x82, 0x84, 0,16, 0x81, 0x83, 0,18, 0x90,39, 0x91,70, 
0x92,51, 0x93,75, 0x94,78, 0x95,82, 2,119, 0x80, 0x82, 0,34, 0x90,54, 0x92,58, 2,86, 0x81, 
0x83, 0x84, 0x85, 0,33, 0x80, 0x82, 0,34, 0x90,54, 0x91,58, 0x92,63, 1,77, 0x93,66, 1,42, 
0x80, 0x81, 0x82, 0,16, 0x83, 0,18, 0x90,54, 0x91,66, 0x92,58, 1,59, 0x81, 0,18, 0x91,63, 
0,156, 0x81, 0,9, 0x91,71, 0,131, 0x80, 0x82, 0,34, 0x90,35, 0x92,47, 2,119, 0x80, 0x82, 
0,34, 0x90,51, 0x92,54, 0x93,59, 2,119, 0x80, 0x82, 0x83, 0,34, 0x90,51, 0x92,54, 0x93,59, 
2,119, 0x80, 0x82, 0x83, 0,34, 0x90,51, 0x92,54, 0x93,59, 0,206, 0x81, 0,126, 0x91,73, 1,42, 
0x80, 0x82, 0x83, 0,16, 0x81, 0,18, 0x90,42, 0x91,70, 0x92,54, 1,59, 0x81, 0,18, 0x91,73, 
1,42, 0x80, 0x82, 0,16, 0x81, 0,18, 0x90,54, 0x91,70, 0x92,58, 0x93,61, 1,59, 0x81, 0,18, 
0x91,73, 1,42, 0x80, 0x82, 0x83, 0,16, 0x81, 0,18, 0x90,54, 0x91,70, 0x92,58, 0x93,61, 1,59, 
0x81, 0,18, 0x91,73, 1,42, 0x80, 0x82, 0x83, 0,16, 0x81, 0,18, 0x90,54, 0x91,70, 0x92,58, 
0x93,61, 1,59, 0x81, 0,18, 0x91,68, 0,156, 0x81, 0,9, 0x91,71, 0,131, 0x80, 0x82, 0x83, 
0,34, 0x90,37, 0x92,49, 2,119, 0x80, 0x82, 0,34, 0x90,53, 0x92,56, 0x93,61, 1,17, 0x81, 
0,59, 0x91,63, 1,42, 0x80, 0x82, 0x83, 0,16, 0x81, 0,18, 0x90,53, 0x91,71, 0x92,56, 0x93,61, 
2,119, 0x81, 0x80, 0x82, 0x83, 0,34, 0x90,70, 0x91,53, 0x92,56, 0x93,61, 2,119, 0x80, 0x81, 0x82, 
0x83, 0,34, 0x90,66, 0x91,39, 0x92,51, 0,209, 0x80, 0,12, 0x90,66, 0,104, 0x80, 0,6, 
0x90,66, 1,42, 0x81, 0x82, 0,16, 0x80, 0,18, 0x90,54, 0x91,66, 0x92,58, 0x93,63, 0,209, 
0x81, 0,12, 0x91,66, 0,104, 0x81, 0,6, 0x91,66, 1,42, 0x80, 0x82, 0x83, 0,16, 0x81, 0,18, 
0x90,54, 0x91,70, 0x92,58, 0x93,63, 1,59, 0x81, 0,18, 0x91,70, 0,209, 0x81, 0,12, 0x91,78, 
0,76, 0x80, 0x82, 0x83, 0,27, 0x81, 0,6, 0x90,54, 0x91,78, 0x92,58, 0x93,63, 0,209, 0x81, 
0,12, 0x91,78, 0,104, 0x81, 0,6, 0x91,77, 0,209, 0x81, 0,12, 0x91,77, 0,76, 0x80, 
0x82, 0x83, 0,27, 0x81, 0,6, 0x90,35, 0x91,75, 0x92,47, 1,59, 0x81, 0,18, 0x91,75, 1,42, 
0x80, 0x82, 0,16, 0x81, 0,18, 0x90,51, 0x91,75, 0x92,54, 0x93,59, 0,209, 0x81, 0,12, 0x91,75, 
0,104, 0x81, 0,6, 0x91,75, 1,42, 0x80, 0x82, 0x83, 0,16, 0x81, 0,18, 0x90,51, 0x91,71, 
0x92,54, 0x93,83, 0x94,59, 2,119, 0x81, 0x83, 0x80, 0x82, 0x84, 0,34, 0x90,70, 0x91,51, 0x92,82, 
0x93,54, 0x94,59, 2,119, 0x80, 0x82, 0x81, 0x83, 0x84, 0,34, 0x90,70, 0x91,42, 0x92,54, 1,59, 
0x80, 0,18, 0x90,70, 1,42, 0x81, 0x82, 0,16, 0x80, 0,18, 0x90,54, 0x91,70, 0x92,58, 0x93,61, 
1,59, 0x81, 0,18, 0x91,70, 1,42, 0x80, 0x82, 0x83, 0,16, 0x81, 0,18, 0x90,54, 0x91,73, 
0x92,58, 0x93,61, 1,59, 0x81, 0,18, 0x91,71, 1,42, 0x80, 0x82, 0x83, 0,16, 0x81, 0,18, 
0x90,54, 0x91,70, 0x92,58, 0x93,61, 0,209, 0x81, 0,12, 0x91,68, 0,104, 0x81, 0,6, 0x91,66, 
1,42, 0x80, 0x82, 0x83, 0,16, 0x81, 0,18, 0x90,37, 0x91,65, 0x92,49, 1,59, 0x81, 0,18, 
0x91,65, 1,42, 0x80, 0x82, 0,16, 0x81, 0,18, 0x90,53, 0x91,65, 0x92,56, 0x93,61, 0,209, 
0x81, 0,12, 0x91,65, 0,104, 0x81, 0,6, 0x91,63, 0x94,75, 1,42, 0x80, 0x82, 0x83, 0,16, 
0x81, 0x84, 0,18, 0x90,53, 0x91,71, 0x92,56, 0x93,83, 0x94,61, 2,119, 0x81, 0x83, 0x80, 0x82, 0x84, 
0,34, 0x90,70, 0x91,53, 0x92,82, 0x93,56, 0x94,61, 2,119, 0x80, 0x82, 0x81, 0x83, 0x84, 0,34, 
0x90,66, 0x91,39, 0x92,51, 0,209, 0x80, 0,12, 0x90,66, 0,104, 0x80, 0,6, 0x90,66, 1,42, 
0x81, 0x82, 0,16, 0x80, 0,18, 0x90,54, 0x91,66, 0x92,58, 0x93,63, 0,209, 0x81, 0,12, 0x91,66, 
0,104, 0x81, 0,6, 0x91,66, 1,42, 0x80, 0x82, 0x83, 0,16, 0x81, 0,18, 0x90,54, 0x91,70, 
0x92,58, 0x93,63, 1,59, 0x81, 0,18, 0x91,70, 0,209, 0x81, 0,12, 0x91,78, 0,76, 0x80, 
0x82, 0x83, 0,27, 0x81, 0,6, 0x90,54, 0x91,78, 0x92,58, 0x93,63, 0,209, 0x81, 0,12, 0x91,78, 
0,104, 0x81, 0,6, 0x91,77, 0,209, 0x81, 0,12, 0x91,77, 0,76, 0x80, 0x82, 0x83, 0,27, 
0x81, 0,6, 0x90,35, 0x91,75, 0x92,47, 1,59, 0x81, 0,18, 0x91,75, 1,42, 0x80, 0x82, 0,16, 
0x81, 0,18, 0x90,51, 0x91,75, 0x92,54, 0x93,59, 0,209, 0x81, 0,12, 0x91,75, 0,104, 0x81, 
0,6, 0x91,73, 1,42, 0x80, 0x82, 0x83, 0,16, 0x81, 0,18, 0x90,51, 0x91,71, 0x92,54, 0x93,83, 
0x94,59, 2,119, 0x81, 0x83, 0x80, 0x82, 0x84, 0,34, 0x90,73, 0x91,51, 0x92,85, 0x93,54, 0x94,59, 
2,119, 0x80, 0x82, 0x81, 0x83, 0x84, 0,34, 0x90,70, 0x91,42, 0x92,54, 1,59, 0x80, 0,18, 0x90,70, 
1,42, 0x81, 0x82, 0,16, 0x80, 0,18, 0x90,54, 0x91,70, 0x92,58, 0x93,61, 1,59, 0x81, 0,18, 
0x91,70, 1,42, 0x80, 0x82, 0x83, 0,16, 0x81, 0,18, 0x90,54, 0x91,73, 0x92,58, 0x93,61, 1,59, 
0x81, 0,18, 0x91,71, 1,42, 0x80, 0x82, 0x83, 0,16, 0x81, 0,18, 0x90,54, 0x91,70, 0x92,58, 
0x93,61, 0,209, 0x81, 0,12, 0x91,68, 0,104, 0x81, 0,6, 0x91,66, 1,42, 0x80, 0x82, 0x83, 
0,16, 0x81, 0,18, 0x90,37, 0x91,65, 0x92,49, 1,59, 0x81, 0,18, 0x91,65, 1,42, 0x80, 
0x82, 0,16, 0x81, 0,18, 0x90,53, 0x91,65, 0x92,56, 0x93,61, 0,209, 0x81, 0,12, 0x91,65, 
0,104, 0x81, 0,6, 0x91,63, 0x94,75, 1,42, 0x80, 0x82, 0x83, 0,16, 0x81, 0x84, 0,18, 0x90,53, 
0x91,71, 0x92,56, 0x93,83, 0x94,61, 2,119, 0x81, 0x83, 0x80, 0x82, 0x84, 0,34, 0x90,70, 0x91,53, 
0x92,82, 0x93,56, 0x94,61, 2,119, 0x80, 0x82, 0x81, 0x83, 0x84, 0,34, 0x90,58, 0x91,63, 0x92,66, 
0,156, 0x80, 0x81, 0x82, 0,176, 0x90,78, 0x91,58, 0x92,63, 0x93,66, 0,156, 0x81, 0x82, 0x83, 0,158, 
0x80, 0,18, 0x90,58, 0x91,78, 0x92,63, 0x93,66, 0,156, 0x80, 0x82, 0x83, 0,158, 0x81, 0,18, 
0x90,58, 0x91,78, 0x92,63, 0x93,66, 0,156, 0x80, 0x82, 0x83, 0,158, 0x81, 0,18, 0x90,58, 0x91,78, 
0x92,63, 0x93,66, 0,156, 0x80, 0x82, 0x83, 0,158, 0x81, 0,18, 0x90,58, 0x91,75, 0x92,63, 0x93,66, 
0,156, 0x80, 0x82, 0x83, 0,158, 0x81, 0,18, 0x90,58, 0x91,78, 0x92,63, 0x93,66, 0,209, 0x80, 
0x82, 0x83, 0,12, 0x90,58, 0x92,63, 0x93,66, 0,93, 0x81, 0,11, 0x80, 0x82, 0x83, 0,6, 0x90,80, 
0x91,58, 0x92,63, 0x93,66, 0,209, 0x81, 0x82, 0x83, 0,12, 0x91,58, 0x92,63, 0x93,66, 0,93, 
0x80, 0,11, 0x81, 0x82, 0x83, 0,6, 0x90,82, 0x91,59, 0x92,63, 0x93,66, 0,156, 0x81, 0x82, 0x83, 
0,176, 0x91,59, 0x92,63, 0x93,66, 0,156, 0x81, 0x82, 0x83, 0,141, 0x80, 0,34, 0x90,59, 0x91,78, 
0x92,63, 0x93,66, 0,156, 0x80, 0x82, 0x83, 0,158, 0x81, 0,18, 0x90,59, 0x91,78, 0x92,63, 0x93,66, 
0,156, 0x80, 0x82, 0x83, 0,158, 0x81, 0,18, 0x90,59, 0x91,73, 0x92,63, 0x93,66, 0,156, 0x80, 
0x82, 0x83, 0,158, 0x81, 0,18, 0x90,59, 0x91,82, 0x92,63, 0x93,66, 0,156, 0x80, 0x82, 0x83, 0,176, 
0x90,59, 0x92,63, 0x93,66, 0,156, 0x80, 0x82, 0x83, 0,176, 0x90,59, 0x92,63, 0x93,66, 0,156, 
0x80, 0x82, 0x83, 0,125, 0x81, 0,51, 0x90,58, 0x91,61, 0x92,66, 0,156, 0x80, 0x81, 0x82, 0,176, 
0x90,58, 0x91,61, 0x92,66, 0,156, 0x80, 0x81, 0x82, 0,176, 0x90,58, 0x91,61, 0x92,66, 0,156, 
0x80, 0x81, 0x82, 0,176, 0x90,58, 0x91,61, 0x92,66, 0,156, 0x80, 0x81, 0x82, 0,176, 0x90,58, 0x91,61, 
0x92,66, 0,156, 0x80, 0x81, 0x82, 0,176, 0x90,78, 0x91,58, 0x92,61, 0x93,66, 0,156, 0x81, 0x82, 
0x83, 0,158, 0x80, 0,18, 0x90,58, 0x91,78, 0x92,61, 0x93,66, 0,209, 0x80, 0x82, 0x83, 0,12, 
0x90,58, 0x92,61, 0x93,66, 0,93, 0x81, 0,11, 0x80, 0x82, 0x83, 0,6, 0x90,78, 0x91,58, 0x92,61, 
0x93,66, 0,209, 0x81, 0x82, 0x83, 0,12, 0x91,58, 0x92,61, 0x93,66, 0,93, 0x80, 0,11, 0x81, 
0x82, 0x83, 0,6, 0x90,77, 0x91,56, 0x92,61, 0x93,65, 0,156, 0x81, 0x82, 0x83, 0,176, 0x91,56, 
0x92,61, 0x93,65, 0,156, 0x81, 0x82, 0x83, 0,176, 0x91,56, 0x92,61, 0x93,65, 0,156, 0x81, 0x82, 
0x83, 0,125, 0x80, 0,51, 0x90,56, 0x91,77, 0x92,61, 0x93,65, 0,156, 0x80, 0x82, 0x83, 0,158, 
0x81, 0,18, 0x90,56, 0x91,77, 0x92,61, 0x93,65, 0,156, 0x80, 0x82, 0x83, 0,158, 0x81, 0,18, 
0x90,56, 0x91,75, 0x92,61, 0x93,65, 0,156, 0x80, 0x82, 0x83, 0,158, 0x81, 0,18, 0x90,56, 0x91,78, 
0x92,61, 0x93,65, 0,156, 0x80, 0x82, 0x83, 0,176, 0x90,56, 0x92,61, 0x93,65, 0,156, 0x80, 0x82, 
0x83, 0,141, 0x81, 0,34, 0x90,58, 0x91,63, 0x92,66, 0,156, 0x80, 0x81, 0x82, 0,176, 0x90,78, 
0x91,58, 0x92,63, 0x93,66, 0,156, 0x81, 0x82, 0x83, 0,158, 0x80, 0,18, 0x90,58, 0x91,78, 0x92,63, 
0x93,66, 0,156, 0x80, 0x82, 0x83, 0,158, 0x81, 0,18, 0x90,58, 0x91,80, 0x92,63, 0x93,66, 0,156, 
0x80, 0x82, 0x83, 0,158, 0x81, 0,18, 0x90,58, 0x91,78, 0x92,63, 0x93,66, 0,156, 0x80, 0x82, 0x83, 
0,158, 0x81, 0,18, 0x90,58, 0x91,75, 0x92,63, 0x93,66, 0,156, 0x80, 0x82, 0x83, 0,158, 0x81, 
0,18, 0x90,58, 0x91,78, 0x92,63, 0x93,66, 0,209, 0x80, 0x82, 0x83, 0,12, 0x90,58, 0x92,63, 
0x93,66, 0,93, 0x81, 0,11, 0x80, 0x82, 0x83, 0,6, 0x90,80, 0x91,58, 0x92,63, 0x93,66, 0,209, 
0x81, 0x82, 0x83, 0,12, 0x91,58, 0x92,63, 0x93,66, 0,93, 0x80, 0,11, 0x81, 0x82, 0x83, 0,6, 
0x90,82, 0x91,59, 0x92,63, 0x93,66, 0,156, 0x81, 0x82, 0x83, 0,176, 0x91,59, 0x92,63, 0x93,66, 
0,156, 0x81, 0x82, 0x83, 0,176, 0x91,59, 0x92,63, 0x93,66, 0,156, 0x81, 0x82, 0x83, 0,125, 0x80, 
0,51, 0x90,59, 0x91,78, 0x92,63, 0x93,66, 0,156, 0x80, 0x82, 0x83, 0,158, 0x81, 0,18, 0x90,59, 
0x91,85, 0x92,63, 0x93,66, 0,156, 0x80, 0x82, 0x83, 0,176, 0x90,59, 0x92,63, 0x93,66, 0,140, 
0x81, 0,16, 0x80, 0x82, 0x83, 0,9, 0x90,82, 0,166, 0x91,59, 0x92,63, 0x93,66, 0,156, 0x81, 
0x82, 0x83, 0,176, 0x91,59, 0x92,63, 0x93,66, 0,156, 0x81, 0x82, 0x83, 0,133, 0x80, 0,43, 0x90,58, 
0x91,61, 0x92,66, 0,156, 0x80, 0x81, 0x82, 0,176, 0x90,58, 0x91,61, 0x92,66, 0,156, 0x80, 0x81, 
0x82, 0,176, 0x90,58, 0x91,61, 0x92,66, 0,156, 0x80, 0x81, 0x82, 0,176, 0x90,58, 0x91,61, 0x92,66, 
0,156, 0x80, 0x81, 0x82, 0,176, 0x90,58, 0x91,61, 0x92,66, 0,156, 0x80, 0x81, 0x82, 0,176, 0x90,78, 
0x91,58, 0x92,61, 0x93,66, 0,156, 0x81, 0x82, 0x83, 0,158, 0x80, 0,18, 0x90,58, 0x91,78, 0x92,61, 
0x93,66, 0,209, 0x80, 0x82, 0x83, 0,12, 0x90,58, 0x92,61, 0x93,66, 0,93, 0x81, 0,11, 0x80, 
0x82, 0x83, 0,6, 0x90,80, 0x91,58, 0x92,61, 0x93,66, 0,209, 0x81, 0x82, 0x83, 0,12, 0x91,58, 
0x92,61, 0x93,66, 0,104, 0x81, 0x82, 0x83, 0,6, 0x91,56, 0x92,61, 0x93,65, 0,156, 0x81, 0x82, 
0x83, 0,176, 0x91,56, 0x92,61, 0x93,65, 0,156, 0x81, 0x82, 0x83, 0,176, 0x91,56, 0x92,61, 0x93,65, 
0,156, 0x81, 0x82, 0x83, 0,176, 0x91,56, 0x92,61, 0x93,65, 0,156, 0x81, 0x82, 0x83, 0,91, 0x80, 
0,84, 0x90,56, 0x91,61, 0x92,65, 0,156, 0x80, 0x81, 0x82, 0,176, 0x90,70, 0x91,56, 0x92,82, 
0x93,61, 0x94,65, 0,156, 0x81, 0x83, 0x84, 0,158, 0x80, 0x82, 0,18, 0x90,56, 0x91,70, 0x92,61, 
0x93,82, 0x94,65, 0,156, 0x80, 0x82, 0x84, 0,158, 0x81, 0x83, 0,18, 0x90,56, 0x91,70, 0x92,61, 
0x93,82, 0x94,65, 0,156, 0x80, 0x82, 0x84, 0,158, 0x81, 0x83, 0,18, 0x90,54, 0x91,70, 0x92,58, 
0x93,82, 0x94,63, 0,156, 0x80, 0x82, 0x84, 0,176, 0x90,54, 0x92,58, 0x94,63, 0,156, 0x80, 0x82, 
0x84, 0,176, 0x90,54, 0x92,58, 0x94,63, 0,156, 0x80, 0x82, 0x84, 0,176, 0x90,54, 0x92,58, 0x94,63, 
0,156, 0x80, 0x82, 0x84, 0,108, 0x81, 0x83, 0,68, 0x90,54, 0x91,58, 0x92,63, 0,156, 0x80, 0x81, 
0x82, 0,176, 0x90,54, 0x91,58, 0x92,63, 0,156, 0x80, 0x81, 0x82, 0,176, 0x90,54, 0x91,58, 0x92,63, 
0,209, 0x80, 0x81, 0x82, 0,12, 0x90,54, 0x91,58, 0x92,63, 0,104, 0x80, 0x81, 0x82, 0,6, 0x90,54, 
0x91,58, 0x92,63, 0,209, 0x80, 0x81, 0x82, 0,12, 0x90,54, 0x91,58, 0x92,63, 0,104, 0x80, 0x81, 
0x82, 0,6, 0x90,54, 0x91,59, 0x92,63, 0,156, 0x80, 0x81, 0x82, 0,176, 0x90,54, 0x91,59, 0x92,63, 
0,156, 0x80, 0x81, 0x82, 0,176, 0x90,54, 0x91,59, 0x92,63, 0,156, 0x80, 0x81, 0x82, 0,176, 0x90,54, 
0x91,59, 0x92,63, 0,156, 0x80, 0x81, 0x82, 0,176, 0x90,54, 0x91,59, 0x92,63, 0,156, 0x80, 0x81, 
0x82, 0,176, 0x90,70, 0x91,54, 0x92,82, 0x93,59, 0x94,63, 0,156, 0x81, 0x83, 0x84, 0,158, 0x80, 
0x82, 0,18, 0x90,54, 0x91,70, 0x92,59, 0x93,82, 0x94,63, 0,156, 0x80, 0x82, 0x84, 0,158, 0x81, 
0x83, 0,18, 0x90,54, 0x91,70, 0x92,59, 0x93,82, 0x94,63, 0,156, 0x80, 0x82, 0x84, 0,158, 0x81, 
0x83, 0,18, 0x90,54, 0x91,70, 0x92,58, 0x93,82, 0x94,61, 0,156, 0x80, 0x82, 0x84, 0,176, 0x90,54, 
0x92,58, 0x94,61, 0,156, 0x80, 0x82, 0x84, 0,176, 0x90,54, 0x92,58, 0x94,61, 0,156, 0x80, 0x82, 
0x84, 0,176, 0x90,54, 0x92,58, 0x94,61, 0,156, 0x80, 0x82, 0x84, 0,176, 0x90,54, 0x92,58, 0x94,61, 
0,156, 0x80, 0x82, 0x84, 0,176, 0x90,54, 0x92,58, 0x94,61, 0,156, 0x80, 0x82, 0x84, 0,176, 0x90,54, 
0x92,58, 0x94,61, 0,209, 0x80, 0x82, 0x84, 0,12, 0x90,54, 0x92,58, 0x94,61, 0,104, 0x80, 0x82, 
0x84, 0,6, 0x90,54, 0x92,58, 0x94,61, 0,198, 0x81, 0x83, 0,11, 0x80, 0x82, 0x84, 0,12, 0x90,54, 
0x91,58, 0x92,61, 0,104, 0x80, 0x81, 0x82, 0,6, 0x90,53, 0x91,56, 0x92,61, 0,156, 0x80, 0x81, 
0x82, 0,176, 0x90,53, 0x91,56, 0x92,61, 0,156, 0x80, 0x81, 0x82, 0,176, 0x90,53, 0x91,56, 0x92,61, 
0,156, 0x80, 0x81, 0x82, 0,176, 0x90,53, 0x91,56, 0x92,61, 0,156, 0x80, 0x81, 0x82, 0,176, 0x90,53, 
0x91,56, 0x92,61, 0,156, 0x80, 0x81, 0x82, 0,176, 0x90,66, 0x91,53, 0x92,56, 0x93,61, 0,156, 
0x81, 0x82, 0x83, 0,158, 0x80, 0,18, 0x90,53, 0x91,73, 0x92,56, 0x93,61, 0,156, 0x80, 0x82, 0x83, 
0,158, 0x81, 0,18, 0x90,53, 0x91,73, 0x92,56, 0x93,61, 0,156, 0x81, 0x80, 0x82, 0x83, 0,9, 
0x90,70, 0,166, 0x91,54, 0x92,58, 0x93,63, 0,156, 0x81, 0x82, 0x83, 0,150, 0x80, 0,26, 0x90,54, 
0x91,66, 0x92,58, 0x93,63, 0,156, 0x80, 0x82, 0x83, 0,158, 0x81, 0,18, 0x90,54, 0x91,73, 0x92,58, 
0x93,63, 0,156, 0x80, 0x82, 0x83, 0,176, 0x90,54, 0x92,58, 0x93,63, 0,140, 0x81, 0,16, 0x80, 
0x82, 0x83, 0,9, 0x90,70, 0,166, 0x91,54, 0x92,58, 0x93,63, 0,156, 0x81, 0x82, 0x83, 0,150, 
0x80, 0,26, 0x90,54, 0x91,66, 0x92,58, 0x93,63, 0,156, 0x80, 0x82, 0x83, 0,158, 0x81, 0,18, 
0x90,54, 0x91,73, 0x92,58, 0x93,63, 0,209, 0x80, 0x82, 0x83, 0,12, 0x90,54, 0x92,58, 0x93,63, 
0,93, 0x81, 0,11, 0x80, 0x82, 0x83, 0,6, 0x90,73, 0x91,54, 0x92,58, 0x93,63, 0,156, 0x80, 
0,9, 0x90,68, 0,43, 0x81, 0x82, 0x83, 0,12, 0x91,54, 0x92,58, 0x93,63, 0,104, 0x81, 0x82, 
0x83, 0,6, 0x91,54, 0x92,59, 0x93,63, 0,156, 0x81, 0x82, 0x83, 0,150, 0x80, 0,26, 0x90,54, 
0x91,66, 0x92,59, 0x93,63, 0,156, 0x80, 0x82, 0x83, 0,158, 0x81, 0,18, 0x90,54, 0x91,66, 0x92,59, 
0x93,63, 0,156, 0x80, 0x82, 0x83, 0,158, 0x81, 0,18, 0x90,54, 0x91,70, 0x92,59, 0x93,63, 0,156, 
0x80, 0x82, 0x83, 0,176, 0x90,54, 0x92,59, 0x93,63, 0,156, 0x80, 0x82, 0x83, 0,141, 0x81, 0,34, 
0x90,54, 0x91,66, 0x92,59, 0x93,63, 0,156, 0x80, 0x82, 0x83, 0,158, 0x81, 0,18, 0x90,54, 0x91,73, 
0x92,59, 0x93,63, 0,156, 0x80, 0x82, 0x83, 0,158, 0x81, 0,18, 0x90,54, 0x91,73, 0x92,59, 0x93,63, 
0,156, 0x81, 0x80, 0x82, 0x83, 0,9, 0x90,70, 0,166, 0x91,54, 0x92,58, 0x93,61, 0,156, 0x81, 
0x82, 0x83, 0,176, 0x91,54, 0x92,58, 0x93,61, 0,156, 0x81, 0x82, 0x83, 0,176, 0x91,54, 0x92,58, 
0x93,61, 0,156, 0x81, 0x82, 0x83, 0,176, 0x91,54, 0x92,58, 0x93,61, 0,156, 0x81, 0x82, 0x83, 0,100, 
0x80, 0,76, 0x90,54, 0x91,58, 0x92,61, 0,156, 0x80, 0x81, 0x82, 0,176, 0x90,66, 0x91,54, 0x92,58, 
0x93,61, 0,156, 0x81, 0x82, 0x83, 0,158, 0x80, 0,18, 0x90,54, 0x91,73, 0x92,58, 0x93,61, 0,209, 
0x80, 0x82, 0x83, 0,12, 0x90,54, 0x92,58, 0x93,61, 0,93, 0x81, 0,11, 0x80, 0x82, 0x83, 0,6, 
0x90,73, 0x91,54, 0x92,58, 0x93,61, 0,156, 0x80, 0,9, 0x90,68, 0,43, 0x81, 0x82, 0x83, 0,12, 
0x91,54, 0x92,58, 0x93,61, 0,104, 0x81, 0x82, 0x83, 0,6, 0x91,53, 0x92,56, 0x93,61, 0,156, 
0x81, 0x82, 0x83, 0,176, 0x91,53, 0x92,56, 0x93,61, 0,156, 0x81, 0x82, 0x83, 0,176, 0x91,53, 0x92,56, 
0x93,61, 0,156, 0x81, 0x82, 0x83, 0,176, 0x91,53, 0x92,56, 0x93,61, 0,156, 0x81, 0x82, 0x83, 0,100, 
0x80, 0,76, 0x90,53, 0x91,56, 0x92,61, 0,156, 0x80, 0x81, 0x82, 0,176, 0x90,53, 0x91,56, 0x92,61, 
0,156, 0x80, 0x81, 0x82, 0,176, 0x90,53, 0x91,56, 0x92,61, 0,156, 0x80, 0x81, 0x82, 0,176, 0x90,53, 
0x91,56, 0x92,61, 0,156, 0x80, 0x81, 0x82, 0,176, 0x90,66, 0x91,54, 0x92,58, 0x93,63, 0,156, 
0x80, 0x81, 0x82, 0x83, 0,9, 0x90,66, 0,166, 0x91,54, 0x92,58, 0x93,63, 0,148, 0x80, 0,8, 
0x81, 0x82, 0x83, 0,9, 0x90,68, 0,156, 0x80, 0,9, 0x90,54, 0x91,66, 0x92,58, 0x93,63, 0,156, 
0x80, 0x82, 0x83, 0,158, 0x81, 0,18, 0x90,54, 0x91,66, 0x92,58, 0x93,63, 0,156, 0x81, 0x80, 0x82, 
0x83, 0,9, 0x90,73, 0,166, 0x91,54, 0x92,58, 0x93,63, 0,156, 0x81, 0x82, 0x83, 0,150, 0x80, 
0,26, 0x90,54, 0x91,66, 0x92,58, 0x93,63, 0,156, 0x81, 0x80, 0x82, 0x83, 0,9, 0x90,68, 0,156, 
0x80, 0,9, 0x90,54, 0x91,66, 0x92,58, 0x93,63, 0,209, 0x80, 0x82, 0x83, 0,12, 0x90,54, 0x92,58, 
0x93,63, 0,93, 0x81, 0,11, 0x80, 0x82, 0x83, 0,6, 0x90,66, 0x91,54, 0x92,58, 0x93,63, 0,209, 
0x81, 0x82, 0x83, 0,12, 0x91,54, 0x92,58, 0x93,63, 0,93, 0x80, 0,11, 0x81, 0x82, 0x83, 0,6, 
0x90,66, 0x91,54, 0x92,59, 0x93,63, 0,156, 0x80, 0x81, 0x82, 0x83, 0,9, 0x90,66, 0,166, 0x91,54, 
0x92,59, 0x93,63, 0,148, 0x80, 0,8, 0x81, 0x82, 0x83, 0,9, 0x90,68, 0,156, 0x80, 0,9, 
0x90,54, 0x91,66, 0x92,59, 0x93,63, 0,156, 0x80, 0x82, 0x83, 0,158, 0x81, 0,18, 0x90,54, 0x91,66, 
0x92,59, 0x93,63, 0,156, 0x81, 0x80, 0x82, 0x83, 0,9, 0x90,73, 0,166, 0x91,54, 0x92,59, 0x93,63, 
0,156, 0x81, 0x82, 0x83, 0,150, 0x80, 0,26, 0x90,54, 0x91,66, 0x92,59, 0x93,63, 0,156, 0x81, 
0x80, 0x82, 0x83, 0,9, 0x90,68, 0,156, 0x80, 0,9, 0x90,54, 0x91,66, 0x92,59, 0x93,63, 0,156, 
0x80, 0x82, 0x83, 0,158, 0x81, 0,18, 0x90,54, 0x91,66, 0x92,59, 0x93,63, 0,156, 0x80, 0x82, 0x83, 
0,158, 0x81, 0,18, 0x90,54, 0x91,66, 0x92,58, 0x93,61, 0,156, 0x81, 0x80, 0x82, 0x83, 0,9, 
0x90,66, 0,166, 0x91,54, 0x92,58, 0x93,61, 0,148, 0x80, 0,8, 0x81, 0x82, 0x83, 0,9, 0x90,68, 
0,156, 0x80, 0,9, 0x90,54, 0x91,66, 0x92,58, 0x93,61, 0,156, 0x80, 0x82, 0x83, 0,158, 0x81, 
0,18, 0x90,54, 0x91,66, 0x92,58, 0x93,61, 0,156, 0x81, 0x80, 0x82, 0x83, 0,9, 0x90,73, 0,166, 
0x91,54, 0x92,58, 0x93,61, 0,156, 0x81, 0x82, 0x83, 0,150, 0x80, 0,26, 0x90,54, 0x91,66, 0x92,58, 
0x93,61, 0,156, 0x81, 0x80, 0x82, 0x83, 0,9, 0x90,68, 0,156, 0x80, 0,9, 0x90,54, 0x91,66, 
0x92,58, 0x93,61, 0,209, 0x80, 0x82, 0x83, 0,12, 0x90,54, 0x92,58, 0x93,61, 0,93, 0x81, 0,11, 
0x80, 0x82, 0x83, 0,6, 0x90,66, 0x91,54, 0x92,58, 0x93,61, 0,209, 0x81, 0x82, 0x83, 0,12, 0x91,54, 
0x92,58, 0x93,61, 0,93, 0x80, 0,11, 0x81, 0x82, 0x83, 0,6, 0x90,66, 0x91,53, 0x92,56, 0x93,61, 
0,156, 0x80, 0x81, 0x82, 0x83, 0,9, 0x90,66, 0,166, 0x91,53, 0x92,56, 0x93,61, 0,148, 0x80, 
0,8, 0x81, 0x82, 0x83, 0,9, 0x90,68, 0,156, 0x80, 0,9, 0x90,53, 0x91,66, 0x92,56, 0x93,61, 
0,156, 0x80, 0x82, 0x83, 0,158, 0x81, 0,18, 0x90,53, 0x91,66, 0x92,56, 0x93,61, 0,156, 0x81, 
0x80, 0x82, 0x83, 0,9, 0x90,73, 0,166, 0x91,53, 0x92,56, 0x93,61, 0,156, 0x81, 0x82, 0x83, 0,150, 
0x80, 0,26, 0x90,53, 0x91,66, 0x92,56, 0x93,61, 0,156, 0x81, 0x80, 0x82, 0x83, 0,9, 0x90,68, 
0,156, 0x80, 0,9, 0x90,53, 0x91,66, 0x92,56, 0x93,61, 0,156, 0x80, 0x82, 0x83, 0,158, 0x81, 
0,18, 0x90,53, 0x91,66, 0x92,56, 0x93,61, 0,156, 0x80, 0x82, 0x83, 0,158, 0x81, 1,95, 0x90,70, 
0x91,82, 1,59, 0x80, 0x81, 0,18, 0x90,70, 0x91,82, 1,59, 0x80, 0x81, 0,18, 0x90,70, 0x91,82, 
1,59, 0x80, 0x81, 0,18, 0x90,39, 0x91,70, 0x92,51, 0x93,75, 0x94,78, 0x95,82, 2,119, 0x80, 
0x82, 0,34, 0x90,54, 0x92,58, 2,119, 0x80, 0x82, 0,34, 0x90,54, 0x92,58, 2,119, 0x80, 0x82, 
0,34, 0x90,54, 0x92,58, 0,215, 0x81, 0x83, 0x84, 0x85, 0,118, 0x91,66, 1,42, 0x80, 0x82, 0,16, 
0x81, 0,18, 0x90,35, 0x91,63, 0x92,47, 1,59, 0x81, 0,18, 0x91,61, 1,42, 0x80, 0x82, 0,34, 
0x90,51, 0x92,54, 0x93,59, 2,119, 0x80, 0x82, 0x83, 0,34, 0x90,51, 0x92,54, 0x93,59, 1,9, 
0x81, 0,68, 0x91,66, 1,42, 0x80, 0x82, 0x83, 0,16, 0x81, 0,18, 0x90,51, 0x91,73, 0x92,54, 
0x93,59, 1,59, 0x81, 0,18, 0x91,73, 0,156, 0x81, 0,9, 0x91,66, 0x94,70, 0,131, 0x80, 
0x82, 0x83, 0,34, 0x90,42, 0x92,54, 2,119, 0x80, 0x82, 0,34, 0x90,54, 0x92,58, 0x93,61, 2,78, 
0x81, 0x84, 0,41, 0x80, 0x82, 0x83, 0,34, 0x90,54, 0x91,58, 0x92,61, 1,77, 0x93,66, 1,42, 
0x80, 0x81, 0x82, 0,16, 0x83, 0,18, 0x90,54, 0x91,73, 0x92,58, 0x93,61, 1,59, 0x81, 0,18, 
0x91,73, 0,156, 0x81, 0,9, 0x91,65, 0x94,70, 0,131, 0x80, 0x82, 0x83, 0,34, 0x90,37, 0x92,49, 
2,119, 0x80, 0x82, 0,34, 0x90,53, 0x92,56, 0x93,61, 1,17, 0x81, 0x84, 0,59, 0x91,68, 1,42, 
0x80, 0x82, 0x83, 0,34, 0x90,53, 0x92,56, 0x93,61, 1,42, 0x81, 0,34, 0x91,70, 0x94,82, 1,42, 
0x80, 0x82, 0x83, 0,16, 0x81, 0x84, 0,18, 0x90,53, 0x91,70, 0x92,56, 0x93,82, 0x94,61, 1,59, 
0x81, 0x83, 0,18, 0x91,70, 0x93,82, 1,42, 0x80, 0x82, 0x84, 0,16, 0x81, 0x83, 0,18, 0x90,39, 
0x91,70, 0x92,51, 0x93,75, 0x94,78, 0x95,82, 2,119, 0x80, 0x82, 0,34, 0x90,54, 0x92,58, 2,86, 
0x81, 0x83, 0x84, 0x85, 0,33, 0x80, 0x82, 0,34, 0x90,54, 0x91,58, 0x92,63, 1,77, 0x93,66, 1,42, 
0x80, 0x81, 0x82, 0,16, 0x83, 0,18, 0x90,54, 0x91,66, 0x92,58, 1,59, 0x81, 0,18, 0x91,63, 
0,156, 0x81, 0,9, 0x91,71, 0,131, 0x80, 0x82, 0,34, 0x90,35, 0x92,47, 2,119, 0x80, 0x82, 
0,34, 0x90,51, 0x92,54, 0x93,59, 2,119, 0x80, 0x82, 0x83, 0,34, 0x90,51, 0x92,54, 0x93,59, 
2,119, 0x80, 0x82, 0x83, 0,34, 0x90,51, 0x92,54, 0x93,59, 0,206, 0x81, 0,126, 0x91,73, 1,42, 
0x80, 0x82, 0x83, 0,16, 0x81, 0,18, 0x90,42, 0x91,70, 0x92,54, 1,59, 0x81, 0,18, 0x91,73, 
1,42, 0x80, 0x82, 0,16, 0x81, 0,18, 0x90,54, 0x91,70, 0x92,58, 0x93,61, 1,59, 0x81, 0,18, 
0x91,73, 1,42, 0x80, 0x82, 0x83, 0,16, 0x81, 0,18, 0x90,54, 0x91,70, 0x92,58, 0x93,61, 1,59, 
0x81, 0,18, 0x91,73, 1,42, 0x80, 0x82, 0x83, 0,16, 0x81, 0,18, 0x90,54, 0x91,70, 0x92,58, 
0x93,61, 1,59, 0x81, 0,18, 0x91,68, 0,156, 0x81, 0,9, 0x91,71, 0,131, 0x80, 0x82, 0x83, 
0,34, 0x90,37, 0x92,49, 2,119, 0x80, 0x82, 0,34, 0x90,53, 0x92,56, 0x93,61, 1,17, 0x81, 
0,59, 0x91,63, 1,42, 0x80, 0x82, 0x83, 0,16, 0x81, 0,18, 0x90,53, 0x91,71, 0x92,56, 0x93,61, 
2,119, 0x81, 0x80, 0x82, 0x83, 0,34, 0x90,70, 0x91,53, 0x92,56, 0x93,61, 2,119, 0x80, 0x81, 0x82, 
0x83, 0,34, 0x90,66, 0x91,39, 0x92,51, 0,209, 0x80, 0,12, 0x90,66, 0,104, 0x80, 0,6, 
0x90,66, 1,42, 0x81, 0x82, 0,16, 0x80, 0,18, 0x90,54, 0x91,66, 0x92,58, 0x93,63, 0,209, 
0x81, 0,12, 0x91,66, 0,104, 0x81, 0,6, 0x91,66, 1,42, 0x80, 0x82, 0x83, 0,16, 0x81, 0,18, 
0x90,54, 0x91,70, 0x92,58, 0x93,63, 1,59, 0x81, 0,18, 0x91,70, 0,209, 0x81, 0,12, 0x91,78, 
0,76, 0x80, 0x82, 0x83, 0,27, 0x81, 0,6, 0x90,54, 0x91,78, 0x92,58, 0x93,63, 0,209, 0x81, 
0,12, 0x91,78, 0,104, 0x81, 0,6, 0x91,77, 0,209, 0x81, 0,12, 0x91,77, 0,76, 0x80, 
0x82, 0x83, 0,27, 0x81, 0,6, 0x90,35, 0x91,75, 0x92,47, 1,59, 0x81, 0,18, 0x91,75, 1,42, 
0x80, 0x82, 0,16, 0x81, 0,18, 0x90,51, 0x91,75, 0x92,54, 0x93,59, 0,209, 0x81, 0,12, 0x91,75, 
0,104, 0x81, 0,6, 0x91,75, 1,42, 0x80, 0x82, 0x83, 0,16, 0x81, 0,18, 0x90,51, 0x91,71, 
0x92,54, 0x93,83, 0x94,59, 2,119, 0x81, 0x83, 0x80, 0x82, 0x84, 0,34, 0x90,70, 0x91,51, 0x92,82, 
0x93,54, 0x94,59, 2,119, 0x80, 0x82, 0x81, 0x83, 0x84, 0,34, 0x90,70, 0x91,42, 0x92,54, 1,59, 
0x80, 0,18, 0x90,70, 1,42, 0x81, 0x82, 0,16, 0x80, 0,18, 0x90,54, 0x91,70, 0x92,58, 0x93,61, 
1,59, 0x81, 0,18, 0x91,70, 1,42, 0x80, 0x82, 0x83, 0,16, 0x81, 0,18, 0x90,54, 0x91,73, 
0x92,58, 0x93,61, 1,59, 0x81, 0,18, 0x91,71, 1,42, 0x80, 0x82, 0x83, 0,16, 0x81, 0,18, 
0x90,54, 0x91,70, 0x92,58, 0x93,61, 0,209, 0x81, 0,12, 0x91,68, 0,104, 0x81, 0,6, 0x91,66, 
1,42, 0x80, 0x82, 0x83, 0,16, 0x81, 0,18, 0x90,37, 0x91,65, 0x92,49, 1,59, 0x81, 0,18, 
0x91,65, 1,42, 0x80, 0x82, 0,16, 0x81, 0,18, 0x90,53, 0x91,65, 0x92,56, 0x93,61, 0,209, 
0x81, 0,12, 0x91,65, 0,104, 0x81, 0,6, 0x91,63, 0x94,75, 1,42, 0x80, 0x82, 0x83, 0,16, 
0x81, 0x84, 0,18, 0x90,53, 0x91,71, 0x92,56, 0x93,83, 0x94,61, 2,119, 0x81, 0x83, 0x80, 0x82, 0x84, 
0,34, 0x90,70, 0x91,53, 0x92,82, 0x93,56, 0x94,61, 2,119, 0x80, 0x82, 0x81, 0x83, 0x84, 0,34, 
0x90,66, 0x91,39, 0x92,51, 0,209, 0x80, 0,12, 0x90,66, 0,104, 0x80, 0,6, 0x90,66, 1,42, 
0x81, 0x82, 0,16, 0x80, 0,18, 0x90,54, 0x91,66, 0x92,58, 0x93,63, 0,209, 0x81, 0,12, 0x91,66, 
0,104, 0x81, 0,6, 0x91,66, 1,42, 0x80, 0x82, 0x83, 0,16, 0x81, 0,18, 0x90,54, 0x91,70, 
0x92,58, 0x93,63, 1,59, 0x81, 0,18, 0x91,70, 0,209, 0x81, 0,12, 0x91,78, 0,76, 0x80, 
0x82, 0x83, 0,27, 0x81, 0,6, 0x90,54, 0x91,78, 0x92,58, 0x93,63, 0,209, 0x81, 0,12, 0x91,78, 
0,104, 0x81, 0,6, 0x91,77, 0,209, 0x81, 0,12, 0x91,77, 0,76, 0x80, 0x82, 0x83, 0,27, 
0x81, 0,6, 0x90,35, 0x91,75, 0x92,47, 1,59, 0x81, 0,18, 0x91,75, 1,42, 0x80, 0x82, 0,16, 
0x81, 0,18, 0x90,51, 0x91,75, 0x92,54, 0x93,59, 0,209, 0x81, 0,12, 0x91,75, 0,104, 0x81, 
0,6, 0x91,75, 1,42, 0x80, 0x82, 0x83, 0,16, 0x81, 0,18, 0x90,51, 0x91,71, 0x92,54, 0x93,83, 
0x94,59, 2,119, 0x81, 0x83, 0x80, 0x82, 0x84, 0,34, 0x90,73, 0x91,51, 0x92,85, 0x93,54, 0x94,59, 
2,119, 0x80, 0x82, 0x81, 0x83, 0x84, 0,34, 0x90,70, 0x91,42, 0x92,54, 1,59, 0x80, 0,18, 0x90,70, 
1,42, 0x81, 0x82, 0,16, 0x80, 0,18, 0x90,54, 0x91,70, 0x92,58, 0x93,61, 1,59, 0x81, 0,18, 
0x91,70, 1,42, 0x80, 0x82, 0x83, 0,16, 0x81, 0,18, 0x90,54, 0x91,73, 0x92,58, 0x93,61, 1,59, 
0x81, 0,18, 0x91,71, 1,42, 0x80, 0x82, 0x83, 0,16, 0x81, 0,18, 0x90,54, 0x91,70, 0x92,58, 
0x93,61, 0,209, 0x81, 0,12, 0x91,68, 0,104, 0x81, 0,6, 0x91,66, 1,42, 0x80, 0x82, 0x83, 
0,16, 0x81, 0,18, 0x90,37, 0x91,65, 0x92,49, 1,59, 0x81, 0,18, 0x91,65, 1,42, 0x80, 
0x82, 0,16, 0x81, 0,18, 0x90,53, 0x91,65, 0x92,56, 0x93,61, 0,209, 0x81, 0,12, 0x91,65, 
0,104, 0x81, 0,6, 0x91,63, 0x94,75, 1,42, 0x80, 0x82, 0x83, 0,16, 0x81, 0x84, 0,18, 0x90,53, 
0x91,71, 0x92,56, 0x93,83, 0x94,61, 2,119, 0x81, 0x83, 0x80, 0x82, 0x84, 0,34, 0x90,70, 0x91,53, 
0x92,82, 0x93,56, 0x94,61, 2,119, 0x80, 0x82, 0x81, 0x83, 0x84, 0,34, 0x90,66, 0x91,51, 1,59, 
0x81, 0,18, 0x91,58, 1,42, 0x80, 0,34, 0x90,66, 1,42, 0x81, 0,34, 0x91,58, 1,42, 
0x80, 0,34, 0x90,66, 1,42, 0x81, 0,34, 0x91,58, 1,42, 0x80, 0,34, 0x90,70, 1,42, 
0x81, 0,34, 0x91,58, 1,42, 0x80, 0,16, 0x81, 0,18, 0x90,75, 0x91,59, 1,59, 0x81, 0,18, 
0x91,66, 1,42, 0x80, 0,34, 0x90,75, 1,42, 0x81, 0,34, 0x91,66, 1,42, 0x80, 0,34, 
0x90,75, 1,42, 0x81, 0,34, 0x91,66, 1,42, 0x80, 0,34, 0x90,73, 1,42, 0x81, 0,34, 
0x91,66, 1,42, 0x80, 0,16, 0x81, 0,18, 0x90,70, 0x91,54, 1,59, 0x81, 0,18, 0x91,61, 
1,42, 0x80, 0,34, 0x90,70, 1,42, 0x81, 0,34, 0x91,61, 1,42, 0x80, 0,34, 0x90,70, 
1,42, 0x81, 0,34, 0x91,61, 1,42, 0x80, 0,34, 0x90,70, 1,42, 0x81, 0,34, 0x91,61, 
1,42, 0x80, 0,16, 0x81, 0,18, 0x90,65, 0x91,49, 0x92,56, 9,227, 0x80, 0x81, 0x82, 0xf0};

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
  pt.tune_initchan (16);

 
  
  pt.tune_playscore (score); //Start
}

void loop () {
}