#include "delay.h"
#include "sys.h"
#include "usart.h"
#include "malloc.h"   
#include "sim900a.h"		
#include "usart2.h"	
//ALIENTEK Mini STM32开发板扩展实验14
//ATK-SIM900A GSM模块测试实验-库函数版本
//技术支持：www.openedv.com
//广州市星翼电子科技有限公司  
 
 int main(void)
 {  
//	delay_init();	    	 //延时函数初始化	
//	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2); //设置NVIC中断分组2:2位抢占优先级，2位响应优先级  
//	uart_init(9600);	 	//串口初始化为9600			 
	sim900a_test();
}


