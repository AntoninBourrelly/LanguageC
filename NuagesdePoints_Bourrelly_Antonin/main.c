/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: abourrelly
 *
 * Created on 9 novembre 2018, 15:55
 */

#include <stdio.h>
#include <stdlib.h>
#define NB_RELEVE 5

/*
 * 
 */

int main(int argc, char** argv) {

    int indice;
    float valMoy;
    float valMin = 100000000;
    float valMax = 0;
    int indicePetit;
    int indiceGrand ;
    int nuagePoints[NB_RELEVE];
    float somme = 0;


    for (indice = 0; indice <= NB_RELEVE - 1; indice++) {
        printf("Entrez une valeur : ");
        scanf("%u", &nuagePoints[indice]);
    }

    for (indice = 0; indice <= NB_RELEVE - 1; indice++) {

        if (nuagePoints[indice] < valMin) {
            valMin = nuagePoints[indice];
            indicePetit = indice;
            
            
        } 
        
        if (nuagePoints[indice] > valMax) {

            valMax = nuagePoints[indice];
            indiceGrand = indice;
            
        }
    }
   

    for (indice = 0; indice <= NB_RELEVE - 1; indice++) {
        somme=somme + nuagePoints[indice];
    }

    somme = somme - nuagePoints[indicePetit] - nuagePoints[indiceGrand];
    
    valMoy = somme / (NB_RELEVE - 2);

    printf("La moyenne est %.2f\n", valMoy);
    printf("La valeur la plus petite %.2f a été enlever\n", valMin);
    printf("La valeur la plus grande %.2f a été enlever\n", valMax);


    return (EXIT_SUCCESS);
}