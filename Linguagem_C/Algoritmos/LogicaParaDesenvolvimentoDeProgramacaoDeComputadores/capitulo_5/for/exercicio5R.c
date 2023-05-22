#include<stdio.h>

/**
 * Elaborar a leitura de valores inteiros positivos ate que um valor negativo seja informado ao final aprensetar o menor e o maior valor lido
 **/

int main(void){

    //Declaracao e inicializacao de variaveis
    int valor,menorValor,maiorValor,primeiraVez;

    primeiraVez = 1;

    //entrada de valores
    for(valor; valor >= 0;){

        printf("Digite um valor:");
        scanf("%d",&valor);
       
        if(primeiraVez){
            maiorValor = valor;
            menorValor = valor;
            primeiraVez = 0;
        }else{
            if(valor > maiorValor) maiorValor = valor; 
            if(valor < menorValor && valor >= 0) menorValor = valor; 
        }
    }

    //saida
    printf("O maior valor lido foi: %d\n",maiorValor);
    printf("O menor valor lido foi: %d\n",menorValor);
    return 0;
}

