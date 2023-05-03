#include<stdio.h>

/**
 * Efetuar a exponenciacao de uma base qualquer elevada a um expoente qualquer
 */

int main(void){

  //declaracao de variaveis
  int resultado, base, expoente,i;
  resultado = 1;

  //leitura de valores
  printf("Digte o valor da base:");
  scanf("%d",&base);

  printf("Digite o valor do expoente:");
  scanf("%d",&expoente);
  
  //processamento
  while(i < expoente){
    resultado *= base;
    i++;
  }

  //saida
  printf("%d ^ %d = %d\n",base,expoente,resultado);


  return 0;
}
