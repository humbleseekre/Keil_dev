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
            LED_On(LED_GREEN);
            LED_On(LED_RED_1);
            LED_On(LED_RED_2);
            LED_On(LED_BLUE);
            delay();
            LED_Off(LED_GREEN); 
            LED_Off(LED_RED_1);
            LED_Off(LED_RED_2);
            LED_Off(LED_BLUE);   
            delay();
        }
    }
}
