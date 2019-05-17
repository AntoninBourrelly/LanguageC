/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: abourrelly
 *
 * Created on 27 septembre 2018, 11:28
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int nombreDecimal;
    int un;
    int deux;
    int trois;
    int quatre;
    int cinq;
    int six;
    int sept;
    int huit;
    int reste;

    nombreDecimal = 203;
    reste = nombreDecimal;
    /*-------------------------*/
    if (reste >= 128) {
        huit = 1;
        reste = reste - 128;
    } else // Sinon...
    {
        huit = 0;
    }

    if (reste >= 64) {
        sept = 1;
        reste = reste - 64;
    } else // Sinon...
    {
        sept = 0;
    }
    if (reste >= 32) {
        six = 1;
        reste = reste - 32;
    } else // Sinon...
    {
        six = 0;
    }
    if (reste >= 16) {
        cinq = 1;
        reste = reste - 16;
    } else // Sinon...
    {
        cinq = 0;
    }
    if (reste >= 8) {
        quatre = 1;
        reste = reste - 8;
    } else // Sinon...
    {
        quatre = 0;
    }
    if (reste >= 4) {
        trois = 1;
        reste = reste - 4;
    } else // Sinon...
    {
        trois = 0;
    }

    if (reste >= 2) {
        deux = 1;
        reste = reste - 2;
    } else // Sinon...
    {
        deux = 0;
    }

    if (reste >= 1) {
        un = 1;
        reste = reste - 1;
    } else // Sinon...
    {
        un = 0;
    }


    printf("votre nombre %d", nombreDecimal);
    printf(" en binaire est: %d", huit);
    printf("%d", sept);
    printf("%d", six);
    printf("%d ", cinq);
    printf("%d", quatre);
    printf("%d", trois);
    printf("%d", deux);
    printf("%d", un);

    return (EXIT_SUCCESS);
}

