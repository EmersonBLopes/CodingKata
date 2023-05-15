#include<stdio.h>
#include<stdlib.h>

/**
 *Apresentar o somatorio dos valores pares na faixa de 1 ate 500
 **/

int main(void){

    //declaracao e inicializacao de variaveis
    int *somatorio = malloc(sizeof(int));

    //processamento
    for(int i = 1; i <= 500; i++){
        if(i % 2 == 0) somatorio+= i;
    }

    //saida
    printf("O somatorio dos valores pares na faixa de 1 ate 500 eh: %d\n",somatorio);

    return 0;
}

