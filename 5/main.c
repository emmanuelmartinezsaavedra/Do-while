/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: yuris
 *
 * Created on 20 de septiembre de 2020, 04:20 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int a=2,suma;
    do{
        a=a+3;
        if(a%5==0)
            suma=suma+a;
        printf("%d\n", a);
    }while(a<50);
    printf("El total de la suma es: %d", suma);

    return (EXIT_SUCCESS);
}

