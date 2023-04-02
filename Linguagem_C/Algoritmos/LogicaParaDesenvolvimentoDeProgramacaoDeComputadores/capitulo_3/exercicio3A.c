#include<stdio.h>

/**
 * Converter de graus Celsius para Fahrenheit
 */

float converteParaFahrenheit(float celsius){
  return (9*celsius+160)/5;
}

int main(void){
  float celsius;

  printf("Digite o valor em graus Celsiu para a conversão:");
  scanf("%f",&celsius);

  printf("A temperatura equivalente em graus Fahrenheit eh: %.2f\n",converteParaFahrenheit(celsius));
}
