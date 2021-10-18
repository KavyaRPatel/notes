---
id: Ku9ciQRvAFPbpZ6Wvt6yp
title: lecture4
desc: ''
updated: 1632703444177
created: 1631491571594
---
![](/assets/images/2021-09-13-05-46-34.png)

Question: Write a C program to generate aa square wave of time period 100uSec on Pin 1 of Port A. 

TCNT0=206 
TTCR= 0x01 

```ruby
#include<avr/io.h>

void timeDelay() {
    TCNT0 = 206; 
    TCCR0 = 0x01;
    while((TIFR & 0x1) == 0); 
    TCCR0 = 0; 
    TIFR = 0x1; 
}


int main() {
    DDRA = 0x02;
    while(1)
    {
        PORTA = 0x02;
        timeDelay();
        PORTA = 0x00;
        timeDelay();
    }
    return 0;
}
```

```ruby
#include<avr/io.h>

int main() {
    DDRB = 0x01;
    DDRC = 0xFF;
    PORTB = 0x01;
    while(1) {
        TCCR0 = 0x06;
        PORTC = TCNT0;
    }
}
``` 
![](/assets/images/2021-09-13-06-52-57.png)
```ruby
#include<avr/io.h>

void T0Delay() {
    TCNT0 = 0; // TCNT0 = 0
    OCR0 = 75; // OCR0 - TCNT0 = 75
    TCCR0 = 0x09; // CTC mode and no prescaling
    while( (TIFR & 0x2) == 0); // CHeck 1st bit
    TCCR0 = 0; // Stop clock
    TIFR = 0x2; // Reset
}

int main() {
    DDRA = 0x02;
    while(1) {
        PORTA = PORTA ^ 0x02;
        T0Delay();
    }
    return 0;
}

```