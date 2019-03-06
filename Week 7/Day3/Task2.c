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

void d2b(int example_int, int example_array[]);
			
GPIO_InitTypeDef LEDS;

int main(void)
{
    HAL_Init();

    __HAL_RCC_GPIOF_CLK_ENABLE();

    LEDS.Pin = GPIO_PIN_7 | GPIO_PIN_8 | GPIO_PIN_9 | GPIO_PIN_10;
    LEDS.Mode = GPIO_MODE_OUTPUT_PP;
    LEDS.Pull = GPIO_NOPULL;
    LEDS.Speed = GPIO_SPEED_HIGH;

    HAL_GPIO_Init(GPIOF, &LEDS);

    int leds_array[4] = {GPIO_PIN_7, GPIO_PIN_8, GPIO_PIN_9, GPIO_PIN_10};
    int state[4] = {0,0,0,0};

    while (1) {
        for (int i = 0; i < 16; i++) {
        	d2b(i, state);
        	put_state(leds_array, state);
        	HAL_Delay(500);
        }

    }
}

void d2b(int example_int, int example_array[])
{
	for (int j = 0; j < 4; j++) {
		example_array[j] = example_int % 2;
		example_int /= 2;
	}
}
void put_state(int gpio_array[], int state_array[]) {
	for (int i = 0; i < 4; i++) {
		HAL_GPIO_WritePin(GPIOF, gpio_array[i], state_array[i]);
	}
}
