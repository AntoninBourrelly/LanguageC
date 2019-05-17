/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: abourrelly
 *
 * Created on 5 novembre 2018, 09:49
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int unEntier = 5;
    float unReel = 10.4;
    printf("--- Entier ---\n");
    printf("%d\n%4d\n%04d\n", unEntier, unEntier, unEntier);
    printf("\n--- Réel ---\n");
    printf("%f\n%6.2f\n%.2e\n", unReel, unReel, unReel);
    return 0;
}

