/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: abourrelly
 *
 * Created on 1 octobre 2018, 11:16
 */

#include <stdio.h>
#include <stdlib.h>
#include <senseHat.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int colonne;
    int ligne;
    int touche = 0;

    InitialiserLeds();
    InitialiserJoystick();
    do {
        ligne = 0;
        while (touche != KEY_ENTER && ligne <= 7) {
            Effacer();
            for (colonne = 0; colonne <= ligne; colonne++) {
                Allumer(ligne, colonne, BLEU);
                Allumer(colonne, ligne, BLEU);
            }
            usleep(200000);
            ligne = ligne + 1;
            touche = ScannerJoystick(

        }
        do {
            touche = ScannerJoystick();
        } while (ligne != 8 && touche != KEY_ENTER);
        touche = 0;
    } while (1);

    return (EXIT_SUCCESS);

}

