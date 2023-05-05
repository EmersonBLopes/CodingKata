#include<stdio.h>

/**
 * Apresentar a tabuada de um valor qualquer da forma tradicional
 */
int main(void){

  //declaracao de variaveis e incializacao
  int valor, i;
  i = 0;

  //leitura de valores
  printf("Digite o valor que deseja consultar a tabuada:");
  scanf("%d",&valor);

  //processamento e saida
  do{
    printf("%d X %d = %d\n",i,valor,i*valor);
    i++;
  }while(i < 11);
}
