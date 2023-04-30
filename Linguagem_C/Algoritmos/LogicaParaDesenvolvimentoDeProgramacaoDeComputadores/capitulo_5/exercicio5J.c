#include<stdio.h>

int main(void){
  //declaracao de variaveis
  float celsius,fahrenheit;
  celsius = 10;

  //processamento e saida
  while(celsius <= 100){
    
    fahrenheit = (celsius * 9/5) + 32;
    printf("Temperatura em graus celsius: %.2f C\n",celsius);
    printf("Temperatura em graus fahrenheit: %.2f F\n",fahrenheit);

    celsius+=10;
  }
  return 0;
}
