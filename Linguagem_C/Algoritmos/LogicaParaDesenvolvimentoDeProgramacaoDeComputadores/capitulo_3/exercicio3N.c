#include<stdio.h>
#include<math.h>

int calculaQuadradoDaSoma(int a, int b, int c){
    return pow((a+b+c),2) ;
}

int main(void){

    //declarando variaveis
    int a,b,c;

    //lendo valores
    printf("Digite o valor de a:");
    scanf("%d",&a);
    printf("Digite o valor de b:");
    scanf("%d",&b);
    printf("Digite o valor de c:");
    scanf("%d",&c);

    //saida
    printf("O resultado do quadrado da soma eh:%d\n",calculaQuadradoDaSoma(a,b,c));

    return 0;
}

