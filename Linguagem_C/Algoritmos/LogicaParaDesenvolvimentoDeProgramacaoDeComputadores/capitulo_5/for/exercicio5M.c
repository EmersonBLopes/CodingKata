#include<stdio.h>

/**
 *Efetuar a leitura de dez valores e ao final apresentar o somatorio e a media dos valores lidos
 **/

int main(void){

  //declaracao de variaveis
  float valores[10],media;
  float somatorio = 0;

  //leitura de valores
  for(int i = 0; i < 10; i++){

    printf("Digite o valor %d:",i+1);
    scanf("%f",&valores[i]);
  }

  //processamento 
  for(int i = 0; i < 10; i++){
    somatorio += valores[i];
  }
  
  media = somatorio / 10;

  //saida
  printf("O somatorio dos valores lidos eh:%.2f\n",somatorio);
  printf("A media dos valores lidos eh: %.2f\n",media);

  return 0;
}

