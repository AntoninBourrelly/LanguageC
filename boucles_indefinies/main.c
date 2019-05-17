/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: abourrelly
 *
 * Created on 1 octobre 2018, 11:06
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
    int touche;

    InitialiserLeds();
    InitialiserJoystick();
    do {
        for (ligne = 0; ligne <= 7; ligne++) {
            for (colonne = 0; colonne <= 7; colonne++) {
                Allumer(ligne, colonne, BLEU);
                Allumer(colonne, ligne, BLEU);
            }
            usleep(200000);
            Effacer();
        }
        touche = ScannerJoystick();
    } while(touche!= KEY_ENTER);
    
    return (EXIT_SUCCESS);
}

