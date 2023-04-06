#include<stdio.h>

double converteDolarParaReal(float cotacao, double saldo){
  return saldo / cotacao;
}

int main(void){

  //declaracao de variaveis
  float cotacao;
  double saldo;

  //leitura dos valores
  printf("Digite a cotacao atual do dolar:");
  scanf("%f",&cotacao);
  printf("Digite o saldo em conta em BRL:");
  scanf("%lf",&saldo);

  //saida
  printf("O saldo equivalente em dolar eh: US$%2.lf\n",converteDolarParaReal(cotacao,saldo));
  
  return 0;
}
