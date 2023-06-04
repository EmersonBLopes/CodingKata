#include<stdio.h>
#include<stdlib.h>

/**
 * Criar uma matriz A que armazena 15 elementos inteiros. Apresentar quantos elementos pares existem dentro da matriz
 **/

int main(void){

  //alocando memoria
  int *a = calloc(15,sizeof(int));
  int contador = 0;

  //leitura de valores
  for(int i = 0; i < 15; i++){
    printf("Digite o valor de indice %d:",i);
    scanf("%d",&a[i]);
  }

  //processamento
  for(int i = 0; i < 15; i++){
    if(a[i] % 2 == 0) contador++;
  }

  //desalocando memoria 
  free(a);

  //saida
  printf("A matriz possui %d elementos pares\n",contador);

  return 0;
}

