#include <wiringPi.h>
#include <stdlib.h>
#include <stdio.h>

#define LED_GPIO 3
#define button_GPIO 0

int main (void)
{
  wiringPiSetup () ;

  pinMode (LED_GPIO, OUTPUT) ;
  pinMode (button_GPIO, INPUT) ;
  int y = 0;
  digitalWrite (LED_GPIO, LOW) ;
  while (y<20)
  {
    if (digitalRead(button_GPIO)==HIGH)
    {
      digitalWrite (LED_GPIO, HIGH) ;
    }
    else
    {
      digitalWrite (LED_GPIO, LOW) ;
    }
    delay (1000) ;
    y = y+1;
  }
  digitalWrite (LED_GPIO, LOW) ;
  return 0 ;
}
