/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: abourrelly
 *
 * Created on 11 octobre 2018, 10:29
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define NB_ELEVES 7
/*
 * 
 */
int indice = 0;
int moy = 0;
int somme = 0;
int noteMax = 0;
int noteMin = 20;
int note[NB_ELEVES] = {10, 5, 4, 8, 15, 6, 11};
int noteS;

int main(int argc, char** argv) {

    for (indice=0; indice <= NB_ELEVES - 1; indice++) {
        printf("L'élève n° %d", indice);
        printf(" a eu la note de %d\n", note[indice]);
        if (note[indice] >= 10) {
            noteS = noteS + 1;
        }
        somme = somme + note[indice];

        if (note[indice] < noteMin) {
            noteMin = note[indice];
        }

        if (note[indice] > noteMax) {
            noteMax = note[indice];
        }
    }

    moy = somme / NB_ELEVES;
    printf("Il y a  %d", noteS);
    printf(" note supérieur à 10\n");
    printf("La moyenne est de %d", moy);
    return (EXIT_SUCCESS);
}

