#include "bsp_led.h"   



static void                         LED_GPIO_Config                  ( void );



 /**
  * @brief  配置 LED 的 GPIO 功能
  * @param  无
  * @retval 无
  */
static void LED_GPIO_Config ( void )
{		
  /* Configure LED1, LED2 pins as output function                                                     */

  /* Configure AFIO mode of output pins                                                                     */
  AFIO_GPxConfig(GPIO_PC, AFIO_PIN_9, AFIO_MODE_DEFAULT);
  AFIO_GPxConfig(GPIO_PC, AFIO_PIN_11, AFIO_MODE_DEFAULT);

  /* Configure GPIO direction of output pins                                                                */
  GPIO_DirectionConfig(HT_GPIOC, GPIO_PIN_9, GPIO_DIR_OUT);
  GPIO_DirectionConfig(HT_GPIOC, GPIO_PIN_11, GPIO_DIR_OUT);		
}


 /**
  * @brief  LED 初始化函数
  * @param  无
  * @retval 无
  */
void LED_Init ( void )
{
    LED_GPIO_Config();
}



/*********************************************END OF FILE**********************/
