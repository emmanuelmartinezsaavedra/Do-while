/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: yuris
 *
 * Created on 20 de septiembre de 2020, 04:24 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    char frase;
    printf("Introduzca la cadena de caracteres finalizada en punto");
    do{
        scanf("%c", &frase);
        switch(frase){
            case 'a': frase='e'; break;
            case 'e': frase='i'; break;
            case 'i': frase='o'; break;
            case 'o': frase='u'; break;
            case 'u': frase='a'; break;
            
        }
        printf("%c", frase);
    }while(frase!='.');
    

    return (EXIT_SUCCESS);
}

