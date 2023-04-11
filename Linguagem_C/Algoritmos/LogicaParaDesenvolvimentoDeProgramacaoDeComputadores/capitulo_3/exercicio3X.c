#include<stdio.h>
#include<math.h>

int calculaRaiz(int base, int indice){
  return pow(base,(1/indice));
}

int main(void){

  //declaracao de variaveis
  int base, indice;

  //entrada de dados
  printf("Digite a base:");
  scanf("%d",&base);
  printf("Digite o indice:");
  scanf("%d",&indice);

  //saida
  printf("O Resultado da raiz de base %d e indice %d eh: %d\n",base,indice,calculaRaiz(base,indice));

  return 0;
}
