#include<stdio.h>
#include<stdlib.h>

/**
 * Criar um programa que leia oito valors inteiros em uma matriz A e criar uma matriz b mutiplicando o elemento da matriz a de indice equivalente por 3
 **/

int main(void){

  //declaracao de variaveis
  int *a = (int *) calloc(8,sizeof(int));
  int *b = (int *) calloc(8,sizeof(int));

  //leitura de valores
  for(int i = 0; i < 8; i++){
    printf("Digite o valor de indice %d:",i);
    scanf("%d",&a[i]);
  }

  //processamento
  for(int i = 0; i < 8; i++){
    b[i] = a[i] * 3; 
  }

  //saida
  for(int i = 0; i < 8; i++){
    printf("%d. %d\n",i,b[i]);
  }

  return 0;
}

