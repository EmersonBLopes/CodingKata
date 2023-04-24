#include<stdio.h>

int main(void){

  //declaracao de variaveis
  int valor,resultado;

  //leitura de valores
  printf("Digite um valor:");
  scanf("%d",&valor);

  //processamento
  resultado = valor * 2;

  if(resultado > 30){
    printf("%d X 2 = %d\n",valor,resultado);
  }else{
    printf("O resuldado nao eh maior do que 30.\n");
  }
  return 0;
}
