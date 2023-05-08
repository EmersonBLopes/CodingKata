#include<stdio.h>

float converteParaFahrenheit(float celsius){
  return (celsius * 9/5) + 32;
}

int main(void){
  //declaracao de variaveis
  float celsius, fahrenheit;

  //inicializao de variavel
  celsius = 10;

  //processamento e saida
  do{

    printf("Temperatura em graus celsius: %.2f\n",celsius);
    printf("Temperatura equivalente em graus fahrenheit: %.2f\n",converteParaFahrenheit(celsius));

    celsius += 10;
  }while(celsius < 110);
  return 0;
}


