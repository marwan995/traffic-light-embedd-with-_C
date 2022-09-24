#include "app.h"

void app_init(){
	//cars
	LED_init(PORT_A,0);
	LED_init(PORT_A,1);
	LED_init(PORT_A,2);
	//pedestrian
	LED_init(PORT_B,0);
	LED_init(PORT_B,1);
	LED_init(PORT_B,2);
	//button
	//timer
	TIMER_init();
}
// simply turn off all leds
void turnOFFALL(){
	LED_off(PORT_B,0);
	LED_off(PORT_B,1);
	LED_off(PORT_B,2);
	LED_off(PORT_A,0);
	LED_off(PORT_A,1);
	LED_off(PORT_A,2);
}
//what will happen when button pressed while the led is green
void when_Green(){
	LED_on(PORT_B,0);
	TIMER_delay(5.0);
	turnOFFALL();
	float x=0.0;
	while (x!=5)
	{
		LED_on(PORT_A,1);
		LED_on(PORT_B,1);
		TIMER_delay(.25);
		LED_off(PORT_A,1);
		LED_off(PORT_B,1);
		TIMER_delay(.25);
		x=x+.5;
	}
	LED_on(PORT_A,0);
	LED_on(PORT_B,2);
	TIMER_delay(5.0);
	LED_off(PORT_A,0);
	LED_off(PORT_B,2);
}
//what will happen when button pressed while the led is yellow
void when_Yellow(){
	LED_on(PORT_B,0);
	LED_on(PORT_A,0);
	LED_off(PORT_A,1);
	TIMER_delay(5.0);
	turnOFFALL();
	float x=0.0;
	while (x!=5)
	{
		LED_on(PORT_A,1);
		LED_on(PORT_B,1);
		TIMER_delay(.25);
		LED_off(PORT_A,1);
		LED_off(PORT_B,1);
		TIMER_delay(.25);
		x=x+.5;
	}
	LED_on(PORT_A,0);
	LED_on(PORT_B,2);
	TIMER_delay(5.0);
	LED_off(PORT_A,0);
	LED_off(PORT_B,2);
	
}
//what will happen when button pressed while the led is red and execute the red light event
void red(){
	LED_on(PORT_A,0);
	int a=0;
	TIMER_Delay(5.0,&a);
	if(a!=0){
		LED_on(PORT_B,2);
		TIMER_delay(5.0);
		LED_off(PORT_B,2);
		TIMER_delay(.25);
		flag=1;
	}
	LED_off(PORT_A,0);
}
//execute the yellow light event
void yellow(){
	float x=0.0;
	int a=4;

	while (x!=5)
	{
		LED_on(PORT_A,1);
		TIMER_Delay(.25,&a);
		if(a!=0){
			when_Yellow();
		}
		if(CheckButton()==1){
			when_Yellow();
		}
		LED_off(PORT_A,1);

		TIMER_Delay(.25,&a);
		if(a!=0){
			when_Yellow();
		}
		if(CheckButton()==1){
			when_Yellow();
		}
		x=x+.5;
	}
}
//execute the green light event
void green(){
	int a=4;
	LED_on(PORT_A,2);
	TIMER_Delay(5.0,&a);
	if(a!=0){
		when_Green();
		LED_off(PORT_A,2);
		
	}else
	LED_off(PORT_A,2);
}
void app_execute(){
		while (1)
		{
			red();
			yellow();
			green();
			yellow();
		}
}

