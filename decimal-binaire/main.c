/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: abourrelly
 *
 * Created on 8 octobre 2018, 10:33
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int valBin = 0b00000011;
    int masque = 0b10000000;
    int puissanceDe2 = 128;
    int total = 0;
    int indice;
    
    for(indice = 0; indice < 8; indice ++)
    {
        if(valBin & masque)
        {
            total += puissanceDe2;
        }
        puissanceDe2 /= 2;
        masque >>=1;
       
    }
    printf("Total = %d\n",total);
    return (EXIT_SUCCESS);
}

