#include<stdio.h>

/**
 *Efetuar a leitura de valores numericos equanto o usuario fornecer valores positivos ao final apresentar a quantidade de valores lidos e o somatorio e a media dos valores
**/

int main(void){
  
  //declaracao e inicializacao de variaveis
  int valor, contador, somatorio, media;

  contador = 0;
  somatorio = 0;
  media = 0;

  //leitura de valores
  do{

    printf("Digite um valor:");
    scanf("%d",&valor);

    if(valor >= 0){
      somatorio += valor;
      contador++;
    } 

  }while(valor >= 0);

  //processamento
  media = somatorio / contador;

  //saida
  printf("Quantidade de valores lidos: %d\n",contador);
  printf("Somatorio dos valores lidos: %d\n",somatorio);
  printf("A media dos valores lidos eh: %d\n",media);

  return 0;
}

