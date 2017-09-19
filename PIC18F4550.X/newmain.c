/*
 * File:   newmain.c
 * Author: Alex
 *
 * Created on 18 de septiembre de 2017, 01:00 PM
 */
#include "ConfigBits.h"
#include <xc.h>

unsigned int repetir; // variable globar, importante ahorrar recursos

void main(void) {
    TRISD=0X00;//Definir D como salida
    TRISB=0XFF;//Definir B como entrada
    
    ADCON1 = 0x0F;//Configurar pines Analogicos o digitales
    repetir=0;
    
    while(1){
        if(RB0 == 1){
            //Antirebote
            while(RB0==1){}
            ++repetir;
            
        }
        if(RB1 == 1){
            //Antirebote
            while(RB1==1){}
            --repetir;
        }
    }    
      
    return;
}
