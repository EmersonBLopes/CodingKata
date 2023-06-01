#include<stdio.h>
#include<assert.h>

/**
 * Elaborar um programa que leia duas matrizes A e B que armazenam 6 valores. A matriz A deve aceitar somente valores pares enquanto a matriz B deve aceitar somente valores impares, a validacao dever ser feita pelo programa.
 * construir uma matriz C que seja o resultado da juncao das matriz A e B. Apresentar a matriz C
 **/

int main(void){

  //declaracao de variaveis
  int a[6],b[6],c[12];

  //leitura de valores
  int i = 0;

  //leitura da matriz A
  do{

    printf("Digite um valor para A[%d]:",i);
    scanf("%d",&a[i]);

    if(a[i] % 2 == 0) i++;

  }while(i < 6);
  
  i = 0;

  //leitura da matriz B
  do{

    printf("Digite um valor para B[%d]:",i);
    scanf("%d",&b[i]);

    if(b[i] % 2 != 0) i++;

  }while(i < 6);

  //processamento
  for(int i = 0; i < 6; i++){
    c[i] = a[i];
  }

  for(int i = 6; i < 12; i++){
    c[i] = b[i-6];
  }

  /**TESTES UNITARIOS**/
  for(int i = 0; i < 12; i++){

    if(i < 6){
      assert(c[i] == a[i]);
    }else{
      assert(c[i] == b[i - 6]);
    }

  }

  //saida 
  for(int i = 0; i < 12; i++){
    printf("C[%d] = %d\n",i,c[i]);
  }

  return 0;
}

