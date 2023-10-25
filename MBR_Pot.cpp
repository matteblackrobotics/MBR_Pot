#include "MBR_Pot.h"
// Left: +5
// Middle: signal
// Right: GND

// Constructor
// Analog pin and voltageMax in volts
MBR_Pot::MBR_Pot(uint8_t potPin, float Vin){
    _pin = potPin;
    _Vin = Vin;
    pinMode(_pin, INPUT);
}

// Ouput [0:1023]
int MBR_Pot::readPotRaw(){
  potRaw = analogRead(_pin);
  return potRaw;
}

float MBR_Pot::readPotVolt(){
    potVolt = analogRead(_pin) * (_Vin/1023.0);
    return potVolt;
}

float MBR_Pot::readPotNorm(){
    potNorm = analogRead(_pin) * (100.0/1023.0);
    return potNorm;
}