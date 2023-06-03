#include<stdio.h>

/**
 *Criar uma matriz A que armazena 30 elementos do tipo inteiro.
 * Ao final apresentar a quantidade elementos pares e elementos impares lidos
 **/

int main(void){

  //declaracao de variaveis
  int a[30];
  int contadorPares, contadorImpares;
  contadorPares = 0;
  contadorImpares = 0;

  //leitura de valores
  for(int i = 0; i < 30; i++){
    printf("Digite o valor de indice %d:",i);
    scanf("%d",&a[i]);
  }

  //processamento
  for(int i = 0; i < 30; i++){
    a[i] % 2 == 0 ? contadorPares++ : contadorImpares++;
  }

  //saida
  printf("Numero de valores pares lidos: %d\n",contadorPares);
  printf("Numero de valores impares lidos: %d\n",contadorImpares);


  return 0;
}

