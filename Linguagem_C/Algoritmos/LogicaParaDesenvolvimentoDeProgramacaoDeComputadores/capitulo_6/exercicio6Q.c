#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

/**
 * ler 15 elementos reais para uma matriz A, construir uma matriz B em que os indices pares da matriz A devem ter seus elementos dividido por 2 caso seja impar deve ser multiplicado por 1,5. Apresentar os elementos da matriz B
 **/

int main(void){

    //alocando memoria
    float *a = (float *) calloc(15,sizeof(float));
    float *b = (float *) calloc(15,sizeof(float));

    //leitura de valores
    for(int i = 0; i < 15; i++){
        printf("Digite o valor de indice %d:",i);
        scanf("%f",&a[i]);
    }

    //processamento
    for(int i = 0; i < 15; i++){
        b[i] = i % 2 == 0 ? a[i] / 2 : a[i] * 1.5;
    }

    /**TESTE UNITARIO**/
    for(int i = 0; i < 15; i++){
        i % 2 == 0 ? assert(a[i] / 2 == b[i]) : assert(a[i] * 1.5 == b[i]);
    }

    //saida
    for(int i = 0; i < 15; i++){
        printf("B[%d] = %.2f\n",i,b[i]);
    }
    return 0;
}

