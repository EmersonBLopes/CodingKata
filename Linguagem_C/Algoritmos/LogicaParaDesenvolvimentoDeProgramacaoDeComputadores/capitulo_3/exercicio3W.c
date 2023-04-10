#include<stdio.h>

float convertePesParaMetros(float medidaEmPes){
  return medidaEmPes * 0.3048;
}

int main(void){

  //declaracao de variavel
  float medidaEmPes;

  //leitura de valores
  printf("Digite a medida em pes:");
  scanf("%f",&medidaEmPes);

  //saida
  printf("A medida equivalente em metros eh: %.2fm\n",convertePesParaMetros(medidaEmPes));

  return 0;
}
