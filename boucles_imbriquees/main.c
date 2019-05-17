/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: abourrelly
 *
 * Created on 1 octobre 2018, 10:44
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

    InitialiserLeds();

    for (ligne = 0; ligne <= 7; ligne++) {
        for (colonne = 0; colonne <= 7; colonne++) {
            Allumer(ligne, colonne, JAUNE);
            Allumer(colonne,ligne, JAUNE);
          
        }  


    }
    
    for (ligne = 7; ligne >= 0; ligne=ligne-1) {
        for (colonne = 7; colonne >= 0; colonne=colonne=colonne-1) {
            Allumer(ligne, colonne, JAUNE);
            Allumer(colonne,ligne, JAUNE);
          
        }  


    }

    return (EXIT_SUCCESS);
}

