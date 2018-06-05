/*
 * File:   ProyectoMain.c
 * Author: Alex
 *
 * Created on 26 de septiembre de 2017, 07:14 PM
 */

#include <xc.h>
#include "ConfigBits.h"
#define _XTAL_FREQ 20000000 //definir oscilador interno





void main(void) {
    //Configuracion de puertos
    TRISA=TRISB=TRISC=TRISD=0x00; //Definir A,B,C,D como salida
    ADCON1 = 0x0F;// Definimos puertos A/D como DIGITALES 
    
    
    do{
        PORTD=0x00;
        __delay_ms(500);
        PORTD=0xFF;
        __delay_ms(500);
    }while(1);    
    return;
}
