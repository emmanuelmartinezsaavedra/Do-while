/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: yuris
 *
 * Created on 20 de septiembre de 2020, 12:26 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int a,i1,i2,suma;
    printf("Ingresar el numero");
    scanf("%d", &i1);
    do{
        i2=i1*i1*i1;
        suma=suma+i2;
        i1--;
    }while(i1>0);
    printf("\n%d", suma);

    return (EXIT_SUCCESS);
}

