/* USER CODE BEGIN Header */
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
#define OUT_LED_Pin GPIO_PIN_13
#define OUT_LED_GPIO_Port GPIOC
#define EXTI0_IN_PWDN_Pin GPIO_PIN_0
#define EXTI0_IN_PWDN_GPIO_Port GPIOA
#define EXTI0_IN_PWDN_EXTI_IRQn EXTI0_IRQn
#define OUT_IRQ_Pin GPIO_PIN_1
#define OUT_IRQ_GPIO_Port GPIOA
#define OUT_PULLUP_I2C2_SDA_Pin GPIO_PIN_4
#define OUT_PULLUP_I2C2_SDA_GPIO_Port GPIOA
#define OUT_PULLUP_I2C2_SCL_Pin GPIO_PIN_5
#define OUT_PULLUP_I2C2_SCL_GPIO_Port GPIOA
#define I2C2_SCL_READER_Pin GPIO_PIN_10
#define I2C2_SCL_READER_GPIO_Port GPIOB
#define I2C2_SDA_READER_Pin GPIO_PIN_11
#define I2C2_SDA_READER_GPIO_Port GPIOB
#define IN_IRQ_READER_Pin GPIO_PIN_12
#define IN_IRQ_READER_GPIO_Port GPIOB
#define OUT_PWDN_READER_Pin GPIO_PIN_13
#define OUT_PWDN_READER_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
