#include<stdio.h>

int elevaValorAoQuadrado(int valor){
  return valor * valor;
}

int main(void){

  int valor;

  //lendo valores
  printf("Digite o valor que será elevado ao quadrado:");
  scanf("%d",&valor);

  //saida
  printf("%d ^ 2 = %d\n",valor,elevaValorAoQuadrado(valor));

  return 0;
}
