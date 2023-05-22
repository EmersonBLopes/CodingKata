#include<stdio.h>

/**
 * Ler o nome a altura e a largura de um comodo e apresentar a area do comodo apos isso perguntar se o usuario deseja calcular novos comodos caso digite 'n' apresentar o valor total acumulado da area residencial
 **/

int main(void){
    
    //declaracao e inicializacao de variaveis
    char nome[20];
    float largura, comprimento, areaComodo, areaTotal = 0;

    for(char res = 's'; res != 'n';){

        printf("Digite o nome do comodo:");
        scanf("%s",nome);

        printf("Digite a largura do comodo:");
        scanf("%f",&largura);

        printf("Digite o comprimento do comodo:");
        scanf("%f",&comprimento);

        areaComodo = largura * comprimento;
        areaTotal += areaComodo;

        printf("Comodo: %s\n",nome);
        printf("Largura: %.2f\n",largura);
        printf("Comprimento: %.2f\n",comprimento);

        fflush(stdin);

        printf("Deseja continuar?");
        scanf("%c",&res);


    }

    printf("A area residencial acumulada eh: %.2f\n",areaTotal);

    return 0;
}

