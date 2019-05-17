/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   omnisport.h
 * Author: abourrelly
 *
 * Created on 10 décembre 2018, 10:18
 */

#ifndef OMNISPORT_H
#define OMNISPORT_H
#define LONG 255
#define NBMAXSPORTS 5

typedef struct {
    int jour;
    int mois;
    int annee;

} typeDate;

typedef enum {
    NATATION, HANDBALL, AVIRON, TENNIS, ATHLETISME
} sports;

typedef struct {
    char nom[LONG];
    char prenom[LONG];
    typeDate dateNaissance;
    int nbActivites;
    sports discipline[5];
    char noLicence[LONG];

} typeAdherent;


void AfficherMenu();
void AfficherDate();

void AfficherActivite(sports activite);

void afficherUnAdherent(typeAdherent *ad);


#endif /* OMNISPORT_H */

