/*
 * test.c
 *
 * Created: 09/20/2022 7:25:23 PM
 *  Author: 20112
 */ 
#include "timer.h"
int TestTimer(void){
	TIMER_init();
DIO_init(0,PORT_A,OUT);
	while(1){
TIMER_delay(1.0);
DIO_write(0,PORT_A,HIGH);
	}
	return 0;
}