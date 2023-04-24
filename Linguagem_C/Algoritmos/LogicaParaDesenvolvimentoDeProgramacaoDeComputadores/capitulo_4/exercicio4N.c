#include<stdio.h>

int calculaSoma(int a,int b,int c){
  return a + b + c;
}

int main(void){

  //declaracao de variaveis
  int a,b,c,somatorio;

  //leitura de valores
  printf("Digite o valor de A:");
  scanf("%d",&a);
  printf("Digite o valor de B:");
  scanf("%d",&b);
  printf("Digite o valor de C:");
  scanf("%d",&c);

  //processamento
  somatorio = calculaSoma(a,b,c);

  //saida
  if(somatorio >= 100){
    printf("O valor da soma eh: %d\n",somatorio);
  }else{
    printf("A soma nao eh menor ou igual a 100\n");
  }

  return 0;
}
