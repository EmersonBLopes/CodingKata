#include<stdio.h>

int calculaDiferenca(int a, int b){
  
  int diferenca = a > b ? a - b : b - a;

  return diferenca;
}

int main(void){

  //declaracao de variaveis
  int a,b;

  //leitura de valores
  printf("Digite o valor da variavel a:");
  scanf("%d",&a);
  printf("Digite o valor da variavel b:");
  scanf("%d",&b);

  //processamento e saida
  printf("A diferenca do maior valor para o menor eh: %d\n",calculaDiferenca(a,b));

  return 0;
}
