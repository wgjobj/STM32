#include "LED.H"		

void LedInit(void)//LED���IO��ʼ��
{
	GPIO_InitTypeDef GPIO_InitStructure;

	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOD|RCC_APB2Periph_GPIOB, ENABLE);//ʹ��GPIOAʱ��
	
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;//����ģʽ
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;//����50M  
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_3 | GPIO_Pin_6 ;		
	GPIO_Init(GPIOD, &GPIO_InitStructure);//��ʼ��		 

 	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_5;		
	GPIO_Init(GPIOB, &GPIO_InitStructure);//��ʼ��	  
	
	IsLed1On(NO);//��LED1
	IsLed2On(NO);
	IsLed3On(NO);
	//IsLed4On(NO);


}

void delay(void)
{
	u32 cnt;
	for(cnt=6000000;cnt>0;cnt--);
}

void LedTest(void)
{
	IsLed1On(YES);//��LED1
	delay();
	IsLed2On(YES);
	delay();
	IsLed3On(YES);
	delay();
//	IsLed4On(YES);
	delay();
	IsLed1On(NO);//��LED1
	delay();
	IsLed2On(NO);
	delay();
	IsLed3On(NO); 
	delay();
	//IsLed4On(NO);
	delay();	
}