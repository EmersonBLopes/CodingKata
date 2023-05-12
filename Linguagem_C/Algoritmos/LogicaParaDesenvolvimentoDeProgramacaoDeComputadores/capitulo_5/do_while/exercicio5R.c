#include<stdio.h>

int main(void){
		//declaracao de variavies
		int valor, menorValor, maiorValor;
		
		menorValor = maiorValor = -1;

		//entrada de dados
		do{

			printf("Digite um valor:");
			scanf("%d",&valor);

			if(maiorValor == -1 && menorValor == -1){

				menorValor = valor;
				maiorValor = valor;

			} 

			if(valor > maiorValor) maiorValor = valor;
			if(valor < menorValor && valor >= 0) menorValor = valor;

		}while(valor >= 0);

		printf("O maior valor lido foi: %d\n",maiorValor);
		printf("O menor valor lido foi: %d\n",menorValor);

		//processamento
		return 0;
}
