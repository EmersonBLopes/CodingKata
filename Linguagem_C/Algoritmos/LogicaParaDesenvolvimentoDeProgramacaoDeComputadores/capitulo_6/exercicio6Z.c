#include<stdio.h>
#include<stdlib.h>

/**
 * construir uma matriz A que armazena dez elementos inteiros. 
 * Ao final apresentar a quantidade de elementos impares e qual a porcentagem de elementos impares em relacao a matriz
 **/

int main(void){

  //Leitura de valores
  int *a = (int *) calloc(10, sizeof(int));
  int contadorImpares = 0;
  float poncentagemImpares;

  //leitura de valores
  for(int i = 0; i < 10; i++){
    printf("Digite o elemento de indice %d:",i);
    scanf("%d",&a[i]);
  }

  //processamento
  for(int i = 0; i < 10; i++){
    if(a[i] % 2 != 0) contadorImpares++;
  }

  poncentagemImpares =  10 * ((float)contadorImpares * 10 / 100);

  //saida
  printf("Quantidade de valores impares existentes na matriz: %d\n",contadorImpares);
  printf("Porcentagem de valores impares: %.2f%%\n",poncentagemImpares);


  return 0;
}

