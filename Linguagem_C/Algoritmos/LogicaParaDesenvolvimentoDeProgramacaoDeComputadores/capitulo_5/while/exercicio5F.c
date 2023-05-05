#include<stdio.h>

/**
 * Apresentar todos o valores divisiveis por 4 e menores que 200
 */

int main(void){

  //declaracao de variaveis
  int i = 1;

  //processamento e saida
  while(i < 200){
    if(i % 4 == 0){
      printf("%d eh d visivel por 4.\n",i);
    }
    i++;
  }

  return 0;
}
