/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: abourrelly
 *
 * Created on 8 novembre 2018, 09:14
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "distributeur.h"

/*
 * 
 */
int main(int argc, char** argv) {

    int prixBoissonsCent[NB_BOISSONS] = {150, 150, 150, 100, 100};

    int valeurPiecesCent[NB_PIECES] = {200, 100, 50, 20, 10};

    int stockPieces[NB_PIECES] = {0, 0, 0, 0, 0};
    int pieceDonnee[NB_PIECES] = {0, 0, 0, 0, 0};
    int pieceRendues[NB_PIECES] = {0, 0, 0, 0, 0};

    do {

        int prixBoissonCent = 0;


        char * nomBoissons[NB_BOISSONS] = {"Café Sucré", "Café Lait",
            "Chocolat", "Lait Chaud",
            "Coca-Cola"};



        int boisson = ChoisirBoisson(nomBoissons, prixBoissonsCent);

        prixBoissonCent = prixBoissonsCent[boisson];
        int montant = EffectuerPayement(prixBoissonCent, valeurPiecesCent, pieceDonnee,stockPieces);

        if (montant != 0) {
            RendreMonnaie(montant, valeurPiecesCent, pieceRendues, stockPieces, pieceDonnee);
        }

        printf("\n\nMerci de votre commande.\nPasser une bonne journée.\n");

        sleep(3);

        system("clear");

    } while (1);
}

