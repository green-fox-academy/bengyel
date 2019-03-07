/**
  ******************************************************************************
  * @file    main.c
  * @author  Ac6
  * @version V1.0
  * @date    01-December-2013
  * @brief   Default main function.
  ******************************************************************************
*/


#include "stm32f7xx.h"
#include "stm32746g_discovery.h"
			


int main(void)
{
    HAL_Init();

    BSP_PB_Init(BUTTON_KEY, BUTTON_MODE_GPIO);

    BSP_LED_Init(LED1);
    int delayer = 2000;
    int incrementdelay = 500;
    int count = 0;

    while (1) {
		if (BSP_PB_GetState(BUTTON_KEY)) {
			while (1) {
				for (int i = 0; i < 3; i++) {
					BSP_LED_On(LED1);
					HAL_Delay(delayer);
					BSP_LED_Off(LED1);
					HAL_Delay(delayer);
					count++;

				}
				if(delayer > 250) {
					delayer /= 2;
				}
				if (count > 20) {
					for (int j = 0; j < 3; j++) {
						BSP_LED_On(LED1);
						HAL_Delay(incrementdelay);
						BSP_LED_Off(LED1);
						HAL_Delay(incrementdelay);
					}
					if(incrementdelay < 2000) {
						incrementdelay *= 2;
					}
				}
			}
    	}
	}
}
