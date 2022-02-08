//load libs and headers ----------------------------------------------------------------------------------//
#include <IBusBM.h> // these are libs
//#include <ESP32Servo.h> 
#include "settings.h" // these are headers
#include "ibus_function.h"
#include "motor_functions.h"


// SETUP Controller -------------------------------------------------------------------------------------//
void setup() {
  // put your setup code here, to run once:
  // Start serial monitor for debug
  Serial.begin(115200);
  // Attach iBus object to serial port
  // Scott uses Serial1 for Mega, Jonathon uses Serial2 for ESP32, change as needed
  ibus.begin(Serial1);
  Setup_MPins();
}

void loop() {
  
Ibus_Read(); //read Ibus 
Debug_plot_raw(0);// turn on ibus debug on Serial0 

// do motor control here 
// change these number in [] to desired channel number.
// For scott [1], [0] puts control on right stick.
Tank_Drive(CC[1],CC[0]);

}
