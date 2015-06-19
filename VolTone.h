#ifndef VolTone_h
#define VolTone_h

#include "Arduino.h"

void volTone(uint8_t _pin, uint8_t _pin2, boolean vol, unsigned int frequency, unsigned long duration = 0);
void noVolTone(uint8_t _pin, uint8_t _pin2);

#endif
