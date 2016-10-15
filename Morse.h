/*
Morse.h - Library for flashing Morse code.
Created by David A. Mellis, November 2, 2007. Released into the public domain.
*/
#ifndef Morse_h
#define Morse_h
#include "Arduino.h"

#define dotPeriod 80
#define dashPeriod (dotPeriod*3)
#define relaxTime (dotPeriod/3)
#define letterSpace (dotPeriod*3)
#define wordSpace (dotPeriod*5)
#define buzz 2000

class Morse
{
   public:
   	Morse(int pin);
   	void play(String str);
   private:
   	void dit();
   	void dah();
   	void playLetter(char x);
   	int _tonepin;
};

#endif
