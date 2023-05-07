#include<stdio.h>

/**
 * Aprensetar todos o valores numericos impares situados na faixa de 0 a 20
**/

int main(void){

		//declaracao de variavies e inicializacao
		int i = 0;

		//processamento e saida
		do{
				if(!(i % 2 == 0) && i != 19) printf("%d ",i);
				if(i == 19) printf("%d\n",i);
				i++;
		}while(i < 21);

		return 0;
}
