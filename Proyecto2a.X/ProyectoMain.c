/*
 * File:   ProyectoMain.c
 * Author: Alex
 *
 * Created on 26 de septiembre de 2017, 08:35 PM
 */

#define _XTAL_FREQ 20000000
#include <xc.h>
#include "ConfigBits.h"

void main(void) {
    unsigned int led=0;
    unsigned int contr=0;
    TRISD=0x00; //Se define el puerto D como Salida
    ADCON1 =0x0F; // A/D port as a Digital    
    do{
        if (contr==0){
            PORTD=(1 << led);// "<<" es el operador desplazamiento a izquierdas
            led++;
            if(led==8){
                contr =1;
                led=6;
            }
            __delay_ms(50);
            PORTD=0x00;
            __delay_ms(50);
        }
        if(contr==1){
            PORTD=(1 << led);// "<<" es el operador desplazamiento a izquierdas
            led--;
            if(led==0){
                contr =0;
            }
            __delay_ms(50);
            PORTD=0x00;
            __delay_ms(50);
        }
    }while(1);  
    return;
}
