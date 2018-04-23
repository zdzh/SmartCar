#ifndef __LED_H_
#define	__LED_H_



#include "ht32.h"
 
 
 
/****************************** LED 引脚配置参数定义***************************************/
#define             macLED1_GPIO_APBxClock_FUN              RCC_APB2PeriphClockCmd
#define             macLED1_GPIO_CLK                        RCC_APB2Periph_GPIOB
#define             macLED1_GPIO_PORT                       GPIOB
#define             macLED1_GPIO_PIN                        GPIO_Pin_5

#define             macLED2_GPIO_APBxClock_FUN              RCC_APB2PeriphClockCmd
#define             macLED2_GPIO_CLK                        RCC_APB2Periph_GPIOB
#define             macLED2_GPIO_PORT                       GPIOB
#define             macLED2_GPIO_PIN                        GPIO_Pin_0

#define             macLED3_GPIO_APBxClock_FUN              RCC_APB2PeriphClockCmd
#define             macLED3_GPIO_CLK                        RCC_APB2Periph_GPIOB
#define             macLED3_GPIO_PORT                       GPIOB
#define             macLED3_GPIO_PIN                        GPIO_Pin_1



/****************************** LED 函数宏定义***************************************/   
#define LED1(TmpStatus)   GPIO_WriteOutBits(HT_GPIOC, GPIO_PIN_9, TmpStatus)
#define LED2(TmpStatus)   GPIO_WriteOutBits(HT_GPIOC, GPIO_PIN_11, TmpStatus)
/************************** PAD 函数声明********************************/
void                               LED_Init                         ( void );
 
 

#endif /* __LED_H_ */

