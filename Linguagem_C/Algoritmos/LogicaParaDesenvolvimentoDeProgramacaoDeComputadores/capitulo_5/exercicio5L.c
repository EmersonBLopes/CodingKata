#include<stdio.h>

int main(void){

  //declaracao de variaveis
  int valores[15];
  int i = 0;
  int somatorio = 0;

  //leitura de valores
  while(i < 15){
    printf("Digite o valor %d:\n",i+1);
    scanf("%d",&valores[i]);
    somatorio += valores[i];
    i++;
  }

  //saida
  printf("O somatorio de todos o valores eh: %d\n",somatorio);
  return 0;
}
