#include<stdio.h>

/**
 * efetuar a leitura de valoes enquanto o valor inserido for positivo
 * apos isso calcular o somatorio e a media dos valores inseridos
 */

int main(void){

  //declaracao de variaveis
  int valor,contador,somatorio,media;
  
  somatorio = 0;
  media = 0;
  contador = 0;

  //processamento
  while(valor >= 0){
    printf("Digite o valor desejado:");
    scanf("%d",&valor);
    if(valor > 0){
      somatorio += valor;
      contador++;
    }
  }
  media = somatorio / contador;

  //saida
  printf("O somatorio dos valores eh: %d\n",somatorio);
  printf("A media eh: %d\n",media);

  return 0;
}
