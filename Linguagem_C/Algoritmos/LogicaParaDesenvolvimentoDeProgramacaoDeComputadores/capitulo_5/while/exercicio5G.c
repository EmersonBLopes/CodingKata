#include<stdio.h>

/**
 * Aprensentar o resultado potencia de base 3 elevado a um expoente que varia de 0 a 15.
 */

//calcula a potencia utilizando da recursividade
int calculaPotencia(int expoente){

  int resultado = 0;

  if(expoente == 0) return 1;

  if(expoente > 1){
    resultado += calculaPotencia(expoente-1)*3;
  }else{
    return 3;
  }
  
  return resultado;
}

int main(void){

  //declaracao de variaves
  int expoente,i, resultado;

  //entrada de dados
  printf("Digite o valor do expoente:");
  scanf("%d",&expoente);

  //saida e processamento
  if(expoente < 16 && expoente >= 0){
    i = 0;
    while(i <= expoente){
      resultado = calculaPotencia(i);
      printf("3 ^ %d = %d\n",i,resultado);
      i++;
    }
  }
  return 0;
}
