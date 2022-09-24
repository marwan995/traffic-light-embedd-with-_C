/*
 * timer.h
 *
 * Created: 09/19/2022 2:08:19 AM
 *  Author: 20112
 */ 


#ifndef TIMER_H_
#define TIMER_H_
#include "../../ECUAL/BUTTON_Driver/button.h"
extern int flag;
//initialize the timer
void TIMER_init();
// to help to out from the delay when button is pressed
void TIMER_Delay(float delay,int*a);
//a simple delay
void TIMER_delay(float delay);


#endif /* TIMER_H_ */