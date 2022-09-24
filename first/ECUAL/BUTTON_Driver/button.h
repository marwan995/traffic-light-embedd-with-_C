/*
 * button.h
 *
 * Created: 09/17/2022 10:32:24 PM
 *  Author: 20112
 */ 


#ifndef BUTTON_H_
#define BUTTON_H_
#include "../../MCAL/DIO_Driver/dio.h"

// initialize
void BUTTON_init(uint8_t buttonPort, uint8_t buttonPin);

// button read
void BUTTON_read(uint8_t buttonPort, uint8_t buttonPin, uint8_t* value);
//check if button is pressed or not
int CheckButton();

#endif /* BUTTON_H_ */