
#include<avr/io.h>
#include<avr/inturrupt.h>


int main() {
    DDRC = 1<<3;
    PORTD = 1<<2;
    GICR = (1<<INT0);
    sei ();
    TIMSK=(1<< TOIE 0); 
   while(1){}
}
 ISR(INT0_vect){
     PORTC ^=(1<<3);
 }