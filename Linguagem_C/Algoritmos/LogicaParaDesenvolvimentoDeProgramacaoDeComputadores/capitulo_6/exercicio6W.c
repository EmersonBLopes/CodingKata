#include<stdio.h>
#include<math.h>

/**
 * criar duas matrizes A e B que armazenam ambas 10 elementos inteiros, construir uma matriz C de mesma dimensao que armazena o quadrado da soma dos elementos da matriz A com a matriz B. Apresentar os elementos da matriz C
 **/

int main(void){

  //declaracao de variaveis
  int a[10], b[10], c[10];

  //leitura de valores
  for(int i = 0; i < 10; i++){
    printf("Digite o elemento de indice %d da matriz A:",i);
    scanf("%d",&a[i]);
    printf("Digite o elemento de indice %d da matriz B:",i);
    scanf("%d",&b[i]);
  }

  //processamento
  for(int i = 0; i < 10; i++){
    c[i] = (a[i] + b[i]) * (a[i] + b[i]);
  }

  //saida
  for(int i = 0; i < 10; i++){
    printf("C[%d] = %d\n",i,c[i]);
  }

  return 0;
}

