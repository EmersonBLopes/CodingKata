#include<stdio.h>

/**
 * Apresentar a soma e a media aritmetica dos valores pares situados na faixa de 50 a 70
 **/

int main(void){

    //declarcao de variaveis
    int somatorio = 0;
    int contador = 0;
    int media;

    //processamento
    for(int i = 50; i <= 70; i+=2){
        somatorio += i;
        contador++;
    }
    media = somatorio / contador;

    //saida
    printf("O somatorio dos valores lidos eh: %d\n",somatorio);
    printf("A media dos valores lidos eh: %d\n",media);

    return 0;
}

