#include<stdio.h>
#include<stdlib.h>

/**
 * Criar duas matrizes, A e B que ambas comportam 15 elementos, efetuar a leitura dos valores da matriz A. Apos isso cada indice da matriz B deve ser a fatorial do indice equivalente da matriz A
 **/

//calcula o valor da fatorial
int fatorial(int valor){

    if(valor <= 1){
        return valor;
    }else{
        return valor * fatorial(valor-1);
    }
}

int main(void){

    //allocando memoria
    int *a = malloc(sizeof(int)*15);
    int *b = malloc(sizeof(int)*15);

    //leitura de valores
    for(int i = 0; i < 15; i++){
        a[i] = i;
    }

    //processamento
    for(int i = 0; i < 15; i++){
        b[i] = fatorial(a[i]);
    }

    //saida
    for(int i = 0; i < 15; i++){
        printf("!%d = %d\n",a[i],b[i]);
    }

    //desalocando memoria
    free(a);
    free(b);

    return 0;
}

