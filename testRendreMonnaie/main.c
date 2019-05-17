/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: abourrelly
 *
 * Created on 13 novembre 2018, 11:18
 */

#include <stdio.h>
#include <stdlib.h>

#include "monnaie.h"

/*
 * 
 */
int main(int argc, char** argv) {

    int montant = 70;
    int valeurPieces[5]={200 , 100 , 50 , 20 , 10};
    int stockPieces[5]={5,5,5,0,0};
    int pieceRendues[5];
    int pieceDonnee[5]={3,4,5,2,0};
    
    
    int retour = RendreMonnaie(montant,valeurPieces,pieceRendues,stockPieces,pieceDonnee);
  
    return (EXIT_SUCCESS);
}

