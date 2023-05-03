#include<stdio.h>

/**
  * realizar a leitura dos valores pares situados na faixa de 50 a 70
  */

int main(void){
	
	//declaracao de variaveis
	int contador,valores,somatorio,media;

	valores = 50;
	contador = 0;
	somatorio = 0;
	
	
	//processamento
	while(valores <= 70){
		somatorio += valores;
		contador++;
		valores += 2;
	}
	
	media = somatorio / contador;

	//saida
	printf("O somatorio dos valores pares na faixa de 50 e 70 eh:%d\n",somatorio);
	printf("A media dos valores pares na faixa de 50 a 70 eh:%d\n",media);
	
	return 0;
}
    
