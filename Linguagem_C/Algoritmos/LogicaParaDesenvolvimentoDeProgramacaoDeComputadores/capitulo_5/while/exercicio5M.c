#include<stdio.h>

/*
 * ler dez valores e calcular o somatorio e a media dos valores
 */

int main(void){

  //declaracao de variaveis
  int valores[10];
  int i = 0;
  int somatorio = 0;
  int media = 0;

  //leitura de valores e processamento
  while(i < 10){
    printf("Digite o valor %d:\n",i+1);
    scanf("%d",&valores[i]);
    somatorio += valores[i];
    i++;
  }

  media = somatorio / 10;

  //saida
  printf("O somatorio de todos o valores eh: %d\n",somatorio);
  printf("A media eh : %d\n",media);
  return 0;
}
