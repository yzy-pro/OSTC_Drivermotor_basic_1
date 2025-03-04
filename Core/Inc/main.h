/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
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
#define RF_IN1_Pin GPIO_PIN_1//A1
#define RF_IN1_GPIO_Port GPIOA
#define RF_IN2_Pin GPIO_PIN_2//A2
#define RF_IN2_GPIO_Port GPIOA
#define RB_IN1_Pin GPIO_PIN_3//A3
#define RB_IN1_GPIO_Port GPIOA
#define RB_IN2_Pin GPIO_PIN_4//A4
#define RB_IN2_GPIO_Port GPIOA
#define LB_IN1_Pin GPIO_PIN_5//A5
#define LB_IN1_GPIO_Port GPIOA
#define LB_IN2_Pin GPIO_PIN_6//A6
#define LB_IN2_GPIO_Port GPIOA
#define LF_IN1_Pin GPIO_PIN_7//A7
#define LF_IN1_GPIO_Port GPIOA
#define LF_IN2_Pin GPIO_PIN_0//B0
#define LF_IN2_GPIO_Port GPIOB
#define RF_EN_Pin GPIO_PIN_8//
#define RF_EN_GPIO_Port GPIOA
#define RB_EN_Pin GPIO_PIN_9
#define RB_EN_GPIO_Port GPIOA
#define LB_EN_Pin GPIO_PIN_10
#define LB_EN_GPIO_Port GPIOA
#define LF_EN_Pin GPIO_PIN_11
#define LF_EN_GPIO_Port GPIOA

#define RF_EN_CHANNEL TIM_CHANNEL_1
#define RB_EN_CHANNEL TIM_CHANNEL_2
#define LB_EN_CHANNEL TIM_CHANNEL_3
#define LF_EN_CHANNEL TIM_CHANNEL_4

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
