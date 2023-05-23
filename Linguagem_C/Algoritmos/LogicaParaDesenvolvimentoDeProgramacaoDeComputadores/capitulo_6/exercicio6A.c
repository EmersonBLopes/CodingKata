#include<stdio.h>

/**
 * Efetuar a leitura de 10 nomes em uma matriz e ao final apresenta-los
 **/

int main(void){

    //declaracao de variaveis
    char listaDeNomes[20][10];

    //leitura de valores
    for(int i = 0; i < 10; i++){
        printf("Digite o nome %d da lista:",i+1);
        scanf("%s",listaDeNomes[i]);
    }

    //saida
    for(int i = 0; i < 10; i++){
        printf("%d. %s\n",i+1,listaDeNomes[i]);
    }

    return 0;
}

