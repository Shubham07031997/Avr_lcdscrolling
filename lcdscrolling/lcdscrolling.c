#include<avr/io.h>
#define F_CPU 8000000
#include<util/delay.h>
#include<lcdavr.h>
int x;
int main()
{
   DDRB=0xff;
   lcd_init();
   while(1)
   {
       lcd_clear();
	   lcd_command(0x85);
	   lcd_string("hello");
	       for(x=0;x<=5;x++)
		   {    lcd_command(0x1c);
		        _delay_ms(100);
				}
	   
	  
	   
	   }
}
