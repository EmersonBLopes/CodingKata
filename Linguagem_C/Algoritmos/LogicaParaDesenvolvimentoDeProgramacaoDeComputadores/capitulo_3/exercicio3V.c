#include<stdio.h>

int calculaExponenciacao(int base, int expoente){

  if(expoente == 1) return base; 
  return calculaExponenciacao(base,expoente-1) * base;
}

int main(void){

  //declaracao de variaveis
  int base, expoente;

  //leitura dos valores
  printf("Digite o valor da base:");
  scanf("%d",&base);
  printf("Digite o valor do expoente:");
  scanf("%d",&expoente);

  //saida
  printf("%d ^ %d = %d\n",base,expoente,calculaExponenciacao(base,expoente));
  return 0;
}
