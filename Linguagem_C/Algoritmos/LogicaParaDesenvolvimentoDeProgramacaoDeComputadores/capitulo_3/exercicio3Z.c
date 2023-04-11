#include<stdio.h>
#include<math.h>

int calculaQuadradoDivisao(int a, int b){
  return pow((a/b),2);
}

int main(void){
  //declaracao de variaveis
  int a,b;

  //leitura de valores
  printf("Digite o valor da variavel A:");
  scanf("%d",&a);
  printf("Digite o valor da variavel B:");
  scanf("%d",&b);

  //processamento e saida
  printf("O quadrado da divisao de %d e %d eh: %d\n",a,b,calculaQuadradoDivisao(a,b));
  return 0;
}
