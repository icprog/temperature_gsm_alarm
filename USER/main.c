#include "delay.h"
#include "sys.h"
#include "usart.h"
#include "malloc.h"   
#include "sim900a.h"		
#include "usart2.h"	
//ALIENTEK Mini STM32��������չʵ��14
//ATK-SIM900A GSMģ�����ʵ��-�⺯���汾
//����֧�֣�www.openedv.com
//������������ӿƼ����޹�˾  
 
 int main(void)
 {  
//	delay_init();	    	 //��ʱ������ʼ��	
//	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2); //����NVIC�жϷ���2:2λ��ռ���ȼ���2λ��Ӧ���ȼ�  
//	uart_init(9600);	 	//���ڳ�ʼ��Ϊ9600			 
	sim900a_test();
}


