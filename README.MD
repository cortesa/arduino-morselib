# arduino-morselib

## Installation.

```bash
cd ~/Arduino/libraries
git clone https://github.com/cortesa/arduino-morselib.git
```

## Use

### Configuration
    Morse Morse(outputPin);

### Play morse

    Morse.play("string to convert"); 
    **Note:** string to convert have to be in capitals, only letters and numbers.

## Example

```c++
#include <Morse.h>

Morse Morse(2);

void setup()
{
  // This command sets the pin to act as output
}

void loop()
{ 
  Morse.play("SOS ");
  delay(1000);
}
```


