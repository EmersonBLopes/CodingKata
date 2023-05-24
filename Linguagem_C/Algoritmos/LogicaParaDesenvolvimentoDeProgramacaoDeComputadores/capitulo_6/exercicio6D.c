#include<stdio.h>
#include<stdlib.h>

/**
 * Criar uma matriz A de 15 elementos e apartir da matriz A criar uma matriz B de mesmo tamanho em que o valor de cada indice sera o valor do indice correspondente da matriz A elevado ao quadrado. Ao final apresentar os elementos da matrizes A e B
 **/

int calculaQuadrado(int valor){
    return valor * valor;
}

int main(void){

    //declaracao de variaveis
    int *a = (int *) malloc(sizeof(int) * 15);
    int *b = (int *) malloc(sizeof(int) * 15);

    //leitura de valores
    for(int i = 0; i < 15; i++){
        printf("Digite o valor de indice %d:",i);
        scanf("%d",&a[i]);
    }

    //processamento
    for(int i = 0; i < 15; i++){
        b[i] = calculaQuadrado(a[i]);
    }

    //saida 
    for(int i = 0; i < 15; i++){
        printf("A[%d] = %d || B[%d] = %d\n",i+1,a[i],i+1,b[i]);
    }
    
    //liberando espaco alocado
    free(a);
    free(b);

    return 0;
}
