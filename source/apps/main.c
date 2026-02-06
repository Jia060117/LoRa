/**
  ******************************************************************************
  * File Name          : main.c
  * Description        : Main program body
  ******************************************************************************
  */
#include <string.h>
#include "board.h"
#include "hal_key.h"
#include "tim-board.h"
#include "timer_handles.h"


void Init() {
    BoardInitMcu();
    BoardInitPeriph();
    keys_init();//按键初始化
    setTimer2Callback(Time2Handler);
    Tim2McuInit(1);//定时器初始化，设置定时中断1ms中断一次
}



/**
 * Main application entry point.
 */
int main( void )
{
    Init();
    OLED_Init();
    OLED_Clear();
    OLED_ShowString(0, 0, (uint8_t *)"Hello LoRa!");
    OLED_ShowNum(0, 2, 20250206, 8, 16);
    while( 1 )
    {
			
    }
}
