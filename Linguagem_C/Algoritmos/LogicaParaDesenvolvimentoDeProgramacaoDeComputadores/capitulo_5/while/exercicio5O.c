#include<stdio.h>

/**
 * calcular a fatorial do numero 1 ao 10
 */

int calculaFatorial(int valor){

  int resultado = 1;

  if(valor == 1){
    return valor;
  }else {
   resultado = calculaFatorial(valor-1) * valor; 
  }

  return resultado; 
}

int main(void){

  //declaracao de variaveis
  int i, resultado;
  
  //inicializacao das variaveis
  i = 1;
  resultado = 0;

  //processamento e saida
  while(i <= 10){

    resultado = calculaFatorial(i);
    printf("!%d = %d\n",i,resultado);
  
    i++;
  }
  return 0;
}
