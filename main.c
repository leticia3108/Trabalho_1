#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main (){

    int tam = 0; // contagem de elementos

// Alocação da memória

    double *d = NULL;

// Inserir elementos na lista

inserir(&d, &tam, 0.01);
inserir(&d, &tam, 0.02);
inserir(&d, &tam, 0.03);


// Imprimir elementos da lista

imprimir(d, tam);

// Remover elementos da lista

remover(&d, &tam, 0.02);

// Imprimir elementos da lista

imprimir(d, tam);

free(d);
return 0;

}

