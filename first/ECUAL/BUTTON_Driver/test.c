/*
 * test.c
 *
 * Created: 09/20/2022 7:27:11 PM
 *  Author: 20112
 */ 
#include "button.h"
int TestButton(void){
	BUTTON_init(PORT_D,0);
	DIO_init(PORT_A,0,OUT);
	uint8_t state;
	while(1){
		BUTTON_read(PORT_D,0,&state);
		DIO_write(0,PORT_A,state);
	}
	return 0;
}