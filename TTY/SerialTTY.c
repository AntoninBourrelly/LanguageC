/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <sys/termios.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#define LONG 255

int OuvrirPort(char *serialPort[]) {
    int port;

    if ((port = open(*serialPort, O_RDWR)) == 1) {
        perror("Erreur ouverture du port série");
        exit(errno);
    }
}

void ConfigurerPort() {

    struct termios tty;
    tty.c_iflag = IGNBRK | IGNPAR;
    tty.c_oflag = 0x00;
    tty.c_cflag = CREAD | CLOCAL;
    tty.c_cflag &= ~CRTSCTS;
    tty.c_lflag &= ~ICANON | ~ECHO;
    tty.c_cc[VMIN] = 1;
    tty.c_cc[VTIME] = 0;

}