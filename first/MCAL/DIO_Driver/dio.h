/*
 * dio.h
 *
 * Created: 09/13/2022 2:58:04 AM
 *  Author: 20112
 */ 


#ifndef DIO_H_
#define DIO_H_
#include "../../REGGISTERS.h"
// all driver function prototypes
#define PORT_A 'A'
#define PORT_B 'B'
#define PORT_C 'C'
#define PORT_D 'D'
#define IN 0
#define OUT 1
#define LOW 0 
#define HIGH 1

void DIO_init(uint8_t pinNumber, uint8_t portNumber, uint8_t direction); // Initialize dio direction
void DIO_write(uint8_t pinNumber, uint8_t portNumber, uint8_t value); // Write data to dio

void DIO_toggle(uint8_t pinNumber, uint8_t portNumber); // toggle dio

void DIO_read(uint8_t pinNumber, uint8_t portNumber, uint8_t *value); // Read did 1




#endif /* DIO_H_ */