/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: abourrely
 *
 * Created on 5 novembre 2018, 09:13
 */

#include <stdio.h>
#include <stdlib.h>
#define N 5


/*
 * 
 */
int main(int argc, char** argv) {
    
    int indice;
    int memoire;
    int indiceDuPetit;
    int tab[N]={5,7,2,1,4};
    indiceDuPetit = 0;
    
    
    for(indiceDuPetit=0; indiceDuPetit <= N-2; indice++)
    {
        for(indice = indiceDuPetit; indice <= N-1; indice ++)
        {
           if(tab[indiceDuPetit]>tab[indice])
           {
               tab[indiceDuPetit] = tab[indice];
               tab[indice] = memoire;
           }
        }
    }
     
    for (indice = 0; indice <N; indice ++)
    {
        printf("%d",tab[indice]);
    }

    return (EXIT_SUCCESS);
}