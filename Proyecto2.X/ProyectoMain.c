/*
 * File:   ProyectoMain.c
 * Author: Alex
 *
 * Created on 26 de septiembre de 2017, 08:35 PM
 */

#define _XTAL_FREQ 20000000 //Oscilador interno del PIC
#include <xc.h>
#include "ConfigBits.h"

void main(void) {
    unsigned char led=0;

    TRISD=0x00; //Se define el puerto D como Salida
    ADCON1 =0x0F; // A/D port as a Digital    
    do{
            PORTD=(1 << led);// "<<" es el operador desplazamiento a izquierdas
            led++;
            if(led==8)
                led=0;
            __delay_ms(50);
            PORTD=0x00;
            __delay_ms(50);
       
    }while(1);  
    return;
}
