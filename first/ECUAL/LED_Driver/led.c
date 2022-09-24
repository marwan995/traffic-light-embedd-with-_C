/*
 * led.c
 *
 * Created: 09/17/2022 3:40:56 PM
 *  Author: 20112
 */ 
#include "led.h"

void LED_init(uint8_t ledPort, uint8_t ledpin){
	DIO_init(ledpin,ledPort,OUT);
}
void LED_on(uint8_t ledPort, uint8_t ledpin){
	DIO_write(ledpin,ledPort,HIGH);
}
void LED_off(uint8_t ledPort, uint8_t ledpin)
{
	DIO_write(ledpin,ledPort,LOW);
}
void LED_toggle(uint8_t ledPort, uint8_t ledpin){
	DIO_toggle(ledpin,ledPort);
}
