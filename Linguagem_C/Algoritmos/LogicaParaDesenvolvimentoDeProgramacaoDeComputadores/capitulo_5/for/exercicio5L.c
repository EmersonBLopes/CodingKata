#include<stdio.h>

/**
 *Ler quinze valores numericos inteiros e ao final apresentar o somatorio da fatorial de cada valor lido
 **/

int main(void){

    //declaracao de variaveis
    unsigned int somatorio = 0;
    int valores[15];
    int fatorial = 1;

    //leitura de valores
    for(int i = 0; i < 15; i++){
        printf("Digite o valor %d:",i+1);
        scanf("%d",&valores[i]);
    }

    //calculando a fatorial e o somatorio
    for(int i = 0; i < 15; i++){ //laco de iteracao do array

        for(int j = 1; j <= valores[i]; j++){//laco para calcular a fatorial
            fatorial *= j;
        }
        //acrecentando a fatorial ao somatorio
        somatorio += fatorial;
        fatorial = 1;
    }

    printf("O somatorio das fatoriais dos valores lidos eh: %u\n",somatorio);

    return 0;
}
