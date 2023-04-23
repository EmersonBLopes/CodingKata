#include<stdio.h>

int main(void){

  //declaracao de variaves
  int valor;

  //leitura de valores
  printf("Digite um valor entre 1 e 9:");
  scanf("%d",&valor);

  //processamento e saida
  if(valor >= 1 && valor <= 9){
    printf("O valor esta na faixa permitida\n");
  }else{
    printf("O valor esta fora da faixa permitida\n");
  }
  return 0;
}
