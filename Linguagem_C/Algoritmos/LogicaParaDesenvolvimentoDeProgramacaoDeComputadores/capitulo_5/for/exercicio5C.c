#include<stdio.h>
#include<stdlib.h>

/**
 *Apresentar o somatorio dos cem primeiros numeros
 **/

int main(void){

    //declaracao de variavel
    int *somatorio = malloc(sizeof(int));

    //inicializacao da variavel somatorio
    somatorio = 0;
    
    //processamento 
    for(int i = 0; i < 101; i++){
        somatorio += i;
    }

    //saida
    printf("O somatorio dos cem primeiros numerso eh: %d\n",somatorio);

    free(somatorio);

    return 0;
}

