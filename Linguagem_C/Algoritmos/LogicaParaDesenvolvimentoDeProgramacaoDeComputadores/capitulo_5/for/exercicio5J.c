#include<stdio.h>

/**
 * Apresentar a temperatura em graus celsius e a temperatura equivalente em graus fahrenheit de dez em dez graus
 **/

int main(void){

    //declaracao de variaveis
    float fahrenheit;
    for(float celsius = 10; celsius <= 100; celsius+=10){

        fahrenheit = (celsius * 9/5) + 32;

        //saida
        printf("Celsius: %.2f\n",celsius);
        printf("Fahrenheit: %.2f\n",fahrenheit);
    }

    return 0;
}

