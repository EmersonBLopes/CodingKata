#include<stdio.h>

/**
 * Efetuar a leitura de valores inseridos pelo usuario ate que um valor negativo seja informado. O programa deve informar o maior e o menor valor informado
 */

int main(void){

  //declaracao de variaveis e inicializacao
  int valor, maiorValor, menorValor;


  printf("Digite o valor desejado:");
  scanf("%d",&valor);

  maiorValor = valor;
  menorValor = valor;

  //processamento
  while(valor >= 0){
    printf("Digite o valor desejado:");
    scanf("%d",&valor);

    if(valor > maiorValor) maiorValor = valor;
    if(valor < menorValor && valor >= 0) menorValor = valor;
  }

  //saida
  printf("O maior valor digitado foi: %d\n",maiorValor);
  printf("O menor valor digitado foi: %d\n",menorValor);

  return 0;
}
