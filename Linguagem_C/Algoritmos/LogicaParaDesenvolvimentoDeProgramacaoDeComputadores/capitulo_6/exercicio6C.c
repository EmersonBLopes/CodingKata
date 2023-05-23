#include<stdio.h>
#include<stdlib.h>

/**
 * ler 20 valores reais em duas matrizes, a e b, apos isso criar a matriz c subtraindo o elemento da matriz a pelo o elemento de indice equivalente da matriz b C[i] <- A[i] - B[i] 
 **/

int main(void){

  //declaracao de variaveis
  float  *a = (float *) calloc(20,sizeof(float));
  float  *b = (float *) calloc(20,sizeof(float));
  float  *c = (float *) calloc(20,sizeof(float));

  //leitura de valores
  for(int i = 0; i < 20; i++){

    printf("Digite o valor de A[%d]:",i);
    scanf("%f",&a[i]);

  }

  for(int i = 0; i < 20; i++){

    printf("Digite o valor de B[%d]:",i);
    scanf("%f",&b[i]);

  }

  //processamento
  for(int i = 0; i < 20; i++){
    c[i] = a[i] - b[i];
  }

  free(a);
  free(b);

  //saida

  for(int i = 0; i < 20; i++){
    printf("%d. %.2f\n",i+1,c[i]);
  }

  return 0;
}

