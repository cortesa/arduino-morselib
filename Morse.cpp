/*
Morse.cpp - Library for flashing Morse code. Created by David A. Mellis, November 2, 2007. Released into the public domain.
*/
#include "Morse.h"

Morse::Morse(int pin){
	pinMode(pin, OUTPUT);
  _tonepin = pin;

}

void Morse::play(String str){
  int endofstring = str.length();
    for(int Index=0; Index<=endofstring; Index++) {
    playLetter(str.charAt(Index)); //Executes the playLetter function defined earlier
    delay(letterSpace); //Waits for 3 times unit duration between letters in words
  }
}

void Morse::dit(){
  tone(_tonepin, buzz);
  delay(dotPeriod);
  noTone(_tonepin);
  delay(relaxTime);
}

void Morse::dah(){
  tone(_tonepin, buzz);
  delay(dashPeriod);
  noTone(_tonepin);
  delay(relaxTime);
}

void Morse::playLetter(char letter){
  String dotdashcode = "";
  switch (letter) {
   case 'A': dotdashcode = ".-"; break;
   case 'B': dotdashcode = "-..."; break;
   case 'C': dotdashcode = "-.-."; break;
   case 'D': dotdashcode = "-.."; break;
   case 'E': dotdashcode = "."; break;
   case 'F': dotdashcode = "..-."; break;
   case 'G': dotdashcode = "--."; break;
   case 'H': dotdashcode = "...."; break;
   case 'I': dotdashcode = ".."; break;
   case 'J': dotdashcode = ".---"; break;
   case 'K': dotdashcode = "-.-"; break;
   case 'L': dotdashcode = ".-.."; break;
   case 'M': dotdashcode = "--"; break;
   case 'N': dotdashcode = "-."; break;
   case 'O': dotdashcode = "---"; break;
   case 'P': dotdashcode = ".--."; break;
   case 'Q': dotdashcode = "--.-"; break;
   case 'R': dotdashcode = ".-."; break;
   case 'S': dotdashcode = "..."; break;
   case 'T': dotdashcode = "-"; break;
   case 'U': dotdashcode = "..-"; break;
   case 'V': dotdashcode = "...-"; break;
   case 'W': dotdashcode = ".--"; break;
   case 'X': dotdashcode = "-..-"; break;
   case 'Y': dotdashcode = "-.--"; break;
   case 'Z': dotdashcode = "--.."; break;
   case '1': dotdashcode = ".----"; break;
   case '2': dotdashcode = "..---"; break;
   case '3': dotdashcode = "...--"; break;
   case '4': dotdashcode = "....-"; break;
   case '5': dotdashcode = "....."; break;
   case '6': dotdashcode = "-...."; break;
   case '7': dotdashcode = "--..."; break;
   case '8': dotdashcode = "---.."; break;
   case '9': dotdashcode = "----."; break;
   case '0': dotdashcode = "-----"; break;
   case ' ': dotdashcode = " "; break; /* We've inserted the wordSpace delay to make sure it relaxes when the letter is a space */ 
  }
  int endofstring = dotdashcode.length();
  for(int Index=0; Index<=endofstring; Index++) {
    switch(dotdashcode.charAt(Index)){
      case '.': dit(); break;
      case '-': dah(); break;
      case ' ': delay(wordSpace);
    }
  }
  delay(letterSpace); //Waits for 3 times unit duration between letters in words
}