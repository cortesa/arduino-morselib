# arduino-morselib
    This library can transform a String to a Morse tones using a buzzer connected to an arduino board.

## Installation.

```bash
cd ~/Arduino/libraries
git clone https://github.com/cortesa/arduino-morselib.git
```

## Use

### Configuration
    Morse Morse(outputPin, dotPeriod, tone)

    - outputPin: Pin where tone go out.
    - dotPeriod: this define the length of a dot, a dash and silent time are function of this in ms:
    		- dash length: dotPeriod * 3.
    		- Silent length between dots or dashes: dotPeriod / 3.
    		- Silent length between letters: dotPeriod * 3.
    		- Silent length between words: dotPeriod * 5.
    - tone: Frecuency of the tone in Hz.

### Play morse

    Morse.play("string to convert"); 
    **Note:** string to convert have to be in capitals, only letters and numbers.

## Example

```c++
#include <Morse.h>

Morse Morse(2, 80, 1000);

void setup()
{
  // This command sets the pin to act as output
}

void loop()
{ 
  Morse.play("SOS");
  delay(4000);
}
```


