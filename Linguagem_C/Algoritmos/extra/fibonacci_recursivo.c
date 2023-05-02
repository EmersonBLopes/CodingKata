#include<stdio.h>

/**
 * Calcula a sequencia de fibonacci ate o termo desejado pelo usuario, utiliza para isto somente da recursividade
 */

int sequencia_fibonnaci(int limite){
  if(limite == 0 || limite == 1){
    return 1;
  }

  return sequencia_fibonnaci(limite - 2) + sequencia_fibonnaci(limite - 1);
}

int main(void){

  int termo, i;

  i = 0;
  //leitura de valores entrados pelo usuario
  printf("Digite ate qual termo deseja que seja apresentado:");
  scanf("%d",&termo);

  //processamento
  while(i < termo){

    if(i != termo-1){
      printf("%d ",sequencia_fibonnaci(i));
    }else{
      printf("%d\n",sequencia_fibonnaci(i));
    }
    i++;
  }
  return 0;
}
