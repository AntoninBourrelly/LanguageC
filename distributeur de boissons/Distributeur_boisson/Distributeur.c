/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <stdio.h>
#define NB_PIECE 5
#include "distributeur.h"

int ChoisirBoisson(char *nom[], int prix[]) {
    int indice;
    int choix;
    do {
        system("clear");
        printf("| Choix Boisson |\n");
        printf("-----------------\n\n");
        for (indice = 1; indice <= NB_BOISSONS; indice++) {
            printf("%d - %s \t(%.2f)\n", indice, nom[indice - 1], (float) prix[indice - 1] / 100.0);
        }
        printf("\n0 - Annuler\n\n");
        printf("Votre Choix : ");



        scanf("%d", &choix);

    } while (choix < 0 || choix > NB_BOISSONS);
    system("clear");
    if (choix > 0 && choix <= 5) {
        printf("Boisson Choisie : %s \t(%.2f)\n", nom[choix - 1], (float) prix[choix - 1] / 100.0);
    } else {
        printf("Demande Annulée");
    }
    sleep(2);

    return choix - 1;
}

int EffectuerPayement(int prixBoissonCent, int valeurPiecesCent[], int pieceDonnee[], int pieceEnStock[]) {
    int indice;
    int prix;
    int choix;
    int sortie = FAUX;

    prix = prixBoissonCent;
    do {
        system("clear");
        printf("|    Paiement    |\n");
        printf("-----------------\n\n");
        printf("Montant à regler: %.2f €\n", (float) prix / 100.0);

        for (indice = 1; indice <= NB_PIECES; indice++) {
            printf("%d - Pièce de \t%.2f €\n", indice, (float) valeurPiecesCent[indice - 1] / 100.0);

        }
        printf("\n0 -Pour annuler\n");

        scanf("%d", &choix);

        if (choix == 0) {
            sortie = VRAI;
        } else {
            prix = prix - valeurPiecesCent[choix - 1];
            pieceDonnee[choix - 1] += 1;
            pieceEnStock[choix - 1] += 1;
        }

    } while ((prix > 0 && sortie == FAUX));
    system("clear");
    if (prix < 0) {
        prix = prix * -1;
        printf("\n Argent à rendre : %.2f\n", (float) prix / 100.0);
    } else if (prix > 0) {
        printf("\n Argent à rendre : %.2f\n", (float) prix / 100.0);
    } else {
        printf("\n Le compte est bon\n");
    }
    sleep(2);


    return prix;
}

int RendreMonnaie(int montant, int valPiece[], int pieceRendu[], int pieceEnStock[], int pieceDonnee[]) {

    int indice = 0;
    int retour = FAUX;
    int somme = 0;
    int prixini = montant;
    int sommedonnee = 0;


    for (indice = 0; indice < NB_PIECE; indice++) {
        pieceRendu[indice] = 0;
    }

    indice = 0;

    while (montant > 0 && indice < NB_PIECE) {
        while (montant >= valPiece[indice] && indice < NB_PIECE && pieceEnStock[indice] > 0) {

            montant -= valPiece[indice];
            somme += valPiece[indice];
            pieceRendu[indice] += 1;
            pieceEnStock[indice] -= 1;


        }
        indice++;
    }
    if (montant == 0) {
        retour = VRAI;
        printf("Total rendu : %.2f euros\n", (float) somme / 100.0);
    } else {
        printf("Nous faisons face à  un problème nous vous devons encore %.2f euros\n", (float) (prixini - somme)/100.0);
        for (indice = 0; indice <= NB_PIECE - 1; indice++) {
            if (pieceDonnee[indice] > 0) {
                while (pieceDonnee[indice] > 0) {
                    sommedonnee = valPiece[indice] + sommedonnee;
                    pieceDonnee[indice] -= 1;
                    pieceRendu[indice] += 1;
                    pieceEnStock[indice] -= 1;
                }

            }
        }
        printf("Nous allons vous redonnez vos %.2f euros\n", (float) sommedonnee / 100.0);
        printf("Si vous voulez une boisson, veuillez introduire l'argent demandé\n"
                " ou demander à un technicien de remettre de l'argent\n");
    }

    for (indice = 0; indice < NB_PIECE; indice++) {
        printf("Nous avons rendu %d pièce(s) de %.2f euros\n", pieceRendu[indice], (float) valPiece[indice] / 100.0);
    }
    printf("\n");

    for (indice = 0; indice < NB_PIECE; indice++) {
        printf("Il reste %d pièce(s) de %.2f euros\n", pieceEnStock[indice], (float) valPiece[indice] / 100.0);
    }

    sleep(6);

    return retour;
}