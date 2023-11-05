#ifndef MBR_Pot_h
#define MBR_Pot_h

#include <Arduino.h>

class MBR_Pot{
  public:
    MBR_Pot(uint8_t potPin, float Vin); // pin and Vin
    int readPotRaw();
    int potRaw;

    float readPotVolt();
    float potVolt;

    int readPotNorm();
    int potNorm;

  private:
    uint8_t _pin;
    float _Vin;
};


#endif