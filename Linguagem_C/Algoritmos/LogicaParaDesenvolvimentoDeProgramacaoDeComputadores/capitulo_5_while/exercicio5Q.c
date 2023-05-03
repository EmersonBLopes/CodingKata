#include<stdio.h>

/**
  *Fazer a leitura do nome de um comodo e da area em metros quadrados, apos isso calcular a area total da casa
  */

int main(void){
	
	//declaracao de variaveis
	float areaTotal, areaDoComodo;
	char resposta, comodo[20];
	
	areaTotal = 0;
	resposta = 's';

	//processamento
	while(resposta != 'n'){

		printf("Digite o nome do comodo:");
		scanf("%s",comodo);
		printf("Digite a area do comodo:");
		scanf("%f",&areaDoComodo);

		areaTotal += areaDoComodo;

		printf("Comodo: %s\n",comodo);
		printf("Area do comodo: %.2f\n",areaDoComodo);
		
		printf("Deseja continuar?");
		scanf(" %c",&resposta);
	}
	
	printf("A area total da residencia eh: %.2f\n",areaTotal);
	
	return 0;
}
