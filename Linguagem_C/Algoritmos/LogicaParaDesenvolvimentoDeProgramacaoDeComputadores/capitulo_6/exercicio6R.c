#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

/**
 * Criar duas matrizes unidemensionais A e B que armazenao 6 valores inteiros. construir mais duas matrizes C e D em que a matriz C dever ser formada pelos os elementos de indice impar da matriz A e B. A matriz D deve ser formada pelos elementos de indice par das matriz A e B. Apresentar os elementos das matrizes C e D.
 **/

int main(void){

  //alocando memoria
  int *a = calloc(6,sizeof(int));
  int *b = calloc(6,sizeof(int));
  int *c = calloc(6,sizeof(int));
  int *d = calloc(6,sizeof(int));

  //leitura de valores
  for(int i = 0; i < 6; i++){
    printf("Digite o valor de A[%d]:",i);
    scanf("%d",&a[i]);

    printf("Digite o valor de B[%d]:",i);
    scanf("%d",&b[i]);
  }

  //processamento
  for(int i = 0; i < 6; i+=2){
    d[i] = a[i];
    d[i+1] = b[i];
  }
  
  for(int i = 1; i < 6; i+=2){
    c[i-1] = a[i];
    c[i] = b[i];
  }

  /**TESTES UNITARIOS**/
  for(int i = 0; i < 6; i++){
    if(i % 2 == 0){
      assert(a[i] == d[i] || a[i] == d[i]);
    }else{
      assert(a[i] == c[i] || b[i] == c[i]);
    }
  }

  for(int i = 0; i < 6; i++){
    printf("C[%d] = %d\n",i,c[i]);
  }

  for(int i = 0; i < 6; i++){
    printf("C[%d] = %d\n",i,d[i]);
  }
  return 0;
}

