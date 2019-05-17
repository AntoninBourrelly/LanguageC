/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: abourrelly
 *
 * Created on 18 octobre 2018, 09:09
 */

#include <stdio.h>
#include <stdlib.h>
#include <senseHat.h>
#define FAUX 0
#define VRAI 1

/*
 * 
 */
int main(int argc, char** argv) {

    int ligne;
    int colonne;
    int touche;
    int posY;
    int balX;
    int balY;
    int depX;
    int depY;
    int preY;
    int preX;
    int sortie = FAUX;


    InitialiserLeds();
    InitialiserJoystick();
    posY = 3;
    balX = 3;
    balY = 6;
    depX = -1;
    depY = -1;

    while (touche != KEY_ENTER) {

        do {

            for (ligne = 0; ligne < 2; ligne++) {
                for (colonne = 0; colonne < 8; colonne++) {
                    Allumer(ligne, colonne, ROUGE);
                }
            }
            Allumer(7, posY, BLEU);
            Allumer(7, posY + 1, BLEU);
            Allumer(7, posY - 1, BLEU);
            Allumer(balY, balX, JAUNE);



            touche = ScannerJoystick();

            switch (touche) {
                case KEY_ENTER:
                    sortie = VRAI;
                    break;
                case KEY_LEFT: posY = posY - 1;
                    Effacer();
                    if (posY < 1) {
                        posY = 1;
                    }
                    break;
                case KEY_RIGHT: posY = posY + 1;
                    Effacer();
                    if (posY > 6) {
                        posY = 6;
                    }
                    break;
            }

           /* preX = balX;
            preY = balY;
            balX = balX + depX;
            balY = balY + depY;
            Allumer(preY, preX, NOIR);*/


        } while (sortie == FAUX);
        Effacer();
    }

    return (EXIT_SUCCESS);

}

