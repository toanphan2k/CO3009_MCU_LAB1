/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LED1_Green_Pin GPIO_PIN_1
#define LED1_Green_GPIO_Port GPIOA
#define LED1_Red_Pin GPIO_PIN_2
#define LED1_Red_GPIO_Port GPIOA
#define LED1_Yellow_Pin GPIO_PIN_3
#define LED1_Yellow_GPIO_Port GPIOA
#define LED2_Red_Pin GPIO_PIN_4
#define LED2_Red_GPIO_Port GPIOA
#define LED2_Green_Pin GPIO_PIN_5
#define LED2_Green_GPIO_Port GPIOA
#define LED2_Yellow_Pin GPIO_PIN_6
#define LED2_Yellow_GPIO_Port GPIOA
#define SEG_A_1_Pin GPIO_PIN_7
#define SEG_A_1_GPIO_Port GPIOA
#define SEG_A_2_Pin GPIO_PIN_1
#define SEG_A_2_GPIO_Port GPIOB
#define SEG_B_2_Pin GPIO_PIN_2
#define SEG_B_2_GPIO_Port GPIOB
#define SEG_B_1_Pin GPIO_PIN_8
#define SEG_B_1_GPIO_Port GPIOA
#define SEG_C_1_Pin GPIO_PIN_9
#define SEG_C_1_GPIO_Port GPIOA
#define SEG_D_1_Pin GPIO_PIN_10
#define SEG_D_1_GPIO_Port GPIOA
#define SEG_E_1_Pin GPIO_PIN_11
#define SEG_E_1_GPIO_Port GPIOA
#define SEG_F_1_Pin GPIO_PIN_12
#define SEG_F_1_GPIO_Port GPIOA
#define SEG_G_1_Pin GPIO_PIN_13
#define SEG_G_1_GPIO_Port GPIOA
#define SEG_G_2_Pin GPIO_PIN_3
#define SEG_G_2_GPIO_Port GPIOB
#define SEG_F_2_Pin GPIO_PIN_4
#define SEG_F_2_GPIO_Port GPIOB
#define SEG_E_2_Pin GPIO_PIN_5
#define SEG_E_2_GPIO_Port GPIOB
#define SEG_D_2_Pin GPIO_PIN_6
#define SEG_D_2_GPIO_Port GPIOB
#define SEG_C_2_Pin GPIO_PIN_7
#define SEG_C_2_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
