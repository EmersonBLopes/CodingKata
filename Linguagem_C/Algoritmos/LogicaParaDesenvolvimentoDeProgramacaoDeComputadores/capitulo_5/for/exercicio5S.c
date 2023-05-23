#include<stdio.h>

/**
 * Efetuar a operacao de divisao utilizando laco de repeticao ao final apresentar como quociente quantas vezes o divisor cabe dentro do dividendo
 **/

int main(void){

  //declaracao e inicilizacao de variaveis
  int dividendo, divisor;
  int quociente = 0;

  //entrada de dados
  printf("Digite o valor do dividendo:");
  scanf("%d",&dividendo);

  printf("Digite o valor do divisor:");
  scanf("%d",&divisor);

  //processamento
  if(dividendo >= divisor){
    for(int dividendo2 = dividendo; dividendo2 > 0; quociente++){

      dividendo2 -= divisor;
    }
  }

  //saida
  printf("%d / %d = %d \n",dividendo,divisor,quociente);

  return 0;
}

