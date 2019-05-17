#include <stdio.h>
#include <stdlib.h>
#include "adherent.h"
#define MAXELEM 5000

int main(int argc, char** argv) {
    typeAdherent* tableau[MAXELEM]; //Q9
    int compteurAdherent = 0;       //Q10
    char choix;
    int i=0;
    int id = 0;
   
   
    do{
        system("clear");  // efface l'écran
        afficheMenu(compteurAdherent);
        scanf(" %c", &choix);
        switch(choix){
            case 'A':
              tableau[compteurAdherent] = creerUnAdherent();
              compteurAdherent++; 
              break;
             
            case 'V':
               id=rechercherNumAdherent(tableau,compteurAdherent);
               afficherAdherentParN(tableau,id);
              continuer();
              break;
             
            case 'L':
                afficherAdherents(tableau,compteurAdherent);
                continuer();
                break;
               
            case 'S':
                printf("Numéro de license de l'adhérent : \n");
                id=rechercherNumAdherent(tableau,compteurAdherent);
                supprimerUnAdherent(tableau,id,compteurAdherent);
                continuer();
                break;
            case 'E':
                supprimerTousLesAdherent(tableau,compteurAdherent);
                continuer();
                break; 
            case 'M':
                id=rechercherNumAdherent(tableau,compteurAdherent);
                modifierAdherent(tableau,id);
                continuer();
                break;
               
        }
    }
    while(choix != 'Q');

    return (EXIT_SUCCESS);
}

