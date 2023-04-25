#include<stdio.h>

int calculaSoma(){

  int somatorio,i;

  somatorio = 0;
  i = 1;
  while(i < 101){
    somatorio += i;
    i++;
  }
  return somatorio;
}

int main(void){
  //declaracao de variaveis
  int resultado;

  //processamento
  resultado = calculaSoma();

  //saida
  printf("O resultado da soma dos cem primeiros numeros eh:%d\n",resultado);

  return 0;
}
