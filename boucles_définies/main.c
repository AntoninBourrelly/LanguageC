/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: abourrelly
 *
 * Created on 1 octobre 2018, 10:16
 */

#include <stdio.h>
#include <stdlib.h>
#include <senseHat.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int colonne;
    InitialiserLeds();

    for (colonne = 0; colonne <= 7; colonne++)
        Allumer(0, colonne, ROUGE);
}
return (EXIT_SUCCESS);
}

