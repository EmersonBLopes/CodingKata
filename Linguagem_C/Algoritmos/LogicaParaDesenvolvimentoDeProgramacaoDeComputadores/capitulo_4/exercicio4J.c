#include<stdio.h>

int main(void){
  //declacao de variaveis
  int valor;

  //leitura do valor
  printf("Digite um valor:");
  scanf("%d",&valor);

  //saida
  if(valor % 2 == 0){
    printf("O valor eh par\n");
  }else{
    printf("O valor eh impar\n");
  }

  return 0;
}
