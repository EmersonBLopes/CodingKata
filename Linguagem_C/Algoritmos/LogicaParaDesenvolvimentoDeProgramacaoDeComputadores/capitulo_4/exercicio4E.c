#include<stdio.h>
#include<math.h>

int * calculaX(int a, int b, int c){

  int delta = 0; 
  static int x[2];

  delta = (pow(b,2)-4*a*c);

  printf("%d\n",delta);
  if(delta < 0){

    printf("Não há solução real\n");

  }else{
    if(delta > 0){

      x[0] = (b - sqrt(delta))/(2*a);
      x[1] = (b + sqrt(delta))/(2*a);
      printf("A duas solucoes:\nX1 = %d\nX2 = %d\n",x[0],x[1]);
    }else{
      x[0] = (b + sqrt(delta))/(2*a);
      printf("A uma solucao:\nX = %d\n",x[0]);
    }
  }  
  return x; 
}

int main(void){

  //declaracao de variaves
  int a,b,c;
  int *x;

  //leitura de valores
  printf("Digite o valor de a:");
  scanf("%d",&a);
  printf("Digite o valor de b:");
  scanf("%d",&b);
  printf("Digite o valor de c:");
  scanf("%d",&a);

  //calculando X
  x = calculaX(a,b,c);

  return 0;
}
