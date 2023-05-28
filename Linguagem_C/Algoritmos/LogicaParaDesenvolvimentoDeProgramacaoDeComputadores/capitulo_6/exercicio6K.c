#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

/**
 * Criar uma matriz A que armazena dez elementos do tipo inteiro, criar uma matriz B de mesma dimensao e tamanho que armazena o valor equivalente negativo da matriz A,
 * por exemplo se A[0] = 5 logo B[0] = -5
 **/

int main(void){

    //alocando memoria
    int *a = (int *) malloc(sizeof(int)*10);
    int *b = (int *) malloc(sizeof(int)*10);

    //leitura de valores
    for(int i = 0; i < 10; i++) a[i] = i * 7;

    //processamento
    for(int i = 0; i < 10; i++) b[i] = a[i] * -1;

    /**TESTE UNITARIO**/
    for(int i = 0; i < 10; i++){
        assert(b[i] == a[i] * -1);
    }
    free(a);

    //saida
    for(int i = 0; i < 10; i++) printf("B[%d] = %d\n",i,b[i]);

    return 0;
}

