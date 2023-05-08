#include<stdio.h>

/**
 * Apresentar a sequencia de fibonacci ate o decimo quinto termo
**/

int main(void){
  //declaracao de variaveis
  int atual, anterior, proximo,i;

  anterior = 1;
  atual = 1;
  proximo = atual + anterior;
  i = 1;

  //processamento e saida
  do{

    if(i == 1){

      printf("%d ",anterior);
      printf("%d ",atual);
    }else if(i < 14){
      printf("%d ",atual);
    }else{
      printf("%d\n",atual);
    }

    anterior = atual; 
    atual = proximo;
    proximo = anterior + atual;

    i++;

  }while(i < 15);
  return 0;
}
