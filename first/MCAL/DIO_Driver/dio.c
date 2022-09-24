/*
 * dio.c
 *
 * Created: 09/13/2022 2:58:15 AM
 *  Author: 20112
 */ 
#include "dio.h"
void DIO_init(uint8_t pinNumber, uint8_t portNumber, uint8_t direction)
{
	switch(portNumber){
		case PORT_A :
		if(direction==IN){
				DDRA &= ~(1<<portNumber);

		}
		else{
			DDRA |= (1<<pinNumber);
		}
		break;
		
		case PORT_B:
		if(direction==IN){
		DDRB &= ~(1<<portNumber);
		}
		else{
			DDRB |= (1<<pinNumber);
		}
		break;
		case PORT_C :
		if(direction==IN){
		DDRC &= ~(1<<portNumber);
		}
		else{
		DDRC |= (1<<pinNumber);
		}
		break;
		case PORT_D :
		if(direction==IN){
		DDRD &= ~(1<<portNumber);
		}
		else{
			DDRD |=(1<<pinNumber);
		}
		break;
	}
}
void DIO_read(uint8_t pinNumber, uint8_t portNumber, uint8_t *value)
{
	switch (portNumber)
	{
		case PORT_A:
		*value = (PORTA & (1<<pinNumber))>>pinNumber; // get state —> read bit
		break;
		case PORT_B:
		*value = (PORTB & (1<<pinNumber))>>pinNumber; // get state -> read bit
		break;
		case PORT_C:
		*value = PINC & (1<<pinNumber) ; // get state —> read bit
		break;
		case PORT_D:
		*value =  PIND & (1<<pinNumber); // get state —> read bitl
		break;
		default:
		// Error handling
		break;
	 }
}
void DIO_write(uint8_t pinNumber, uint8_t portNumber, uint8_t value)
{
	switch(portNumber){
		case PORT_A :
		if(value==LOW){
			PORTA &=~(1<<pinNumber);
		}
		else{
			PORTA |=(1<<pinNumber);
		}
		break;
		
		case PORT_B:
		if(value==LOW){
			PORTB &=~(1<<pinNumber);
		}
		else{
			PORTB |=(1<<pinNumber);
		}
		break;
		case PORT_C :
		if(value==LOW){
			PORTC &=~(1<<pinNumber);
		}
		else{
			PORTC |=(1<<pinNumber);
		}
		break;
		case PORT_D :
		if(value==LOW){
			PORTD &=~(1<<pinNumber);
		}
		else{
			PORTD |=(1<<pinNumber);
		}
		break;
	}
}

void DIO_toggle(uint8_t pinNumber, uint8_t portNumber)
{
	switch (portNumber)
	{
		case PORT_A:
		PORTA ^= (1<<pinNumber); // get state —> read bit
		break;
		case PORT_B:
		PORTB ^= (1<<pinNumber); // get state -> read bit
		break;
		case PORT_C:
		PORTC ^= (1<<pinNumber); // get state —> read bit
		break;
		case PORT_D:
		PORTD ^= (1<<pinNumber); // get state —> read bitl
		break;
		default:
		// Error handling
		break;
	}
}
