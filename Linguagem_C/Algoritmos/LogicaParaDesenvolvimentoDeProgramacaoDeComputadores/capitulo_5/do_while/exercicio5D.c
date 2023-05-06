#include<stdio.h>

/**
 * Calcular o somatorio dos valores pares da faixa de 1 a 500
**/

int main(void){
	
		//declaracao e inicializacao de variaveis
		int i, somatorio;

		i = 1;
		somatorio = 0;

		//processamento
		do{
				if(i % 2 == 0) somatorio += i;
				i++;
		}while(i < 501);

		//saida
		printf("O valor do somatorio dos valores pares da faixa de 1 a 500 eh:%d\n",somatorio);

		return 0;
}
