#include <stdio.h>
#include <reg51.h>
#include "serial.h"
#include "delay.h"

void main() {
    unsigned char received_data;


    init_serial(9600);
    delay(1000);

    string_serial("Connected Establishing to Jaddoo\r\n");

    while(1) {
       
        received_data = rec_serial();

      
        string_serial("Hello From Jaadoo: ");
        trans_serial(received_data);
        delay(1000);
    }
}
