/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: abourrelly
 * CopyRight: Abourrelly, Toute copie de ce document pourra être suivis d'une poursuite judiciaire
 * Created on 29 novembre 2018, 10:15
 */

#include <stdio.h>
#include <stdlib.h>
#include "SerialTTY.h"
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#define LONG 4

/*
 * 
 */
int main(int argc, char** argv) {
    int choix = 0;
    int port;
    int indice;
    char *serialPort[LONG] = {"/dev/ttyS0", "/dev/ttyS1", "/dev/ttyS2", "/dev/ttyS3"};

    do {
        system("clear");
        printf("Choisissez le port a utiliser : \n");
        for (indice = 0; indice < LONG; indice++) {
            printf("%d %s\n", indice, serialPort[indice]);
        }
        printf("\nChoix : \n");
        scanf("%d", &choix);
    } while (choix < 0 || choix > 3);



    port = OuvrirPort(*serialPort[choix]);
    /*ConfigurerPort(B9600, CS7, -PARENB);*/
    return (EXIT_SUCCESS);
}

