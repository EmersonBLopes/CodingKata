#include<stdio.h>
#include<math.h>

/**
 * Apresentar todos os quadrados dos valores inteiros na faixa de 15 a 200
 */
int main(void){
  //declaracao de variaveis e inicializacao
  int i = 15;

  //processamento e saida
  do{

    printf("%d ^ 2 = %d\n",i,(int)pow(i,2));

    i++;
  }while(i<=200);

  return 0;
}
