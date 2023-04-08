#include<stdio.h>
#include<math.h>

//retorna a area da circuferencia
float calculaAreaCircuferencia(float raio){
  return 3.14159265 * pow(raio,2);
}

int main(void){
  
  //declacao de variavies
  float a, r;

  //leitura de valores
  printf("Digite o valor do raio da circuferencia:");
  scanf("%f",&r);

  //processamento
  a = calculaAreaCircuferencia(r);

  //saida
  printf("A area da circuferencia eh: %.2f\n",a);
  return 0;
}
