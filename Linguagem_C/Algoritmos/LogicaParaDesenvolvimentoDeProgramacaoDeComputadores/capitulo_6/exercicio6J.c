#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

/**
 * Criar uma matriz A que le 20 elementos inteiros, criar uma matriz B de mesmo tipo e dimensao que cada indice da matriz B e equivalente ao somatorio de 1 ate o elemento da matriz A, por exemplo A[0] = 5 entao B[0] = 15 pois 1+2+3+4+5 = 15. Apresentar os elementos da matriz B
 **/

int main(void){

    //alocando memoria
    int *a = (int *) calloc(sizeof(int),20);
    int *b = (int *) calloc(sizeof(int),20);

    //leitura de valores
    for(int i = 0; i < 20; i++){
        a[i] = i;
    }

    //processamento
    for(int i = 0; i < 20; i++){ // loop que ira percorrer todos os indices do array

        for(int j = 1; j <= a[i]; j++) b[i] += j; //calcula o somatorio do indice A e armazena no indice b equivalente

    }

    /**Testes unitarios**/

    int resultadoEsperado;

    for(int i = 0; i < 20; i++){
        resultadoEsperado = 0;

        for(int j = 1; j <= a[i]; j++) resultadoEsperado += j;

        assert(b[i] == resultadoEsperado);

    }
    free(a);

    for(int i = 0; i < 20; i++){
        printf("B[%d] = %d\n",i,b[i]);
    }

    return 0;
}

