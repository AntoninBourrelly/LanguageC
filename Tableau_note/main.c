/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: abourrelly
 *
 * Created on 5 novembre 2018, 08:13
5
 *  */

#include <stdio.h>
#include <stdlib.h>
#define NB_ELEVES 20

/*
 * 
 */
int main(int argc, char** argv) {
    int nbEleves;
    int indice = 0;
    float moy = 0;
    float somme = 0;
    int noteMax = 0;
    int noteMin = 20;
    int noteS;
    float notes[NB_ELEVES];

    printf("Entrez le nombre d'élève\n");
    scanf("%d", &nbEleves);

    for (indice = 0; indice < nbEleves; indice++) {
        printf("Entrez la valeur de la notes de l'élève n° %d\n",indice);
        scanf("%f", &notes[indice]);
    }

    for (indice = 0; indice <= nbEleves - 1; indice++) {
        printf("L'élève n° %d", indice);
        printf(" a eu la note de %f\n", notes[indice]);
        if (notes[indice] > 10) {
            noteS = noteS + 1;
        }
        somme = somme + notes[indice];

        if (notes[indice] < noteMin) {
            noteMin = notes[indice];
        }

        if (notes[indice] > noteMax) {
            noteMax = notes[indice];
        }
    }

    moy = somme / nbEleves;
    printf("Il y a  %d", noteS);
    printf(" note supérieur à 10\n");
    printf("La moyenne est de %f", moy);
    return (EXIT_SUCCESS);
}

