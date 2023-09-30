#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int inserir (double ** d, int* tam, double elem){

    (*tam)++;
    *d = realloc(*d, (*tam)*sizeof(double));
    
    if (*d == NULL) {
        printf("Erro de alocação\n");
        return(1);}

  //  printf("Alocação bem sucedida\n");
    (*d)[(*tam-1)]= elem;

    return 0;

}