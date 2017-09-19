#include "BistConfig.h"//Headed de configuracion de bits
#include <xc.h>
#define boton RB0


void main(void){
    //puertos de configuracion
    TRISD=0x00;// Lo configuramos como salida (0)
    TRISB=0xFF;//Definir puerto como Entrada (1)
    //Habilitar entradas y salidas digitales
    ADCON1 = 0x0F;
    //Condicion inicial
    PORTD=0;
    PORTB=1;

    //Programa principal
    
    while(1){
        if(boton==0){
            RD0=1;
            __delay_ms(30);
            RD0=0;
            __delay_ms(30);   
        }
    }
    
    return;
}
