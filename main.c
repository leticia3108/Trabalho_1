#include <stdio.h>
#include <stdlib.h>

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

int imprimir(double * d, int tam){

    int i = 0;
    printf("Lista: ");
    for(i=0; i<tam; i++){
        printf("%lf, ", d[i]);
    }

    printf("\n");
    return 0;
}

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

int main (){

    int tam = 0; // contagem de elementos

// Alocação da memória

    double *d = NULL;

   // d = malloc(tam*sizeof(double));

  /* if (d == NULL) {
        printf("Erro de alocação\n");
        return(1);}
  */ 

    

// Inserir elementos na lista

inserir(&d, &tam, 0.01);
inserir(&d, &tam, 0.02);
inserir(&d, &tam, 0.03);

// Remover elementos da lista

remover(&d, &tam, 0.02);

// Imprimir elementos da lista

imprimir(d, tam);

free(d);
return 0;

}

