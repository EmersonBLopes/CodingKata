#include<stdio.h>

void apresentaEmOrdemCrecente(int a,int b,int c){

  int  menorValor, medioValor,maiorValor;

  //descobre qual o maior valor
  if(a > b && a > c){
    maiorValor = a;
  }else if(b > c){
    maiorValor = b;
  }else{
    maiorValor = c;
  }

  //descobre o menor valor
  if(a < b && a < c){
    menorValor = a;
  }else if(b < c){
    menorValor = b;
  }else{
    menorValor = c;
  }

  //descobre o valor do meio
  if(a > menorValor && a < maiorValor){
    medioValor = a;
  }else if(b > menorValor && b < maiorValor){
    medioValor = b;
  }else{
    medioValor = c;
  }

  printf("O menor valor eh:%d\n",menorValor);
  printf("O medio valor eh:%d\n",medioValor);
  printf("O maior valor eh:%d\n",maiorValor);
}

int main(void){

  //declaracao de variaveis
  int a,b,c;

  //leitura de valores
  printf("Digite o valor de A:");
  scanf("%d",&a);
  printf("Digite o valor de B:");
  scanf("%d",&b);
  printf("Digite o valor de C:");
  scanf("%d",&c);

  apresentaEmOrdemCrecente(a,b,c);
  return 0;
}
