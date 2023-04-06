#include<stdio.h>

int retornaValorDaSomaDosQuadrados(int a,int b, int c){

  return a * a + b * b + c * c;
}

int main(void){

  //declacao de variaveis
  int a,b,c;

  //leitura dos valores
  printf("Digite o valor de A:");
  scanf("%d",&a);
  printf("Digite o valor de B:");
  scanf("%d",&b);
  printf("Digite o valor de C:");
  scanf("%d",&c);

  //saida

  printf("O resultado da soma dos quadrados eh: %d\n",retornaValorDaSomaDosQuadrados(a,b,c));

  return 0;
}
