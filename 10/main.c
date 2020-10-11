/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: yuris
 *
 * Created on 21 de septiembre de 2020, 12:59 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int x,y;
    do{
        x++;
        y=0;
        printf("\n");
        do{
            y++;
            printf("%d * %d = %d\n", x,y,(x*y));
        }while(y<10);
    }while(x<10);

    return (EXIT_SUCCESS);
}

