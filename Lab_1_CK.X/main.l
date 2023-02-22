/*
 * File:   main.l
 * Author: cklomp92
 *
 * Created on January 25, 2023, 6:55 PM
 */


#include "xc.h"

int main(void) {
    //Setup
    ANSA = 0;       // Set A register to digital
    ANSB = 0;       // Set B register to digital
    
    _TRISA0 = 0;    // Set pin A0 (pin 2) to output for LED
    _TRISB2 = 0;    // Set pin B2 (pin 6) to output for LED
    _TRISB1 = 1;    // Set pin B2 (pin 5) to input for button
    
    //Loop
    while(1){
       _LATA0 = 1;
    }
    return 0;
}
