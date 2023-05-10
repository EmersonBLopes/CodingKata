#include<stdio.h>

/**
 * Calcular e apresentar o somatorio dos graos em um tabuleiro de xadrez
 */

int main(void){
  
  //Declaracao e inicializacao de variaveis
  int i = 0;
  unsigned long long graosCasaAtual, somatorioDeGraos;
  graosCasaAtual = 0;
  somatorioDeGraos = 0;

  //processamento
  do{
    graosCasaAtual = i == 0 ? 1 : graosCasaAtual * 2;
    somatorioDeGraos += graosCasaAtual;
    i++;
  }while(i < 65);

  //saida
  printf("O somatorio de graos no tabuleiro eh: %llu\n",somatorioDeGraos);
  
  return 0;
}
