#include<stdio.h>

/**
 *Apresetar a tabuada de um numero qualquer em sua forma tradicional
 **/

int main(void){

    //declaracao de variaveis
    int valor;

    //leitura de valores
    printf("Digite o valor que deseja consultar a tabuada:");
    scanf("%d",&valor);

    //processamento e saida
    for(int i = 0; i < 11; i++){
        printf("%d X %d = %d\n",valor,i,valor*i);
    }

    return 0;
}

