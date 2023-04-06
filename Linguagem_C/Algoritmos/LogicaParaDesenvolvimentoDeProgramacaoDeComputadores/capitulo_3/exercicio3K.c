#include<stdio.h>

/**
 *converte dolar para real
 */
double converteDolarParaReal(float cotacaoDolar, double saldoEmDolar){
  return saldoEmDolar * cotacaoDolar;
}
int main(void){
  
  //declaracao das variaveis
  float cotacaoDolar;
  double saldoEmDolar;
  
  //leitura dos valores
  printf("Digite a cotacao atual do dolar:");
  scanf("%f",&cotacaoDolar);

  printf("Digite o saldo em dolar:");
  scanf("%lf",&saldoEmDolar);

  //saida
  printf("O saldo equivalete em real eh: R$%.2lf\n",converteDolarParaReal(cotacaoDolar,saldoEmDolar));
  return 0;
}
