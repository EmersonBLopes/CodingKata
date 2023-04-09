#include<stdio.h>

float divisao(float a, float b){
  return a/b;
}

float multiplicacao(float a, float b){
  return a*b;
}

float subtracao(float a, float b){
  return a-b;
}

float soma(float a, float b){
  return a+b;
}

int main(void){

  //declaracao de variavel
  float a,b;

  //leitura dos valores
  printf("Digite o valor de A:");
  scanf("%f",&a);
  printf("Digite o valor de B:");
  scanf("%f",&b);

  //saida

  printf("%.2f + %.2f = %.2f\n",a,b,soma(a,b));
  printf("%.2f - %.2f = %.2f\n",a,b,subtracao(a,b));
  printf("%.2f * %.2f = %.2f\n",a,b,multiplicacao(a,b));
  printf("%.2f / %.2f = %.2f\n",a,b,divisao(a,b));

  return 0;
}
