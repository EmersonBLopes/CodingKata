#include<stdio.h>

/**
 * Apresentar a fatorial do valores numericos impares localizados na faixa de 1 a 10
**/

int main(void){

  //declaracao e inicializacao de variveis
  int i, j, fatorial;

  i = j = fatorial = 1;

  //processamento e saida
  do{

    do{
      fatorial = fatorial * j;
      j++;
    }while(j <= i);

    printf("!%d: %d\n",i,fatorial);

    fatorial = 1;
    j = 1;
    i++;
  }while(i < 11);

 return 0;
}

