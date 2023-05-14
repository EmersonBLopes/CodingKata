#include<stdio.h>

/**
 *Elaborar um programa que apresente os quadrados dos numeros inteiros na faixa de 15 a 200
**/

int main(void){

  for(int i = 15; i <= 200; i++){
    printf("%d ^ 2 = %d\n",i, i * i);
  }

 return 0;
}

