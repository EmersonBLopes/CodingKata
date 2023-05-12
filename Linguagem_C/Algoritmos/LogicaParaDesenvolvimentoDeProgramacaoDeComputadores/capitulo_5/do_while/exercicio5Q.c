#include<stdio.h>

/**
 * calcular a area total de residencia o usuario deve entrar o nome, altura e largura de quantos comodos ele quiser, apos inserir esta informacoes deve perguntar ao usuario se deseja proseguir com a entrada de dados, caso digite 'N' o programa deve calcular e apresentar a area total da residencia
**/

int main(void){

		//declaracao e inicializacao de variaveis
		int i = 0;
		float altura, largura, areaDoComodo, areaTotal;
		char nomeComodo[10];
		char resposta;
		areaTotal = 0;

		//entrada de dados
		do{

			printf("Digite o nome do comodo:");
			scanf("%s",nomeComodo);

			printf("Digite a altura do comodo:");
			scanf("%f",&altura);

			printf("Digite a largura do comodo:");
			scanf("%f",&largura);

			areaDoComodo = altura * largura;
			areaTotal += areaDoComodo;

			//saida
			printf("Comodo: %s\n",nomeComodo);
			printf("Altura: %.2f\n",altura);
			printf("Largura: %.2f\n",largura);

			fflush(stdin);

			//resposta do usuario
			printf("Deseja continuar?");
			scanf("%c",&resposta);

		}while(resposta != 'n');

		printf("A area total da residencia eh: %.2f\n",areaTotal);
		return 0;
}
