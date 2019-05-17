/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#define VRAI 1
#define FAUX 0
#define NB_PIECE 5

int RendreMonnaie(int montant, int valPiece[], int pieceRendu[], int pieceEnStock[], int pieceDonnee[]) {

    int indice = 0;
    int retour = FAUX;
    int somme = 0;
    int sortie = FAUX;
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
        printf("Total rendu : %d centimes\n", somme);
    } else {
        printf("Nous faisons face à  un problème nous vous devons encore %d centimes\n", prixini - somme);
        for (indice = 0; indice <= NB_PIECE - 1; indice++) {
            if (pieceDonnee[indice] > 0) {
                while (pieceDonnee[indice] > 0) {
                    sommedonnee = valPiece[indice] + sommedonnee;
                    pieceDonnee[indice]-=1;
                }

            }
        }
        printf("Nous allons vous redonnez vos %d centimes\n", sommedonnee);
    }
    return retour;
}