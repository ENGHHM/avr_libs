/*
 * swe7seg.h
 *
 * Created: 2018 03:25:33 ص
 *  Author: ENG Hossam
 */ 


#ifndef SWE7SEG_H_
#define SWE7SEG_H_



#include <avr/io.h>	  
 
void init();
void start_test_screen();
void end_test_screen();
void send_number(int);

							/* USART_RS232_H_FILE_H_ */


#endif /* SWE7SEG_H_ */
