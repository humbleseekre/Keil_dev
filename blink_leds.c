#include "blink_leds.h"

/*
* The API introduces a delay
*/
void delay(void)
{
    uint32_t count = 500000;
    while(count--);
}

// The API blinks all the LEDs on STM32F4 board
// The let LEDs only blink when the user button is pressed
void blinkLeds(void)
{
    Buttons_Initialize();
    LED_Initialize();
    //ledCount = LED_GetCount();
    while(1)
    {
        if(Buttons_GetState() == 1)
        {
            LED_On(0);
            LED_On(1);
            LED_On(2);
            LED_On(3);
            delay();
            LED_Off(0); 
            LED_Off(1);
            LED_Off(2);
            LED_Off(3);   
            delay();
        }
    }
}
