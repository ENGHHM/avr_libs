/*
 * Swe7seg.c
 *
 * Created: 2018 03:26:48 ص
 *  Author: SWE Hossam
 */ 

 
#include "swe7seg.h"
 #include <avr/io.h>

 #define ppddr DDRC /// change this to change Ports Group
 #define ppname PORTC //// Change this to change Main Port Name
 #define pp0 PC0  //// change this to change port pin
 #define pp1 PC1 //// change this to change port pin
 #define pp2 PC2  //// change this to change port pin
 #define pp3 PC3  //// change this to change port pin
 #define pp4 PC4 /// change this to change screen test port ( function that test leds that in the screen) //// If you dont need it just  You must connect the line 
 //outed From mcu with not gate to invert signal to 0 if you dont need it just connect it with 5 v and change PC4 to any empty port or fake number


   void init()/// function to set ports as Outputs  
{
	
	  
	  ppddr |= (1<<pp0); // set 1   (output)
	  ppddr|= (1<<pp1); // set 1  (output)
	  ppddr |= (1<<pp2); // set 1   (output)
	  ppddr |= (1<<pp3); // set 1   (output)
	} 
	
	 void start_test_screen() 
	 {
		 ppname |= (1<<pp4);
		 
 	 }    /// function to turn on all leds that contined inside the screen
	 
	 void end_test_screen() /// function to turn off all leds that contined inside the screen
	 {
		 	 
	 	 ppname &= ~ (1<<pp4);
	 } 
	 
 void send_number(int number)  /// function to Send  number to screen
{
		  
	 if(number==0)
	 {
				ppname &= ~ (1<<pp0);
		     	ppname &= ~ (1<<pp1);
		     	ppname &= ~ (1<<pp2);
		     	ppname &= ~ (1<<pp3);



	 }
	 
	 if(number==1)
	 {
		 
			 		ppname |= (1<<pp0);
                    	ppname &= ~ (1<<pp1);
                    	ppname &= ~ (1<<pp2);
                    	ppname &= ~ (1<<pp3);
	 }
	 
	 if(number==2)
	 {
		 ppname |= (1<<pp1);
		 ppname &= ~ (1<<pp0);
		 ppname &= ~ (1<<pp2);
		 ppname &= ~ (1<<pp3);
	 }
	 if(number==3)
	 {
		 ppname |= (1<<pp0); /// ppname 2 
     	 ppname |= (1<<pp1); // ppname1;

 		 ppname &= ~ (1<<pp2);
		 ppname &= ~ (1<<pp3);
	 }
	 
	 	 if(number==4)
	 	 {
		 	 ppname |= (1<<pp2); /// 
 
		 	 ppname &= ~ (1<<pp1);
		 	 ppname &= ~ (1<<pp3);
	    	 ppname &= ~ (1<<pp0);

	 	 }
		   if(number==5)
		   {
			   ppname |= (1<<pp2); ///
			   ppname |= (1<<pp0); ///

			   ppname &= ~ (1<<pp1);
			   ppname &= ~ (1<<pp3);
		   }
		   
		  
   if(number==6)
   {
	   ppname |= (1<<pp2); ///
	   ppname |= (1<<pp1); ///

	   ppname &= ~ (1<<pp0);
	   ppname &= ~ (1<<pp3);
   }
   
   
      if(number==7)
      {
	      ppname |= (1<<pp2); ///
	      ppname |= (1<<pp0); ///
	      ppname |= (1<<pp1); ///

	      
	      ppname &= ~ (1<<pp3);
      }
	  
	  
	  if(number==8)
	  {
		  ppname |= (1<<pp3); ///
		   

		 ppname &= ~ (1<<pp0);
		 ppname &= ~ (1<<pp1);
		 ppname &= ~ (1<<pp2);
	  }
	  
	  
	  	  if(number==9)
	  	  {
		  	  ppname |= (1<<pp3); ///
	     	  ppname |= (1<<pp0); ///


		  	 
		  	  ppname &= ~ (1<<pp1);
		  	  ppname &= ~ (1<<pp2);
	  	  }
	  	  
      
   
}


