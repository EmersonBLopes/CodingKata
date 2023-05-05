#include<stdio.h>

int main(void){

  int i = 15;

  while(i <= 200){
    printf("%d ^ 2 = %d\n",i,i*i);
    i += 1;
  }

  return 0;
}
