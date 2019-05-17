/* 
 * File:   main.c
 * Author: abourrelly
 *
 * Created on 4 octobre 2018, 10:40
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
    int posX = 4;
    int posY = 4;

    int posXtresor = 2;
    int posYtresor = 6;

    int preX;
    int preY;
    int touche;
    int sortie = FAUX;

    InitialiserLeds();
    InitialiserJoystick();


    do {
        Allumer(posX, posY, ROUGE);
        Allumer(posXtresor, posYtresor, ORANGE);
        touche = ScannerJoystick();

        switch (touche) {
            case KEY_ENTER:
                sortie = VRAI;
                break;
            case KEY_RIGHT:
                preY = posY;
                preX = posX;
                posY++;
                if (posY > 7) {
                    posY = 7;
                }
                break;
            case KEY_LEFT:
                preY = posY;
                preX = posX;
                posY--;
                if (posY < 0) {
                    posY = 0;
                }

                break;
            case KEY_DOWN:
                preY = posY;
                preX = posX;
                posX++;
                if (posX > 7) {
                    posX = 7;
                }
                break;
            case KEY_UP:
                preY = posY;
                preX = posX;
                posX--;
                if (posX < 0) {
                    posX = 0;
                }
                break;
        }
        if (posY == posYtresor && posX == posXtresor) {
            Effacer();
            Allumer(posXtresor, posYtresor, VERT);
            usleep(500000);
            posXtresor = rand() % 8;
            posYtresor = rand() % 8;
            
        }
        Allumer(preX, preY, NOIR);
    } while (sortie == FAUX);
    return (EXIT_SUCCESS);
}