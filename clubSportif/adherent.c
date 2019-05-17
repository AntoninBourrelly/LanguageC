#include "adherent.h"
#include "time.h"

// Fonction pour afficher le menu
void afficheMenu(int nbAdherent){
    printf("Que voulez-vous faire ?\n");

    if(nbAdherent == 0)
    {
        printf(" A -> Ajouter une fiche adhérent\n");
        printf(" Q -> Quitter\n\n");
    }
    else
    {
        printf(" A -> Ajouter une fiche adhérent\n");
        printf(" S -> Supprimer une fiche\n");
        printf(" M -> Modifier une fiche\n");
        printf(" V -> Voir le contenu d'une fiche\n");
        printf(" L -> Voir le contenu de l'ensemble des fiches\n");
        printf(" E -> Supprimer toutes les fiches\n");
        printf(" X -> Sauvegarder toutes les fiches\n");
        printf(" Q -> Quitter\n\n");
    }
printf("Votre choix : ");
}


typeAdherent *creerUnAdherent(){
    typeAdherent *unAdherent;
    typeDate *uneDate;
     // réservation de la mémoire
    unAdherent = (typeAdherent *)malloc(1* sizeof(typeAdherent));
    uneDate = (typeDate *)malloc(1* sizeof(typeDate));
    printf("Donnez le nom : \n");
    scanf("%s", unAdherent->nom );
    printf("Donnez le prénom : \n");
    scanf("%s", unAdherent->prenom );
    printf("Donnez le Jour de naissance : ");
    scanf("%d",&unAdherent->naissance.jour);
    printf("Donnez le Mois de naissance : ");
    scanf("%d",&unAdherent->naissance.mois);
    printf("Donnez l'Année de naissance : ");
    scanf("%d",&unAdherent->naissance.annee);
    printf("Donnez le n° de liçence : \n");
    scanf("%d", &unAdherent->noLicence );
    printf("Donnez l'activité : \n");
    printf(" Natation   : 0\n");
    printf(" Basketball : 1\n");
    printf(" Aviron     : 2\n");
    printf(" Athlétisme : 3\n");
    printf(" Tennis     : 4\n");
    scanf("%u", &unAdherent->discipline[0] );
   
   
   
    printf("\nVous êtes incrit.\n\n");
    sleep(2);
    return unAdherent;
}

void afficherAdherent(typeAdherent *unAdherent){
    if(unAdherent != NULL){
       
   
    printf("%s\t%s\t%d\t",
            unAdherent->nom,
            unAdherent->prenom,
            unAdherent->noLicence
            );
    afficherDate(unAdherent->naissance);
    afficherActivite(unAdherent->discipline[0]);
    }
}
// Question n°11
void afficherAdherents(typeAdherent *tab[],int nb){
    int i;
    for(i=0; i<nb; i++){
        afficherAdherent(tab[i]);
    }
}

void continuer(){
   
    printf("\nPour continuer appuyez sur une touche\n");
    getchar();
    getchar();
}

void afficherDate(typeDate uneDate){
    printf("%d/%d/%d\t",uneDate.jour,uneDate.mois,uneDate.annee);
}

void afficherActivite(activite uneActivite){
   
    switch(uneActivite){
        case NATATION:printf("Natation");break;
        case ATHLETISME:printf("Athlétisme\n");break;
        case BASKETBALL:printf("Basketball\n");break;
        case AVIRON:printf("Aviron\n");break;
        case TENNIS:printf("Tennis\n");break;
        default:printf("Activité inconnue\n");
    }
}

//Question 12
int supprimerUnAdherent(typeAdherent *tab[],int nro,int nb){
   
    free(tab[nro]);
    tab[nro] = NULL;
    //Décaler tous les adhérents
   
    for(int i=nro;i<nb-1;i++){
        tab[i] = tab[i+1];
    }
    return nb-1;
   
}

void supprimerTousLesAdherent(typeAdherent *tab[],int nb){
   
    for(int i = 0;i < nb;i++){
       
        free(tab[i]);
        tab[i] = NULL;
       
    }
   
}

int rechercherNumAdherent(typeAdherent *tab[], int nb){
    unsigned int numSaisi;
    int i;
    int indAdherent = -1;

    printf("Indiquez les 4 chiffres du numéro de licende de l'adhérent\n");
    scanf("%u", &numSaisi);
    getchar();

    for (i = 0; i < nb; i++) {
        if (numSaisi == (tab[i]->noLicence)) {
            printf("Fiche n°%d\n",  i );
            indAdherent = i;
        }
    }
    return indAdherent;
}

void modifierAdherent(typeAdherent * tab[], int i){
    printf("\nNouveau nom de l'Adhérent: ");
    scanf("%s", tab[i]->nom);
    printf("\nNouveau prénom de L'adhérent: ");
    scanf("%s", tab[i]->prenom);
    printf("\nNouveau jour de naissance: ");
    scanf("%d", &tab[i]->naissance.jour);
    printf("\nNouveau mois de naissance: ");
    scanf("%d", &tab[i]->naissance.mois);
    printf("\nNouvelle année de naissance:");
    scanf("%d", &tab[i]->naissance.annee);
    printf("\nNouvelle activités: ");
    printf("Donnez l'activité : \n");
    printf(" Natation   : 0\n");
    printf(" Basketball : 1\n");
    printf(" Aviron     : 2\n");
    printf(" Athlétisme : 3\n");
    printf(" Tennis     : 4\n");
    scanf("%d", &tab[i]->nbDiscipline);
    printf("\nNouveaux numéros de licence: ");
    scanf("%d", &tab[i]->noLicence);
}

void afficherAdherentParN(typeAdherent *tab[],int i){
    if(tab[i] != NULL){
       
   
    printf("%s\t%s\t%d\t",
            tab[i]->nom,
            tab[i]->prenom,
            tab[i]->noLicence
            );
    afficherDate(tab[i]->naissance);
    afficherActivite(tab[i]->discipline[0]);
    }
   
}

/*---------------------------------------------------------------*/

void sauvegarderAdherents(typeAdherent *tab[], int nbAdherent){
    
}