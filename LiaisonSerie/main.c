/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: abourrelly
 *
 * Created on 10 décembre 2018, 08:35
 */

#include <stdio.h>
#include <stdlib.h>
#include "biblio_serie.h"

/*
 * 
 */
int main(int argc, char** argv) {

    int fdSerie;
    char message[1000];
    fdSerie = OuvrirSerie("/ttyS0");
    ConfigurerSerie(fdSerie, 9600);
    envoyerCaractere(fdSerie, 'A');
    envoyerCaractere(fdSerie, 'B');
    
    recevoirMessage(fdSerie, '\n');
    return (EXIT_SUCCESS);
}

