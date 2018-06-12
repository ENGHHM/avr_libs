/*
 * 7segtest.c
 *
 * Created: /06/2018 03:41:03 ص
 * Author : ENG Hossam
 */ 

#include <avr/io.h>
#include "swe7seg.h";
#define F_CPU 8000000UL // defining clk speed
 #include "avr/delay.h"

int main(void)
{
    /* Replace with your application code */
	init();
	
    while (1) 
    { 
	    start_test_screen(); //// start screen test
	    _delay_ms(200);  /// wait for 200 ms
		end_test_screen(); /// end test

			send_number(0); //// send number 0
			
		send_number(1); // send number 1
		_delay_ms(200); /// wait for 2 sec
		send_number(2); /// send num 2
		_delay_ms(200);
		send_number(3);
		_delay_ms(200);
		send_number(4);
		_delay_ms(200);
		send_number(5);
		_delay_ms(200);
			send_number(6);
			_delay_ms(200);
				send_number(7);
				_delay_ms(200);
					send_number(8);
					_delay_ms(200);
						send_number(9);
						_delay_ms(200);
		 
    }
}

