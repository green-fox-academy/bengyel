#include "stm32f7xx.h"
#include "stm32746g_discovery.h"
#include <string.h>

GPIO_InitTypeDef button_handle;
UART_HandleTypeDef uart_handle;
GPIO_InitTypeDef LEDS;

uint32_t last_debounce_time = 0;    // the last time the output pin was toggled
const uint32_t debounce_delay = 150;    // the debounce time in ms (increase if the output flickers)

volatile int counter = 0;

void init_user_button()
{
	__HAL_RCC_GPIOI_CLK_ENABLE();

	__HAL_RCC_GPIOB_CLK_ENABLE();

	button_handle.Pin = GPIO_PIN_4;
	button_handle.Pull = GPIO_NOPULL;
	button_handle.Speed = GPIO_SPEED_FAST;
	button_handle.Mode = GPIO_MODE_IT_RISING;

	HAL_GPIO_Init(GPIOB, &button_handle);

	HAL_NVIC_SetPriority(EXTI4_IRQn, 4, 0);

	HAL_NVIC_EnableIRQ(EXTI4_IRQn);
}

void init_led()
{
	BSP_LED_Init(LED1);

	__HAL_RCC_GPIOF_CLK_ENABLE();

	LEDS.Pin = GPIO_PIN_10;
	LEDS.Mode = GPIO_MODE_OUTPUT_PP;
	LEDS.Pull = GPIO_NOPULL;
	LEDS.Speed = GPIO_SPEED_HIGH;

	HAL_GPIO_Init(GPIOF, &LEDS);
}

int main(void)
{
	HAL_Init();

	init_user_button();
	init_led();

	while (1) {

	}
}

void EXTI4_IRQHandler()
{
	HAL_GPIO_EXTI_IRQHandler(button_handle.Pin);
}

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{

	uint32_t current_time = HAL_GetTick();
	   if (current_time < last_debounce_time + debounce_delay) {
	       // Do nothing (this is not a real button press)
	       return;
	   }

	   last_debounce_time = current_time;

	counter++;

	if (GPIO_Pin == button_handle.Pin && counter == 5) {


		HAL_GPIO_WritePin(GPIOF, GPIO_PIN_10, GPIO_PIN_SET);
	} else if (GPIO_Pin == button_handle.Pin && counter == 10) {
		HAL_GPIO_WritePin(GPIOF, GPIO_PIN_10, GPIO_PIN_RESET);
	}
}










