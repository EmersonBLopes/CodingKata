#include<stdio.h>

/*
 * aprensentar o resultado de uma divisao sem utilizar do operador "/" apenas usando laco de repeticao
 */

int main(void){

  //declaracao e inicializacao de variaveis
  int dividendo, divisor, quociente, i;
  quociente = 0;
  i = 0;

  //leitura de valores
  printf("Digite o valor do dividendo:");
  scanf("%d",&dividendo);
  
  printf("Digite o valor do divisor:");
  scanf("%d",&divisor);

  //processamento
  while(i < dividendo){

    if(dividendo < divisor) break;

    i += divisor;
    quociente++;
  }

  //saida
  printf("O quociente de %d / %d = %d\n",dividendo,divisor,quociente);

  return 0;
}
