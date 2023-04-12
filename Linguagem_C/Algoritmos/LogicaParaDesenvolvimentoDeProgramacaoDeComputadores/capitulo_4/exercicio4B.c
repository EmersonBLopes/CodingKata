#include<stdio.h>

/**
 * Efetuar a leitura de um valor positivo e negativo e aprensenta-lo como positivo
 */

int converteParaPositivo(int n){

  return n < 0 ? n * -1 : n;
}

int main(void){

  //declaracao de variavel
  int n;

  //leitura do valor
  printf("Digite um valor:");
  scanf("%d",&n);

  //processamento e saida
  printf("%d\n",converteParaPositivo(n));

  return 0;
}
