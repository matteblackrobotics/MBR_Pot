#include "MBR_Pot.h"
// Left: +5
// Middle: signal
// Right: GND 

// hello
// Constructor
// Analog pin and voltageMax in volts
MBR_Pot::MBR_Pot(uint8_t potPin, float Vin){
    _pin = potPin;
    _Vin = Vin;
    pinMode(_pin, INPUT);
}


// Ouput [0:1023]
int MBR_Pot::readRaw(){
  raw = analogRead(_pin);
  return raw; // [0:1023]
}

float MBR_Pot::readVolt(){
    volt = analogRead(_pin) * (_Vin/1023.0);
    return volt; // [0:5.0]v
}

float MBR_Pot::readNorm(){
    norm = analogRead(_pin) * (100.0/1023.0);
    return norm; // [0.0:100.0]
}