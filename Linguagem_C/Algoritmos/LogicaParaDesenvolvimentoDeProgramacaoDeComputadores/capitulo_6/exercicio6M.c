#include<stdio.h>
#include<assert.h>

/**
 * Calcular a tabuada de um valor qualquer de 1 ate 10 e armazenar em uma matriz inteira de nome A. Apresentar os elementos da matriz A
 **/

int main(void){

    //declaracao de variavel
    int a[10];
    int valor;
    
    //leitura de valor
    printf("Digite o valor desejado:");
    scanf("%d",&valor);

    //processamento
    for(int i = 0; i < 10; i++) a[i] = valor * (i+1);

    /**TESTE UNITARIOS**/
    for(int i = 0; i < 10; i++){
        assert(a[i] == valor * (i+1));
    }

    for(int i = 0; i < 10; i++) printf("%d X %d = %d\n",valor,i+1,a[i]);
    return 0;
}

