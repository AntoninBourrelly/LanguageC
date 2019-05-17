/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#include <stdlib.h>

#include "omnisport.h"

void AfficherMenu() {
    int choix = 0;
    int indice = 0;
    int nbAdherent = 0;
    char choixMenu;

    do {
        printf("Fonctions possibles : \n");

        printf("\n\t\tA ---> Ajouter une fiche adhérent");
        if (nbAdherent != 0) {
            printf("\n\t\tS ---> Supprimer une fiche");
            printf("\n\t\tM ---> Modifier une fiche");
            printf("\n\t\tV ---> Voir le contenu fiche");
            printf("\n\t\tL ---> Voir le contenu de l'ensemble des fiches");
            printf("\n\t\tE ---> Supprimer toutes les fiches");
        }
        printf("\n\t\tQ ---> Quitter le menu\n");
        printf("\nChoix : \n");
        scanf("%c", &choix);
        getchar();

        if (nbAdherent != 0) {
            switch (choix) {
                case 'A': printf("\nFonction ajouter\n");
                    nbAdherent++;
                    break;

                case 'S': printf("\nFonction ajouter\n");
                    break;

                case 'M': printf("\nFonction ajouter\n");
                    break;

                case 'V': printf("\nFonction ajouter\n");
                    break;

                case 'L': printf("\nFonction ajouter\n");
                    break;

                case 'E': printf("\nFonction ajouter\n");
                    break;

                case 'Q': printf("\nFonction ajouter\n");
                    break;

                default: printf("\n Erreur vous vous êtes trompez, Recommencez");
                    break;
            }
        }
        switch (choix) {
            case 'A': printf("\nFonction ajouter\n");
                nbAdherent++;
                break;

            case 'Q': printf("\nFonction ajouter\n");
                break;

            default: printf("\n Erreur vous vous êtes trompez, Recommencez");
                break;
        }


    } while (choix != 'Q');
}

void AfficherDate(typeDate date){
    printf("\tLa date de n'aissance de l'adhérent est : ");
    printf("%d/%d/%d\n",date.jour,date.mois,date.annee);
}
 

void AfficherActivite(sports activite) {

       char *tabsports[NBMAXSPORTS] = {"NATATION", "HANDBALL", "AVIRON", "TENNIS", "ATHLETISME"};
       
       printf("%s ", tabsports[activite]);
}

/*void afficherUnAdherent(typeAdherent *ad) {
    unsigned int indActivite;
    
    printf("\n\tLe nom de l'adherent est : %s\n", ad->nom);
    printf("\tLe prénom de l'adhérent est : %s \n", ad->prenom);
    AfficherDate(ad->dateNaissance);
    printf("\n\tLe nombre d'activités patiquées par l'adhérent : ");
    for (indActivite = 0; indActivite < ad->nbActivites; indActivite++){
        AfficherActivite(ad -> sports[indActivite]);
    }
}*/