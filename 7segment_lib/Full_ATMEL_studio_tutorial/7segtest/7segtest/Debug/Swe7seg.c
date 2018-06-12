/*
 * Swe7seg.c
 *
 * Created: 12/06/2018 03:26:48 ص
 *  Author: SWE Hossam
 */ 
#include "swe7seg.h"
#define ppddr DDRC
#define ppname PORTC
#define pp0 PC0		
#define pp1 PC1
#define pp2 PC2	
#define pp3 PC3		/* Include USART header file */
void send_number(char number)
{
	 ppddr |= (1<<PC0); // set 1 in PB0 (output)	 ppddr|= (1<<PC1); // set 1 in PB1 (output)	 ppddr |= (1<<PC2); // set 1 in PB2 (output)
	 ppddr |= (1<<PC3); // set 1 in PB2 (output)
	 if(number=='0')
	 {
				ppname &= ~ (1<<pp0);		     	ppname &= ~ (1<<pp1);		     	ppname &= ~ (1<<pp2);		     	ppname &= ~ (1<<pp3);
	 }
	 
	 if(number=='1')
	 {
		 
			 		ppname |= (1<<pp0);                    	ppname &= ~ (1<<pp1);                    	ppname &= ~ (1<<pp2);                    	ppname &= ~ (1<<pp3);
	 }
	 
	 if(number=='2')
	 {
		 ppname |= (1<<pp1);		 ppname &= ~ (1<<pp0);		 ppname &= ~ (1<<pp2);		 ppname &= ~ (1<<pp3);
	 }
	 if(number=='3')
	 {
		 ppname |= (1<<pp2); /// port 2 		 		 ppname |= (1<<pp1); // port1; 		 ppname &= ~ (1<<pp0);		 ppname &= ~ (1<<pp3);
	 }
	 	 if(number=='4')
	 	 {
		 	 ppname |= (1<<pp3); ///  		 	 ppname &= ~ (1<<pp0);		 	 ppname &= ~ (1<<pp1);		 	 ppname &= ~ (1<<pp2);
	 	 }
		  
		  

}

