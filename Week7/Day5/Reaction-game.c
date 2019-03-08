/**
  ******************************************************************************
 #include "stm32f7xx.h"
#include "stm32746g_discovery.h"

/* necessary include files */
#include <string.h>
#include "stm32f7xx_hal.h"

#include "stm32f7xx_hal_uart.h"
#include "stm32f7xx_hal_sdram.h"
#include "stm32f7xx_hal_ltdc.h"
#include "stm32746g_discovery.h"
#include "stm32746g_discovery_lcd.h"
#include "stm32746g_discovery_ts.h"
#include "stm32746g_discovery_sdram.h"
#include "stm32f7xx_ll_fmc.h"
#include "stdio.h"
#include "stdbool.h"

static void Error_Handler(void);
static void SystemClock_Config(void);

TS_StateTypeDef game;
RNG_HandleTypeDef rng_handler;

int main(void)
{
    HAL_Init();
    SystemClock_Config();
    __HAL_RCC_RNG_CLK_ENABLE();

    rng_handler.Instance = RNG;
    HAL_RNG_Init(&rng_handler);

    /* initializing LCD */
    BSP_LCD_Init();
    BSP_TS_Init(480, 272);
    BSP_LCD_LayerDefaultInit(1, LCD_FB_START_ADDRESS);
    BSP_LCD_SelectLayer(1);
    BSP_LCD_SetFont(&LCD_DEFAULT_FONT);
    BSP_LCD_SetBackColor(LCD_COLOR_GRAY);
    BSP_LCD_Clear(LCD_COLOR_GRAY);

    /* drawing a circle, a play and an exit text,   */
    BSP_LCD_SetTextColor(LCD_COLOR_DARKGRAY);
    BSP_LCD_FillRect(2, 5, 85, 35);
    BSP_LCD_SetTextColor(LCD_COLOR_DARKGRAY);
    BSP_LCD_FillRect(2, 238, 85, 35);
    BSP_LCD_SetTextColor(LCD_COLOR_DARKGREEN);
    BSP_LCD_FillCircle(235, 130, 30);
    BSP_LCD_SetTextColor(LCD_COLOR_RED);
    BSP_LCD_DisplayStringAt(10, 10, (uint8_t *) "Play", LEFT_MODE);
    BSP_LCD_DisplayStringAt(10, 245, (uint8_t *) "Exit", LEFT_MODE);

    uint8_t game_begin[6][30] = {"Let's the game begin!", "5", "4", "3", "2", "1"};
    int timer_start;
    int press;
    int reaction_time;
    int x_position;
    int y_position;
    char buffer[50];

    while (1) {
    	BSP_TS_GetState(&game);
    	uint32_t random_num = HAL_RNG_GetRandomNumber(&rng_handler) %10 + 1;
    	if (game.touchDetected && game.touchX[0] > 2 && game.touchX[0] < 85 && game.touchY[0] > 5 && game.touchY[0] < 35) {
    		HAL_Delay(1000);
    		for (int i = 0; i < 6; i++) {
    			BSP_LCD_Clear(LCD_COLOR_BLACK);
    			BSP_LCD_SetTextColor(LCD_COLOR_RED);
    			BSP_LCD_DisplayStringAt(10, 50, (uint8_t *) game_begin[i], CENTER_MODE);
    			HAL_Delay(500);
    		}
    		BSP_LCD_Clear(LCD_COLOR_BLACK);
    	    BSP_LCD_SetTextColor(LCD_COLOR_DARKGREEN);
    	    x_position = random_num * 40 + 50;
    	    y_position = random_num * 20 + 20;
    	    timer_start = HAL_GetTick();
    	    BSP_LCD_FillCircle(x_position, y_position, 30);

    	} else if (game.touchDetected && game.touchX[0] > 2 && game.touchX[0] < 85 && game.touchY[0] > 238) {
    		HAL_Delay(1000);
    		BSP_LCD_Clear(LCD_COLOR_BLACK);
    		break;
    	} if (game.touchDetected && game.touchX[0] > x_position - 30 && game.touchX[0] < x_position + 30 && game.touchY[0] > y_position - 30 && game.touchY[0] < y_position + 30) {
    		game.touchX[0] = 0;
    		game.touchY[0] = 0;
    		press = HAL_GetTick();
    		reaction_time = press - timer_start;
    		sprintf(buffer, "%d", reaction_time);
    		BSP_LCD_Clear(LCD_COLOR_YELLOW);
    		BSP_LCD_SetTextColor(LCD_COLOR_BLACK);
    		BSP_LCD_DisplayStringAt(0, 100, (uint8_t *) "Your time in milliseconds:", CENTER_MODE);
    		BSP_LCD_DisplayStringAt(0, 130, (uint8_t *) buffer, CENTER_MODE);
    	    BSP_LCD_SetTextColor(LCD_COLOR_RED);
    	    BSP_LCD_DisplayStringAt(10, 10, (uint8_t *) "Retry", LEFT_MODE);

    	}

    }

}

static void Error_Handler(void)
{}

static void SystemClock_Config(void)
{
    RCC_OscInitTypeDef RCC_OscInitStruct = {0};
    RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

    /**Configure the main internal regulator output voltage */
    __HAL_RCC_PWR_CLK_ENABLE();
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
    RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK | RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
    RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
    RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
    RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV4;
    RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV2;

    if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_7) != HAL_OK) {
        Error_Handler();
    }
}

#ifdef  USE_FULL_ASSERT
void assert_failed(uint8_t *file, uint32_t line){}
#endif
