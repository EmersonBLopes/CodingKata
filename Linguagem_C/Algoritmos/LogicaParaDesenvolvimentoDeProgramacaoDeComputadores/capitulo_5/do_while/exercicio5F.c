#include<stdio.h>

/**
 * Apresentar todos o valores numericos divisiveis por 4 na faixa de 0 a 199
 */

int main(void){

		//declaracao e inicializacao de variveis
		int i = 1;	

		//procesamento e saida
		do{
				if(i % 4 == 0) printf("%d\n",i);
				i++;
		}while(i < 200);

		return 0;
}

