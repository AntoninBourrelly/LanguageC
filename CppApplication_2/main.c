/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: abourrelly
 *
 * Created on 1 octobre 2018, 09:29
 */

#include <stdio.h>
#include <stdlib.h>
#include <senseHat.h>
/*
 * 
 */
int main(int argc, char** argv) {
    InitialiserLeds();
    
    Allumer(0,2,BLEU);
    Allumer(0,3,BLEU);
    Allumer(0,4,BLEU);
    Allumer(0,5,BLEU);
    
    Allumer(1,1,BLEU);
    Allumer(1,6,BLEU);
    
    Allumer(2,0,BLEU);
    Allumer(2,7,BLEU);
    
    Allumer(3,0,BLEU);
    Allumer(3,3,VERT);
    Allumer(3,4,VERT);
    Allumer(3,7,BLEU);
    
    Allumer(4,0,BLEU);
    Allumer(4,3,VERT);
    Allumer(4,4,VERT);
    Allumer(4,7,BLEU);
    
    Allumer(5,0,BLEU);
    Allumer(5,7,BLEU);
    
    Allumer(6,1,BLEU);
    Allumer(6,6,BLEU);
    
    Allumer(7,2,BLEU);
    Allumer(7,3,BLEU);
    Allumer(7,4,BLEU);
    Allumer(7,5,BLEU);
    
    
    int position;
    InitialiserJoystick();
    
    position = ScannerJoystick();
    
    
            
    
    printf("Hello world!\n");
    printf(position);
    return (EXIT_SUCCESS);
}

