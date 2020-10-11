/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: yuris
 *
 * Created on 20 de septiembre de 2020, 04:10 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    float x,suma;
    float media,num;
    printf("Ingresar los nueros reales");
    do{
        scanf("%f",&x);
        suma=suma+x;
        num++;
    }while(x!=-1.0);
    media=(suma+1)/(num-1);
    printf("%.2f", media);

    return (EXIT_SUCCESS);
}

