/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   biblio_serie.h
 * Author: abourrelly
 *
 * Created on 10 décembre 2018, 08:36
 */

#ifndef BIBLIO_SERIE_H
#define BIBLIO_SERIE_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <errno.h>
#include <termios.h>
#include <sys/ioctl.h>

int OuvrirSerie(const char *device);
void ConfigurerSerie(int fd, const int baud);
void recevoirMessage(int fd, char *message, char fin);
void flush(const int fd);
void envoyerCaractere(const int fd, const unsigned char c);








#endif /* BIBLIO_SERIE_H */

