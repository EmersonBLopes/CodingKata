#include<stdio.h>

/**
 *Apresentar a fatorial dos valores impares situados na faixa de 1 ate 10
 **/

int fatorial(int valor){
    int resultado;
    if(valor == 1){
        return valor;
    }else{
        resultado = fatorial(valor - 1) * valor;
    }

    return resultado;
}

int main(void){

    //declarcao de variaveis
    int resultado;

    for(int i = 1; i < 11; i++){
        if(i % 2 != 0){
            resultado = fatorial(i);
            printf("!%d = %d\n",i,resultado);
        }
    }

    return 0;
}

