#include<stdio.h>

float calculaDistanciaPercorrida(float tempo, float distancia){

  return (distancia*1000) / (tempo*60);
}

int main(void){

  //declaracao de variaveis
  float distancia;
  int tempo;

  //lendo valores
  printf("Digite a distância percorrida pelo projetil em quilômetro:");
  scanf("%f",&distancia);
  printf("Digite o tempo em minutos:");
  scanf("%d",&tempo);

  //saida
  printf("A distancia percorrida em M/S eh: %.2f\n",calculaDistanciaPercorrida(tempo,distancia));


  return 0;
}
