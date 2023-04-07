#include<stdio.h>

int calculaProduto(int a, int b){
   return a * b;
}

int calculaSoma(int a, int b){
    return a + b;
}

int main(void){

   //declarando variaveis
   int a,b,c,d,p,s;

   //lendo valores
   printf("Digite o valor de a:");
   scanf("%d" ,&a);
   printf("Digite o valor de b:");
   scanf("%d" ,&b);
   printf("Digite o valor de c:");
   scanf("%d" ,&c);
   printf("Digite o valor de d:");
   scanf("%d" ,&d);

   //processando o resultado
   p = calculaProduto(a,c);
   s = calculaSoma(b,d);

   //saida
   printf("O resultado do produto de %d X %d eh: %d\n",a,c,p);
   printf("O resultado da soma de %d + %d eh: %d\n",b,d,s);
   
   return 0;
}
