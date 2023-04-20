#include<stdio.h>

int encontraMaiorValor(int a, int b, int c, int d, int e){

  if(a > b && a > c && a > d && a > e){
    return a;
  }else if(b > c && b > d && b > e){
    return b;
  }else if(c > d && c > e){
    return c;
  }else if(d > e){
    return d;
  }else{
    return e;
  }
}

int encontraMenorValor(int a, int b, int c, int d, int e){

  if(a < b && a < c && a < d && a < e){
    return a;
  }else if(b < c && b < d && b < e){
    return b;
  }else if(c < d && c < e){
    return c;
  }else if(d < e){
    return d;
  }else{
    return e;
  }

}

int main(void){

  //declaracao de variaveis
  int a,b,c,d,e;
  int maiorValor,menorValor;

  //leitura de valores
  printf("Digite o primeiro valor:");
  scanf("%d",&a);
  printf("Digite o segundo valor:");
  scanf("%d",&b);
  printf("Digite o terceiro valor:");
  scanf("%d",&c);
  printf("Digite o quarto valor:");
  scanf("%d",&d);
  printf("Digite o quinto valor:");
  scanf("%d",&e);

  //processamento e saida
  maiorValor = encontraMaiorValor(a,b,c,d,e);
  menorValor = encontraMenorValor(a,b,c,d,e);

  printf("O maior valor eh:%d\n",maiorValor);
  printf("O menor valor eh:%d\n",menorValor);

  return 0;
}
