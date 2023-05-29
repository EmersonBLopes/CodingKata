#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

/**
 * criar uma matriz A que armazene 10 elemetos inteiros. Construir uma matriz de mesmo tamanho e tipo que armazene a metade do elemento de indice equivalente da matriz A
 **/

int main(void){

    //alocando memoria
    int *a = (int *) calloc(10, sizeof(int));
    int *b = (int *) calloc(10, sizeof(int));

    //leitura de valores
    for(int i = 0; i < 10; i++){
        printf("Digite o valor de A[%d]:",i);
        scanf("%d",&a[i]);
    }

    //processamento
    for(int i = 0; i < 10; i++) b[i] = a[i] * 0.5;

    for(int i = 0; i < 10; i++){
        assert((a[i] - b[i]) == b[i]);
    }

    //saida
    for(int i = 0; i < 10; i++) printf("A[%d] = %d || B[%d] = %d\n",i,a[i],i,b[i]);
    return 0;
}

