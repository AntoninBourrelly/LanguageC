/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: abourrelly
 *
 * Created on 27 septembre 2018, 10:41
 */

#include <stdio.h>
#include <stdlib.h>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int valeurNum;
    int entierPositif;
    int resultat;
    printf("Entrez une valeur numérique : ");
    valeurNum = 5;
    printf("%d\n", valeurNum);
    printf("Entrez une valeur entière positive : ");
    entierPositif = 3;
    printf("%d\n", entierPositif);
    resultat = 0;
    do {
        resultat = resultat + valeurNum;
        entierPositif = entierPositif - 1;
    } while (entierPositif > 0);
    printf("le résultat est : %d\n", resultat);
    return 0;
}

