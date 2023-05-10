#include<stdio.h>

/**
 * ler quinze valores numericos inteiros e apresentar ao final o somatorio da fatorial de cada valor lido
**/

int main(void){

  //declaracao de variaveis
  int i,j;
  int valores[15];
  i = 0;
  j = 0;
  int somatorio = 0;
  int fatorial = 1;

  //leitura de valores
  do{
    printf("Digite o valor %d:",i);
    scanf("%d",&valores[i]);
    i++;
  }while(i < 15);
  
  i = 0;

  //processamento
  do{

    do{
      
      fatorial = fatorial * j;
      j++;
    }while(j <= valores[i]);

    somatorio += fatorial;

    fatorial = 1;
    j = 1;

    i++;
  }while(i < 15);

  printf("O valor do somatorio das fatoriais eh: %d\n",somatorio);
  
  return 0;
}
