#include<stdio.h>

int main(void){

  //declaracao de variaves
  int a,b,c,d;

  //leitura dos valores
  printf("Digite o valor de a:");
  scanf("%d",&a);
  printf("Digite o valor de b:");
  scanf("%d",&b);
  printf("Digite o valor de c:");
  scanf("%d",&c);
  printf("Digite o valor de d:");
  scanf("%d",&d);

  //processamento e saida
  

  if(a % 2 == 0 || a % 3 == 0){printf("%d\n",a);} 
  if(b % 2 == 0 || b % 3 == 0){printf("%d\n",b);} 
  if(c % 2 == 0 || c % 3 == 0){printf("%d\n",c);} 
  if(d % 2 == 0 || d % 3 == 0){printf("%d\n",d);} 

  return 0;
}
