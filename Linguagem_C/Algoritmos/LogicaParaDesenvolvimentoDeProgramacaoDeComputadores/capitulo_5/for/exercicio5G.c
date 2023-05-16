#include<stdio.h>

/**
 * Elaborar um programa que calcule as potencias da base constante 3 e de um expoente que varie de 0 a 15
 **/

int calculaExponeciacao(int base, int expoente){

    int resultado;

    if(expoente == 0){
        return 1;
    }else{
        if(expoente == 1){
            return base;
        }else{
            resultado = base * calculaExponeciacao(base,expoente -1);
        }
    }

    return resultado;
}

int main(void){

    //declaracao e inicializacao de variaveis
    int resultado;

    //processamento e saida
    for(int expoente = 0; expoente < 16; expoente++){
        resultado = calculaExponeciacao(3, expoente);
        printf("3 ^ %d = %d\n",expoente,resultado);
    }


    return 0;
}

