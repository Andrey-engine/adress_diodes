/*
 * app_main.c
 *
 *  Created on: 17 окт. 2022 г.
 *      Author: Андрей
 */
#include  "C:\Users\Андрей\Desktop\STM\start\Core\Lib\app_main.h"
#include  "C:\Users\Андрей\Desktop\STM\start\Core\Lib\ARGB\ARGB.h"
#include  "C:\Users\Андрей\Desktop\STM\start\Core\Inc\main.h"
void app_main(void)
{
	ARGB_Init();
	ARGB_Clear();

	while(!ARGB_Show());

	ARGB_SetBrightness(10);

	while(1)
	{
		ARGB_SetRGB(0, 255, 0, 0);
		while(!ARGB_Show());
		HAL_Delay(1000);
		ARGB_SetRGB(0, 0, 255, 0);
		while(!ARGB_Show());
		HAL_Delay(1000);
		ARGB_SetRGB(0, 0, 0, 255);
	}

}
