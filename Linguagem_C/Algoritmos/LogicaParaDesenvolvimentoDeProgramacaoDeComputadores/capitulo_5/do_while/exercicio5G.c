#include<stdio.h>

/**
 * Apresentar a exponenciacao de base 3 elevado a um expoente que varie de 0 a 15
**/

int main(void){
		
		//declaracao e inicializacao de variaveis
		int base = 3;
		int expoente = 0;
		int resultado = 1;
		int i = 0;

		//processamento e saida
		do{

				do{
						if(expoente == 0){
								break;
						}else{
							resultado *= base;
						}
						i++;
				}while(i <= expoente);

				printf("%d ^ %d = %d\n",base,expoente,resultado);

				resultado = 1;
				i = 0;
				expoente++;
		}while(expoente < 16);

		return 0;
}
