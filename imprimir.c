#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int imprimir(double * d, int tam){

    int i = 0;
    printf("Lista: ");
    for(i=0; i<tam; i++){
        printf("%lf, ", d[i]);
    }

    printf("\n");
    return 0;
}