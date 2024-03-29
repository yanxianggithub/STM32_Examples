/**
  ******************************************************************************
  * @file    main.c
  * @author  fire
  * @version V1.0
  * @date    2013-xx-xx
  * @brief   测试led
  ******************************************************************************
  */ 
	
#include "stm32f10x.h"
#include "./led/bsp_led.h"

void Delay(__IO u32 nCount); 

/**
  * @brief  主函数
  * @param  无  
  * @retval 无
  */
int main(void)
{	
	/* LED GPIO 初始化 */
	LED_GPIO_Config();	
	
	while(1)
	{		
		LED( OFF ); 			  // 亮
		Delay(0x0FFFFF);	
		LED( ON );		  // 不亮
		Delay(0x0FFFFF);
	}
}

void Delay(__IO uint32_t nCount)	 //简单的延时函数
{
	for(; nCount != 0; nCount--);
}
/*********************************************END OF FILE**********************/
