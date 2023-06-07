#include<stdio.h>
#include<stdlib.h>
#include<assert.h>


/**
 * Elaborar um programa que leia 12 elementos reais em uma matriz A. Apos isso ordernar os elementos da matriz A em ordem crecente.
 * Criar uma matriz B que possui o mesmo tipo e tamanho da matriz B. Ordernar a matriz B em ordem crecente.
 * Contruir uma matriz C que cada elemento seja a soma da matriz A com o elemento correspondente da matriz B. Ordernar a matriz C em ordem decrecente
 * Apresentar os valores da matriz C
 **/

void ordenaOrdemCrecente(int *vetor){

  for(int i = 0; i < 11; i++){

    for(int j = i+1; j < 12; j++){

      if(vetor[i] > vetor[j]){
        int x = vetor[i];
        vetor[i] = vetor[j];
        vetor[j] = x;
      }

    }

  }

}

void ordenaOrdemDecrecente(int *vetor){

  for(int i = 0; i < 11; i++){

    for(int j = i+1; j < 12; j++){

      if(vetor[i] < vetor[j]){
        int x = vetor[i];
        vetor[i] = vetor[j];
        vetor[j] = x;
      }

    }

  }

}

int main(void){

  //alocacao de memoria
  int *a = (int *) calloc(12,sizeof(int));
  int *b = (int *) calloc(12,sizeof(int));
  int *c = (int *) calloc(12,sizeof(int));

  //leitura de valores
  for(int i = 0; i < 12; i++){
    printf("Digite o valor de A[%d]:",i);
    scanf("%d",&a[i]);
    printf("Digite o valor de B[%d]:",i);
    scanf("%d",&b[i]);
  }

  //ordenando matrizes
  ordenaOrdemCrecente(a);
  ordenaOrdemCrecente(b);

  /**TESTES UNITARIOS**/
  for(int i = 0; i < 11; i++){

    for(int j = i+1; j < 12; j++){
      assert(a[i] <= a[j]);
      assert(b[i] <= b[j]);
    }

  }

  //construindo a matriz C
  for(int i = 0; i < 12; i++){
    c[i] = a[i] + b[i];
  }

  //desalocando memoria
  free(a);
  free(b);

  ordenaOrdemDecrecente(c);

  /**TESTES UNITARIOS**/
  for(int i = 0; i < 11; i++){

    for(int j = i+1; j < 12; j++){
      assert(c[i] >= c[j]);
    }

  }

  for(int i = 0; i < 12; i++){
    printf("C[%d] = %d\n",i,c[i]);
  }

  return 0;
}

