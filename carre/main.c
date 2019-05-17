/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: abourrelly
 *
 * Created on 27 septembre 2018, 11:10
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) 
{
    int nombreLu;
    int somme;
    int coefficient;
    printf("Entrez une valeur numérique : ");
    nombreLu = 3;
    printf("%d\n", nombreLu); 
    coefficient = 2 * nombreLu - 1;
    somme = coefficient;
    do
    {
        coefficient = coefficient - 2;
        somme = somme + coefficient;
    } while(coefficient > 1);
    printf("le résultat est : %d\n", somme);
            
    return (EXIT_SUCCESS);
}

