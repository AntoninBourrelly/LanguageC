#ifndef ADHERENT_H
#define ADHERENT_H

#include <stdio.h>
#include <stdlib.h>
#define MAX 255

typedef enum{NATATION, BASKETBALL, AVIRON, ATHLETISME, TENNIS}
activite;

typedef struct{
    int jour;
    int mois;
    int annee;
}typeDate;

typedef struct{
   char nom[MAX];
   char prenom[MAX];
   typeDate naissance;
   int nbDiscipline;
   activite discipline[5];
   int noLicence;
}typeAdherent;

// Fonction pour afficher le menu
void          afficheMenu(int nbAdherent);
void          continuer();
void          afficherDate(typeDate uneDate);
void          afficherActivite(activite uneActivite);
typeAdherent  *creerUnAdherent();
void          afficherAdherent(typeAdherent *unAdherent);
void afficherAdherents(typeAdherent *tab[],int nb);
void afficherAdherentParN(typeAdherent *tab[],int i);
int supprimerUnAdherent(typeAdherent *tab[],int nro,int nb);
void supprimerTousLesAdherent(typeAdherent *tab[],int nb);
int rechercherNumAdherent(typeAdherent *tab[], int nb);
void modifierAdherent(typeAdherent * tab[], int indice);
/*---------------------------------------------------------------*/
void sauvegarderAdherents(typeAdherent *tab[], int nbAdherent);

#endif /* ADHERENT_H */