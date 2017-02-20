#include "delay.h"
#include "sys.h"
#include "usart.h"
#include "malloc.h"   
#include "sim900a.h"		
#include "usart2.h"	
#include "led.h"
#include"HeadType.h"

u8 Gsm_Check_Flag;
u16 Update_Gsm_Time = UPDATE_GSM_TIME;
u8 Sim_Send_Flag;
 
 int main(void)
 {  
	delay_init();	    	 //��ʱ������ʼ��
	LED_Init();	 
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2); //����NVIC�жϷ���2:2λ��ռ���ȼ���2λ��Ӧ���ȼ�  
	uart_init(9600);	 	//���ڳ�ʼ��Ϊ9600	
	USART2_Init(115200);
  mem_init();				//��ʼ���ڴ��	
	Gsm_Check_Flag = 0;
	if(sim900a_start_test() >0){
		Gsm_Check_Flag = 1;
	}
	TIM2_Config();
	Sim_Send_Flag = 1;
	while(1){	 
		sim900a_disproce();
		sim900a_update_state();
	}
}


