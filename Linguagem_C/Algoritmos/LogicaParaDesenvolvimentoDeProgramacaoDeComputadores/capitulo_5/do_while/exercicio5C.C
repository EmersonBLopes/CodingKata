#include<stdio.h>

/**
  *Apresentar o somatorio dos cem primeiros numeros
**/

int main(void){
	//declaracao e inicializacao de variaveis
	int i, somatorio;

	i = 1;
	somatorio = 0;
	
	//processamento
	do{
		somatorio += i;
		i++;
	}while(i < 101);

	//saida
	printf("O somatorio dos cem primeiros numeros eh:%d\n",somatorio);
	
	return 0;
}
