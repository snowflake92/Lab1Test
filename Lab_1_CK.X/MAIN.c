/*
 * File:   MAIN.c
 * Author: cklomp92
 *
 * Created on January 25, 2023, 7:17 PM
 * 
 * REMEMBER
 * ANS sets digital (0) or analog (1)
 * _TRISxx sets input (1) or output (0)
 * _LATxx sets high (1) or low (0)
 * _Rxx reads an input pin value
 */


#include "xc.h"
//#pragma config FNOSC = FRCDIV //set oscillator to 8 MHz
#pragma config FNOSC = LPRC //set oscillator to 31 kHz


void delay(int s){
    int k = 0;
    while(k < s){
        k++;
        //This is a test change
        
    }
}

int main(void) {
    //Setup
   // _RCDIV = 0b111;   //postscaler to reduce 8 MHz oscillator by 256
    ANSA = 0;       // Set A register to digital
    ANSB = 0;       // Set B register to digital
    
    _TRISA0 = 0;    // Set pin A0 (pin 2) to output for LED
    _TRISB2 = 0;    // Set pin B2 (pin 6) to output for LED
    _TRISB1 = 1;    // Set pin B2 (pin 5) to input for button
    
    //Loop
    while(1){
       if(_RB1 == 1){   //if button is pressed
            _LATA0 = 1;     //turn on LED 1
           // _LATB2 = 0;   //turn off LED 2
           delay(2583);     //wait for this amount of cycles
           _LATA0 = 0;      //turn off LED 1
           // _LATB2 = 1;   //turn on LED 2
            delay(2583);    //wait for this amount of cycles
       }
       else{
          _LATA0 = 0;       //turn off LED 1 if button isn't pressed
         // _LATB2 = 0;     //turn off LED 2 if button isn't pressed
       }
    }
    return 0;
}
