#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

/**
 * criar uma matriz A unidimensional que armazene 20 elementos do tipo real,
 * logo apos criar uma matriz B que armazena os elementos da matriz a de
 * forma invertida
 **/

int main(void){

    //alocando memoria
    float *a = (float *) calloc(20,sizeof(float));
    float *b = (float *) calloc(20,sizeof(float));
    int j = 19;
    
    if((a == NULL) && (b == NULL)){
        printf("Erro ao alocar memoria");
        abort();
    }

    //leitura de valores
    for(int i = 0; i < 20; i++){
        a[i] = i * 8;
    }

    //processamento
    for(int i = 0; i < 20; i++){
        b[i] = a[j];
        j--;
    }

    j = 19;

    //saida
    for(int i = 0; i < 20; i++){
        printf("A[%d] = %2.f || ",i,a[i]);
        printf("B[%d] = %2.f\n",i,b[i]);
    }

    /**TESTES UNITARIOS**/
    for(int i = 0; i < 20; i++){
        assert(a[i] == b[j]);
        j--;
    }
    return 0;
}

