#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int remover(double ** d, int* tam, double elem){

    int i = 0;
    
    while ((*d)[i]!=elem){
        i++;
    } 

    printf("Elemento %lf removido\n", (*d)[i]);

    while (i<*tam){
        (*d)[i]=(*d)[i+1];
        i++;
    }

    (*tam)--;

    *d = realloc(*d, (*tam)*sizeof(double));

       if (*d == NULL) {
        printf("Erro de alocação\n");
        return 1;
    }

}