#ifndef MBR_Pot_h
#define MBR_Pot_h

#include <Arduino.h>

class MBR_Pot{
  public:
    MBR_Pot(uint8_t potPin, float Vin); // pin and Vin
    int readRaw(); // [0:1023] 10-bit
    int raw;

    float readVolt();  // voltage reading [0.0:Vin]
    float volt;

    float readNorm();  // normalized raading [0.0:100.0]
    float norm;

    float minLimit = 0.0; // minimum limit value
    float maxLimit = 100.0; // maximum limit value

  private:
    uint8_t _pin;
    float _Vin;
};


#endif