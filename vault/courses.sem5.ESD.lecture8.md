---
id: cQQyfkWfK7K6yReCWFZSl
title: lecture8
desc: ''
updated: 1634539339473
created: 1634536426181
---

Common Cathod:Logic 0 turns on the segment and dp=0
Common Anode: Logic 1 turns on the segment and dp=1

![](/assets/images/2021-10-18-11-28-40.png)
````ruby
#include<avr/io.h>
int main()
{
    DDRA = DDRB = 0xFF; // Common Cathode PORTA output
    while(1)
    {
        PORTA = 0x77; // Display A
        PORTB.b0 = 1; // Enable pin
    }
    return 0;
}
````
![](/assets/images/2021-10-18-11-30-54.png)
````ruby
#include<avr/io.h>
int main()
{
    DDRA=DDRB=0xFF;
    int array[]={0x90,0x80,0xF8,0x82,0x92,0x99,0xB0,0xA4,0xF9,0xC0};
    while(1)
    {
        for(i=0;i<10;i++>)
        {
            PORTB=0x01;
            PORTA=array[i];
            delay_ms();
            
        }
        
    }
    return 0;

}
````
![](/assets/images/2021-10-18-11-48-02.png)
![](/assets/images/2021-10-18-11-49-41.png)
PIN 4: RS
RS=0--> instruction codecommand register
RS-->0 DAta register
(missing)

![](/assets/images/2021-10-18-11-59-11.png)
![](/assets/images/2021-10-18-12-00-40.png)
![](/assets/images/2021-10-18-12-01-09.png)
![](/assets/images/2021-10-18-12-01-54.png)
![](/assets/images/2021-10-18-12-12-16.png)

