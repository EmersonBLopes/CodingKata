#include<stdio.h>
#include<limits.h>

/**
 * apresentar o somatorio de graos que caberam dentro de um tabuleiro de xadrez, a quantidade de graos dobra a cada casa do tabuleiro
 */
int main(void){
  //declaracao de variaveis 
  int casaAtual;
  unsigned long long somatorioDeGraos,graos;

  casaAtual = 0;
  //processamento
  while(casaAtual < 64){
    if(casaAtual == 0){

      graos = 1;
      somatorioDeGraos = graos;
    }else{
      graos *= 2;
      somatorioDeGraos += graos;
    } 
    printf("%d %llu\n",casaAtual,graos);
    casaAtual++;
  }

  //saida
  printf("O somatorio dos graos eh: %llu\n",somatorioDeGraos);
  return 0;
}
