/*
 * button.c
 *
 * Created: 09/17/2022 10:32:11 PM
 *  Author: 20112
 */ 
#include "button.h"
void BUTTON_init(uint8_t buttonPort, uint8_t buttonPin){
	
	
	DIO_init(buttonPin,buttonPort,IN);
}
// button read
void BUTTON_read(uint8_t buttonPort, uint8_t buttonPin, uint8_t* value){
	
	DIO_read(buttonPin,buttonPort,value);
}
int CheckButton(){
	uint8_t state1=0;
	BUTTON_read(PORT_D,0,&state1);
	return state1;
}