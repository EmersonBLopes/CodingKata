#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

/**
 *Criar uma matriz quem armazene 12 elementos
 *Ordernar e aprenseta-los em ordem decrecente (do maior para o menor)
 **/

int main(void){

  //alocando memoria
  int *valores = (int *) calloc(12,sizeof(int));

  //leitura de valores
  for(int i = 0; i < 12; i++){
    printf("Digite o elemento %d:",i+1);
    scanf("%d",&valores[i]);
  }

  //odernando valores
  for(int i = 0; i < 11; i++){
    for(int j = i+1; j < 12; j++){
      if(!(valores[i] > valores[j])){
        int x = valores[i];
        valores[i] = valores[j];
        valores[j] = x;
      }
    }
  }

  //saida
  for(int i = 0; i < 12; i++){
    printf("valor %d: %d\n",i+1,valores[i]);
  }

  /**Teste Unitario**/
  for(int i = 0; i < 11; i++){

    for(int j = i+1; j < 12; j++){
      assert(valores[i] >= valores[j]);
    }

  }
  return 0;
}

