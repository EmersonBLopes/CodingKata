#include<stdio.h>

/**
 * Apresentar a exponeciacao de uma base qualquer eleveda a um expoente qualquer utilizando laco de repeticao
 **/

int main(void){

    //declaracao e inicializacao de variavies
    int base, expoente, resultado;
    resultado = 1;

    //entrada de valores
    printf("Digite o valor da base:");
    scanf("%d",&base);
    printf("Digite o valor do expoente:");
    scanf("%d",&expoente);

    //processamento
    if(base >= 0 && expoente >= 0){

        for(int i = 0; i < expoente; i++){

            if(base == 0){
                resultado = 1;
                break;
            }

            resultado *= base;
        }

        printf("%d ^ %d = %d\n",base,expoente,resultado);

    }else{
        printf("Apenas valores positivos e inteiros\n");
    }


    return 0;
}

