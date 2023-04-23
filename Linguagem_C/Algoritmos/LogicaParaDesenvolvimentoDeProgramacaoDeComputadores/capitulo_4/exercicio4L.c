#include<stdio.h>

int main(void){

  //declaracao de variaves
  int valor;

  //leitura de valores
  printf("Digite um valor menor do que 3:");
  scanf("%d",&valor);

  //processamento e saida
  if(!(valor > 3)){
    printf("O valor eh: %d\n",valor);
  }

  return 0;
}

