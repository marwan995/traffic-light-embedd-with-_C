
#ifndef APP_H_
#define APP_H_
#define F_CPU 1000000U
#include "../ECUAL/LED_Driver/led.h"
#include "../MCAL/TIMER_Driver/timer.h"
//initialize all used elements
void app_init();
// execute the application by calling assisted functions
void app_execute();

#endif /* APP_H_ */