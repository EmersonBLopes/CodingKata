#include<stdio.h>

void combinacoesPossiveis(int a,int b,int c, int d){
 
  //combinacao de somas
  printf("%d + %d = %d\n",a,b,a+b);
  printf("%d + %d = %d\n",a,c,a+c);
  printf("%d + %d = %d\n",a,d,a+d);
  printf("%d + %d = %d\n",b,c,b+c);
  printf("%d + %d = %d\n",b,d,b+d);
  printf("%d + %d = %d\n",c,d,c+d);

  //combinacao da multiplicoes
  printf("%d X %d = %d\n",a,b,a*b);
  printf("%d X %d = %d\n",a,c,a*c);
  printf("%d X %d = %d\n",a,d,a*d);
  printf("%d X %d = %d\n",b,c,b*c);
  printf("%d X %d = %d\n",b,d,b*d);
  printf("%d X %d = %d\n",c,d,c*d);

  return;
}

int main(void){

  int a,b,c,d;

  //lendo o valor da variavies

  printf("Digite o valor de a:");
  scanf("%d",&a);

  printf("Digite o valor de b:");
  scanf("%d",&b);

  printf("Digite o valor de c:");
  scanf("%d",&c);

  printf("Digite o valor de d:");
  scanf("%d",&d);

  //combinando variaveis
  combinacoesPossiveis(a,b,c,d);
  return 0; 
}
