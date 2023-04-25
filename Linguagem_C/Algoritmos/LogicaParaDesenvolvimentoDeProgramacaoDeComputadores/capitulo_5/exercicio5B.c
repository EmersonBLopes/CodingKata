#include<stdio.h>

int main(void){

  //declaracao de variaveis 
  int valor,i;

  //entrada do usuario
  printf("Digite o numero que deseja consultar a tabuada:");
  scanf("%d",&valor);

  //saida
  while(i < 11){
    printf("%d X %d = %d\n",i,valor,i*valor);
    i++;
  }

  return 0;
}
