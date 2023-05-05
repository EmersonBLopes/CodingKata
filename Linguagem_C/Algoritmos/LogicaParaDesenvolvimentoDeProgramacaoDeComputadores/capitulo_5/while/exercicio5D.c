#include<stdio.h>

int calculaSomatorioPar(){

  //declaracao e inicializacao de variaveis
  int somatorio = 0;
  int i = 1;

  while(i <501){

    if(i%2 == 0 ) somatorio += i; 

    i++;
  }

  return somatorio;
}

int main(void){
  
  //declaracao de variaveis
  int resultado;

  //processamento
  resultado = calculaSomatorioPar();

  //saida
  printf("O resultado do  somatorio dos numeros pares de 1 ate 500 eh:%d\n",resultado);
  return 0;
}
