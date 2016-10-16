#include <Morse.h>

Morse Morse(2, 70, 1000);

void setup()
{
  // This command sets the pin to act as output
}

void loop()
{ 
  Morse.play("SOS");
  delay(1000);
}
