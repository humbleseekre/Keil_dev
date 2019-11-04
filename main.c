#include "stm32f4xx.h"                  // Device header
#include <stdint.h>
#include "blink_leds.h"

int main(void)
{
    // Step 1 test leds and user button
    blinkLeds();
    return 0;
}
