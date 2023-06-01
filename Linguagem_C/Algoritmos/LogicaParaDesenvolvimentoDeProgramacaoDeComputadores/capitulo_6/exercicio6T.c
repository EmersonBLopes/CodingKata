#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

/**
 * Elaborar um programa que leia duas matriz que armazenam cada uma dez valores. Construir as matriz obedecendo as seguintes regras,
 * cada elemento da matriz A deve ser divisivel por 2 e por 3.
 * cada elemento da matriz B deve ser um multiplo de 5.
 * construir uma matriz C que possui o dobro de elementos das matrizes A e B que sera a juncao das duas matrizes
 * Apresentar os elementos da matriz C
 **/

int main(void){
  
  //alocando memoria
  int *a = (int *) calloc(10,sizeof(int));
  int *b = (int *) calloc(10,sizeof(int));
  int *c = (int *) calloc(20,sizeof(int));

  //leitura de valores

  //leitura da matriz A
  for(int i = 0; i < 10;){
    printf("Digite o valor de A[%d]:",i);
    scanf("%d",&a[i]);

    if(a[i] % 2 == 0 && a[i] % 3 == 0) i++;
  }

  //leitura da matriz B
  for(int i = 0; i < 10;){

    printf("Digite o valor de B[%d]:",i);
    scanf("%d",&b[i]);

    if(b[i] % 5 == 0) i++;

  }

  //processamento
  
  //construcao da matriz C
  for(int i = 0; i < 20; i++){

    if(i < 10){
      c[i] = a[i];
    }else{
      c[i] = b[i-10];
    }

  }

  /**TESTES UNITARIOS**/

  //testa a regra de construcao das matrizes
  for(int i = 0; i < 10; i++){

    assert(a[i] % 2 == 0 && a[i] % 2 == 0);
    assert(b[i] % 5 == 0);

  }

  //testa a construcao da matriz C
  for(int i = 0; i < 20; i++){
    i < 10 ? assert(a[i] == c[i]) : assert(b[i-10] == c[i]);
  }

  //desaloca memoria
  free(a);
  free(b);

  //saida
  for(int i = 0; i < 20; i++){
    printf("C[%d] = %d\n",i,c[i]);
  }
  
  return 0;
}

