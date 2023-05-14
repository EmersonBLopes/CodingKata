#include<stdio.h>

/**
 *Efetuar a divisao de um valor qualquer utilizando loop, nao utilizar de forma nenhuma o operador de divisao
**/

int div(int dividendo, int divisor){
  //declaracao de variaveis
  int resultado = 0;

  if(dividendo >= divisor){
    do{
      dividendo -= divisor;
      resultado++;
    }while(dividendo >= divisor);
  }
  
  return resultado;
}

int main(void){

  //declaracao de variaveis e inicilizacao
  int dividendo, divisor, quociente;

  //leitura de valores
  printf("Digite o dividendo:");
  scanf("%d",&dividendo);
  printf("Digite o divisor:");
  scanf("%d",&divisor);
 
  //processamento
  quociente = div(dividendo,divisor);

  //saida
  printf("%d / %d = %d\n",dividendo,divisor,quociente);
  return 0;
}

