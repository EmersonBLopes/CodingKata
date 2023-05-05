#include<stdio.h>

int main(void){

  //declaracao de variaveis
  int i = 0;

  while(i < 21){

    if(!(i % 2 == 0)) printf("%d\n",i);
    i++;
  }

  return 0;
}
