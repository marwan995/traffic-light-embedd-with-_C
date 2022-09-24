/*
 * led.h
 *
 * Created: 09/17/2022 3:35:58 PM
 *  Author: 20112
 */ 
#ifndef LED_H_
#define LED_H_
#include "../../MCAL/DIO_Driver/dio.h"

void LED_init(uint8_t ledPort, uint8_t ledpin);
void LED_on(uint8_t ledPort, uint8_t ledpin);
void LED_off(uint8_t ledPort, uint8_t ledpin);
void LED_toggle(uint8_t ledPort, uint8_t ledpin);

#endif /* LED_H_ */