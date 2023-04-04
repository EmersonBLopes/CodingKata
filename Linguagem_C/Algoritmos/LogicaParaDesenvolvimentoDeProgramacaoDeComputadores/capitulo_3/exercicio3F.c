#include <stdio.h>

int a, b;

void trocaValores(){

  int x = a;
  a = b;
  b = x;

  return;
}

int main(void){
  
  printf("digite o valor de a:");
  scanf("%d",&a);

  printf("digite o valor de b:");
  scanf("%d",&b);

  trocaValores();

  printf("O valor de a eh: %d\nO valor de b eh: %d\n",a,b);
  return 0;
}
