/*
 * timer.c
 *
 * Created: 09/19/2022 2:08:37 AM
 *  Author: 20112
 */ 
#include "timer.h"
flag=1;
void TIMER_init(){
		TCCR0 =0x00;//normal mode
		TCNT0=0x00;//initial value
		BUTTON_init(PORT_D,0);
		TCCR0 |=(1<<0);//no prescaler
}
void TIMER_delay(float delay){
	int turns =0;
	int number_of_overflow=delay*4000;
	while(turns<number_of_overflow){
		TCCR0 |=(1<<0);//no prescalers
		//delay wait flag to be 0
		while((TIFR & (1<<0))==0);	
		//clear flag
		TIFR |=(1<<0);
		turns++;
	}
	turns=0;
	//timer stop
	TCCR0 =0x00;
}

void TIMER_Delay(float delay,int*a){//timer start
	int turns =0;
	int number_of_overflow=delay*4000;
	while(turns<number_of_overflow){
		TCCR0 |=(1<<0);//no prescalers
		//delay wait flag to be 0
		while((TIFR & (1<<0))==0){
			if(flag&&CheckButton()==1){
				//for long press
				//TIMER_delay(.25);
				//if (CheckButton()==1)
				//{
					//break;
				//}
				flag=0;
				*a=turns;
				return;
			}
		}	//clear flag
		TIFR |=(1<<0);
		turns++;	
	}
	turns=0;
	*a=turns;
	//timer stop
	TCCR0 =0x00;
	}