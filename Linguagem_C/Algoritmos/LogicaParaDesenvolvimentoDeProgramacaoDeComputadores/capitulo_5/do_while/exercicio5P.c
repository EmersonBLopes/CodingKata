#include<stdio.h>

/**
 * Apresentar o somatorio e a media aritmetica dos valores pares situados na faixa de 50 a 70
**/

int main(void){

  //declaracao e inicilizacao de variaveis
  int i, somatorio, media, contador;

  i = 20;
  somatorio = 0;
  contador = 0;

  //processamento
  do{

    if((i - i / 2 * 2) == 0){
      somatorio += i;
      contador++;
    } 
    i++;
  }while(i < 71);

  media = somatorio / contador;
  
  //saida
  printf("O valor do somatorio eh: %d\n",somatorio);
  printf("A media aritmetica eh: %d\n",media);

 return 0;
}

