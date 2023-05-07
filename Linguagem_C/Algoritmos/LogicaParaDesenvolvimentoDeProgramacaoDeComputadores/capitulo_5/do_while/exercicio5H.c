#include<stdio.h>

/**
 * Calcular a exponenciacao de uma base qualquer elevada a um expoente qualquer sem utlizar a funcao pow()
 */

int main(void){
		
		//declaracao de variaveis e inicializacao
		int base, expoente, i,resultado;
		resultado = 1;
		i = 0;
		
		//entrada de valores
		printf("Digite o valo da base:");
		scanf("%d",&base);

		printf("Digite o valor do expoente:");
		scanf("%d",&expoente);

		//processamento
		do{
				resultado = expoente == 0 ? 1 : resultado * base;
				i++;
		}while(i <= expoente);

		//saida
		printf("%d ^ %d = %d\n",base,expoente,resultado);

		return 0;
}
