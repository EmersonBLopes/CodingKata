#include<stdio.h>

/**
 * apresentar a sequencia de fibonacci ate o decimo quinto termo
 */

int main(void){
  //declaracao de variaveis
  int anterior,atual,proximo,i;
  anterior = 0;
  atual = 1;
  i = 1;
  
  //processamento e saida
  while(i <= 15){

    proximo = anterior + atual;

    //saida
    if(i != 15){
      printf("%d ",atual);
    }else{
      printf("%d\n",atual);
    }

    anterior = atual;
    atual = proximo;
    i++;
  }
  
  
  
  return 0;
}
