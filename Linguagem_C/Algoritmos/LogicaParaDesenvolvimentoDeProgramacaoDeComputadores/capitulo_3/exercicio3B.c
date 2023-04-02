#include <stdio.h>

/**
 * Converte de graus Fahrenheit para Celsius
 */

float converteParaCelsius(float fahrenheit){
  return ((fahrenheit-32)*5)/9;
}
int main(void){

  float fahrenheit;

  printf("Digite o valor em fahrenheit para a conversão: ");
  scanf("%f",&fahrenheit);

  printf("O valor equivalente em Celsius eh:%.2f\n",converteParaCelsius(fahrenheit));
}
