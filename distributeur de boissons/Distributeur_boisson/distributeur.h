/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   distributeur.h
 * Author: abourrelly
 *
 * Created on 8 novembre 2018, 09:19
 */

#ifndef DISTRIBUTEUR_H
#define DISTRIBUTEUR_H

#define NB_BOISSONS 5
#define NB_PIECES 5

#define FAUX 0
#define VRAI 1


int ChoisirBoisson(char *nom[], int prix[]);

int EffectuerPayement(int prixBoissonCent, int valeurPiecesCent[], int pieceDonnee[], int pieceEnStock[]);

int RendreMonnaie (int montant, int valPiece[], int pieceRendu[], int pieceEnStock[],int pieceDonnee[]);


#endif /* DISTRIBUTEUR_H */

