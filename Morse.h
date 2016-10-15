/*
Morse.h - Library for flashing Morse code.
Created by David A. Mellis, November 2, 2007. Released into the public domain.
*/
#ifndef Morse_h
#define Morse_h
#include "Arduino.h"

class Morse
{
   public:
   	Morse::Morse(int tonePin, int dotPeriod, int tone);
   	void play(String str);
   private:
   	void dit();
   	void dah();
   	void playLetter(char x);
   	int _tonePin;
   	int _dotPeriod;
   	int _tone;
   	int _dashPeriod; 
   	int _relaxTime;
   	int _letterSpace;
   	int _wordSpace;
};

#endif
