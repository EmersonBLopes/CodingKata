#include<stdio.h>

double calculaPrestacao(double valor, double taxa, int tempo){
  return valor+(valor*(taxa/100)*tempo);
}

int main(void){
  double valor,taxa;
  int tempo;

  printf("Digite o valor:");
  scanf("%lf",&valor);

  printf("Digite a taxa:");
  scanf("%lf",&taxa);

  printf("Digte o tempo:");
  scanf("%i",&tempo);

  printf("A taxa a ser cobrada eh: R$%.2lf\n",calculaPrestacao(valor,taxa,tempo));
  return 0;
}
