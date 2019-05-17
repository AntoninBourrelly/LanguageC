/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: abourrelly
 *
 * Created on 15 octobre 2018, 08:27
 */

#include <stdio.h>
#include <stdlib.h>
#include <senseHat.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int indice;
    int touche;
    uint16_t couleurs[8] = {ROUGE, VERT, BLEU, BLANC, JAUNE, ORANGE, MAGENTA, CYAN};
    int chenille[8];
    InitialiserLeds();
    InitialiserJoystick();
    for (indice = 0; indice < 7; indice++) {
        chenille[indice] = couleurs[indice];

    }
    do {


        while (touche != KEY_ENTER) {


            int aux = chenille[0];

            for (indice = 0; indice < 7; indice++) {
                chenille[indice] = chenille[indice + 1];
            }
            chenille[indice] = aux;

            for (indice = 0; indice < 7; indice++) {
                Allumer(0, indice+1, chenille[indice]);
                Allumer(7, indice, chenille[6-indice]);
                Allumer(indice, 0, chenille[6 - indice]);
                Allumer(indice+1, 7, chenille[indice]);
                
            }
            usleep(300000);
            touche = ScannerJoystick();



        }
        do {
            touche = ScannerJoystick();
            Effacer();
        } while (touche != KEY_ENTER);
        touche = 0;
    } while (1);



    return (EXIT_SUCCESS);
}




