/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: yuris
 *
 * Created on 10 de octubre de 2020, 09:11 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int i,j,cont=0;
    
    do{
        
        i++;
        do{
            printf("Interaccion %d\n", cont+1);
            
            j--;
            cont=cont+1;
            
        }while(j>8);
        
    }while(i<3);
    
    printf("\n");
   
    cont=0;
    do{
        
        i++;
        do{
            printf("Interaccion %d\n", cont+1);
            
            i--;
            cont=cont+1;
        }while(i>8);
        
    }while(i<3);
    printf("\n");
    
    cont=0;
    do{
        
        i++;
        do{
            printf("Interaccion %d\n", cont+1);
            
            j++;
            cont=cont+1;
        }while(j<=2);
        
    }while(i<3);
    

    return (EXIT_SUCCESS);
}

