#include<stdio.h>

/**
 * Criar um programa que efetue a leitura de valores ate que um valor negativo seja solicitado, ao final apresentar o total de valores lidos, somatorio e media dos valores lidos
 **/

int main(void){

  //Declarcao e inicializacao de variaveis
  float valor,media, somatorio = 0;
  int contador; 

  //entrada de valores
  for(contador = 0; valor >= 0; contador++){
    printf("Digite um valor positivo:");
    scanf("%f",&valor);

    if(valor >= 0){
      somatorio+= valor;

    } else{
      contador -= 1;
    }
  }

  //processamento
  media = somatorio / contador;

  //saida
  printf("Quantidade de valores lidos: %d\n",contador);
  printf("Somatorio dos valores lidos:%.2f\n",somatorio);
  printf("Media dos valores lidos: %.2f\n",media);


  return 0;
}

