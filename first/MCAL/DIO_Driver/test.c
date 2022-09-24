/*
 * test.c
 *
 * Created: 09/20/2022 7:18:58 PM
 *  Author: 20112
 */ 
#include "dio.h"
int TestDIO(void){
	DIO_init(0,PORT_A,OUT);
	DIO_init(1,PORT_A,OUT);
	DIO_init(1,PORT_B,IN);
	uint8_t state;
	while(1){
		DIO_write(0,PORT_A,HIGH);
		DIO_read(0,PORT_B,&state);
		DIO_toggle(1,PORT_A);
	}
	return 0; 
}