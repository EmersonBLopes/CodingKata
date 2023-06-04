#include<stdio.h>
#include<stdlib.h>

/**
 * Criar uma matriz A que armazena 6 valores do tipo real, criar uma matriz B que armazena os elementos da matriz A com a sequinte regra. Cada indice par da matriz B deve armazenar um elemento de indice impar e cada elemento de indice impar deve armazenar um valor de indice par
 * apresentar os elementos das duas matrizes
 **/

int main(void){

  //declaracao de variaveis
  int *a = (int *)calloc(6,sizeof(int));
  int *b = (int *)calloc(6,sizeof(int));

  //leitura de valores
  for(int i = 0; i < 6; i++){
    printf("Digite o valor de A[%d]:",i);
    scanf("%d",&a[i]);
  }

  //processamento
  for(int i = 0; i < 6; i++){
    b[i] = i < 5 ? a[i+1] : a[0];
  }

  //saida
  for(int i = 0; i < 6; i++){
    printf("A[%d] = %d\n",i,a[i]);
  }
  
  for(int i = 0; i < 6; i++){
    printf("B[%d] = %d\n",i,b[i]);
  }

  return 0;
}

