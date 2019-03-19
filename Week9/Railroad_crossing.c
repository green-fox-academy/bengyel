#include "stm32f7xx.h"
#include "stm32746g_discovery.h"
#include <string.h>

GPIO_InitTypeDef user_button_handle;
TIM_HandleTypeDef timer_handler;
UART_HandleTypeDef uart_handle;

#define UART_PUTCHAR int __io_putchar(int ch)

static void Error_Handler(void);
static void SystemClock_Config(void);

typedef enum {
	OPEN, SECURING, SECURED, OPENING
} states_t;

volatile states_t state = OPEN;
volatile uint8_t counter = 0;

void InitializeTimer() {
	__HAL_RCC_TIM2_CLK_ENABLE()
	;

	__HAL_TIM_SET_COUNTER(&timer_handler, 0);

	timer_handler.Instance = TIM2;
	timer_handler.Init.Prescaler = 54000 - 1; /* 108000000/54000=2000 -> speed of 1 count-up: 1/2000 sec = 0.5 ms */
	timer_handler.Init.CounterMode = TIM_COUNTERMODE_UP;
	timer_handler.Init.Period = 1000 - 1; /* 1000 x 0.5 ms = 0.5 second period */
	timer_handler.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
	HAL_TIM_Base_Init(&timer_handler);
	HAL_NVIC_SetPriority(TIM2_IRQn, 2, 0);
	HAL_NVIC_EnableIRQ(TIM2_IRQn);
}

void user_button_init() {
	__HAL_RCC_GPIOI_CLK_ENABLE();

	user_button_handle.Pin = GPIO_PIN_11;
	user_button_handle.Pull = GPIO_NOPULL;
	user_button_handle.Speed = GPIO_SPEED_FAST;
	user_button_handle.Mode = GPIO_MODE_IT_RISING;

	HAL_GPIO_Init(GPIOI, &user_button_handle);

	HAL_NVIC_SetPriority(EXTI15_10_IRQn, 1, 0);

	HAL_NVIC_EnableIRQ(EXTI15_10_IRQn);
}

void init_uart() {
	__HAL_RCC_USART1_CLK_ENABLE()
	;
	// Enable clock for the USART1
	uart_handle.Instance = USART1;
	// set USART1 register
	uart_handle.Init.BaudRate = 115200;
	uart_handle.Init.WordLength = UART_WORDLENGTH_8B;
	// set 8 bit word length
	uart_handle.Init.StopBits = UART_STOPBITS_1;
	uart_handle.Init.Parity = UART_PARITY_NONE;
	uart_handle.Init.HwFlowCtl = UART_HWCONTROL_NONE;
	uart_handle.Init.Mode = UART_MODE_TX_RX;

	BSP_COM_Init(COM1, &uart_handle);
	// initializing COM1 line for USB UART emulation line (Hercules)
	//HAL_NVIC_SetPriority(USART1_IRQn, 2, 0);
	//uart (recieve) interrupt esetén szükséges										// set priority for USART1, preempt priority 1, sub priority 0
	//HAL_NVIC_EnableIRQ(USART1_IRQn);
}

int main(void) {
	HAL_Init();

	SystemClock_Config();

	BSP_LED_Init(LED1);

	user_button_init();

	init_uart();

	InitializeTimer();

	HAL_TIM_Base_Start_IT(&timer_handler);

	while (1) {

	}

	return 0;
}

void EXTI15_10_IRQHandler(void) {
	HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_11); // (user_button_handle.Pin)
}

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin) {
	if (state == OPEN) {
		state = SECURING;
		printf("Entered in SECURING state.\n");
		counter = 0;
	}
	if (state == SECURED) {
		printf("Entered in OPENING state.\n");
		state = OPENING;
		counter = 0;
	}
//gombnyomásos interruptok
}

void TIM2_IRQHandler(void) {
	HAL_TIM_IRQHandler(&timer_handler);
}

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim) {
	//a kiszámolt periode idõre történõ interruptok
	if (htim->Instance == TIM2) {
		if (state == OPEN) {
			counter++;
			if (counter % 2 == 0) {
				BSP_LED_Toggle(LED1);
			}
		} else if (state == SECURING) {
			counter++;
			BSP_LED_Toggle(LED1);

			if (counter % 10 == 0) {
				state = SECURED;
				printf("Entered in SECURED state.\n");
				BSP_LED_Off(LED1);
			}
		} else if (state == OPENING) {
			BSP_LED_Toggle(LED1);
			counter++;
			if (counter % 12 == 0) {
				state = OPEN;
				counter = 0;
				printf("Entered in OPEN state.\n");
			}
		}
	}
}

UART_PUTCHAR {
	HAL_UART_Transmit(&uart_handle, (uint8_t*) &ch, 1, 0xFFFF);
	return ch;
}

static void Error_Handler(void) {
}

static void SystemClock_Config(void) {
	RCC_OscInitTypeDef RCC_OscInitStruct = { 0 };
	RCC_ClkInitTypeDef RCC_ClkInitStruct = { 0 };

	/**Configure the main internal regulator output voltage */
	__HAL_RCC_PWR_CLK_ENABLE()
	;
	__HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);

	/**Initializes the CPU, AHB and APB busses clocks */
	RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
	RCC_OscInitStruct.HSIState = RCC_HSI_ON;
	RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
	RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
	RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSI;
	RCC_OscInitStruct.PLL.PLLM = 8;
	RCC_OscInitStruct.PLL.PLLN = 216;
	RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
	RCC_OscInitStruct.PLL.PLLQ = 2;

	if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK) {
		Error_Handler();
	}

	/**Activate the Over-Drive mode */
	if (HAL_PWREx_EnableOverDrive() != HAL_OK) {
		Error_Handler();
	}

	/**Initializes the CPU, AHB and APB busses clocks */
	RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK | RCC_CLOCKTYPE_SYSCLK
			| RCC_CLOCKTYPE_PCLK1 | RCC_CLOCKTYPE_PCLK2;
	RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
	RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
	RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV4;
	RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV2;

	if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_7) != HAL_OK) {
		Error_Handler();
	}
}

