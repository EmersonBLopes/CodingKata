#include<stdio.h>
#include<math.h>

int diferencaDoQuadrado(int a, int b){
  return pow(a-b,2);
}

int main(void){

  //declarando variavies
  int a,b; 

  //lendo os valores;
  printf("Digite o valor de a:");
  scanf("%d",&a);
  printf("Digite o valor de b:");
  scanf("%d",&b);

  //imprime a saida
  printf("O valor do quadrado da diferença de %d e %d eh: %d\n",a,b,diferencaDoQuadrado(a,b));

  return 0;
}
