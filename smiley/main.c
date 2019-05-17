/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: abourrelly
 *
 * Created on 15 octobre 2018, 10:43
 */

#include <stdio.h>
#include <stdlib.h>
#include <senseHat.h>

#define N NOIR
#define J JAUNE
#define V 0x386F48
#define R ROUGE

/*
 * 
 */
int main(int argc, char** argv) {
    int touche;
    int ligne;
    int colonne;

    uint16_t image1[8][8] = {
        {N, J, J, J, J, J, J, N},
        {J, V, J, J, J, J, V, J},
        {J, J, J, J, J, J, J, J},
        {J, J, J, V, V, J, J, J},
        {J, J, J, J, J, J, J, J},
        {J, J, V, J, J, V, J, J},
        {N, J, J, V, V, J, J, N},
        {N, N, J, J, J, J, N, N}
    };

    uint16_t image2[8][8] = {
        {N, J, J, J, J, J, J, N},
        {J, R, J, J, J, J, R, J},
        {J, J, J, J, J, J, J, J},
        {J, J, J, R, R, J, J, J},
        {J, J, J, J, J, J, J, J},
        {J, J, J, R, R, J, J, J},
        {N, J, R, J, J, R, J, N},
        {N, N, J, J, J, J, N, N}
    };
    InitialiserJoystick();
    InitialiserLeds();
    do {


        for (ligne = 0; ligne <= 7; ligne++) {
            for (colonne = 0; colonne <= 7; colonne++) {
                Allumer(ligne, colonne, image1[ligne][colonne]);


            }




        }
        sleep(1);
        for (ligne = 0; ligne <= 7; ligne++) {
            for (colonne = 0; colonne <= 7; colonne++) {
                Allumer(ligne, colonne, image2[ligne][colonne]);


            }




        }
        sleep(1);
        touche = ScannerJoystick();



    } while (touche != KEY_ENTER);





    return (EXIT_SUCCESS);
}

