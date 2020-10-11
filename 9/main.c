/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: yuris
 *
 * Created on 20 de septiembre de 2020, 05:19 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int x,y;
    printf("Ingresa un numero del 1 al 10:\n");
    scanf("%d", &x);
    do{
        printf("No es un numero del 1 al 10\n");
        printf("Vuelva a introducir un numero del 1 al 10\n");
        scanf("%d", &x);
    }while((x<1) ||  (x>10));
    do{
        y=y+1;
        printf("%d * %d: %d\n",x,y,(x*y));
    }while(y<10);

    return (EXIT_SUCCESS);
}

