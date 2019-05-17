/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: abourrelly
 *
 * Created on 18 octobre 2018, 10:50
 */

#include <stdio.h>
#include <stdlib.h>
#include <senseHat.h>

/*
 * 
 */
int main(int argc, char** argv) {
    InitialiserLeds();
    Allumer(7,3,ROUGE);
    uint16_t ObtenirPixel(7,3); 
    
    if(ObtenirPixel = ROUGE){
        Allumer(4,3,VERT);
    }
        
    return (EXIT_SUCCESS);
}

