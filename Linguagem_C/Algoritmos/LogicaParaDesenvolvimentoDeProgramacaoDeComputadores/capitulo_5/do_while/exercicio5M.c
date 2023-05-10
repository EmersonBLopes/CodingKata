#include<stdio.h>

/**
 * Elaborar um programa que leia dez valores numericos reais e ao final apresente o somatorio e a media dos valores lidos
**/

int main(void){

  //declaracao e inicializacao de variaveis
  int i;
  float  valores[10], somatorio, media;

  i = 0;
  somatorio = 0;
  media = 0;

  //leitura de valores
  do{

    printf("Digite o valor da nota %d:",i+1);
    scanf("%f",&valores[i]);

    i++;
  }while(i < 10);

  i = 0;

  //processamento
  do{
    somatorio += valores[i];
    i++;
  }while(i < 10);

  media =  somatorio / 10;

  //saida
  printf("O somatorio das notas eh: %.2f\n",somatorio);
  printf("A media das notas lidas eh: %.2f\n",media);

  return 0;
}

