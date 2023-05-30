#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

/**
 *Construir uma matriz A que armazena 12 elementos inteiros. Construir uma segunda matriz B que armazena a mesma quantidade e tipo da matriz A com uma excessao, caso o elemento de indice equivalente da matriz A seja impar entao o elemento de indice equivalente da matriz B deve ser o elemento da matriz A vezes 2, caso seja par deve se manter constante.
 **/

int main(void){

    //alocando memoria
    int *a = (int *) calloc(12,sizeof(int));
    int *b = (int *) calloc(12,sizeof(int));

    //leitura de valores
    for(int i = 0; i < 12; i++){
        printf("Digite o valor de indice %d:",i);
        scanf("%d",&a[i]);
    }

    //processamento
    for(int i = 0; i < 12; i++){
        b[i] = a[i] / 2 == 0 ? a[i] : a[i] * 2;
    }

    /**teste unitario**/
    for(int i = 0; i < 12; i++){
        if(a[i] / 2 != 0) assert(a[i] == b[i]/2);
    }

    //saida
    for(int i = 0; i < 12; i++){
        printf("B[%d] = %d\n",i,b[i]);
    }

    return 0;
}

