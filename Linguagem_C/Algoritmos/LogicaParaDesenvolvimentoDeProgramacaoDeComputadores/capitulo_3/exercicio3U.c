#include<stdio.h>
#include<math.h>

float calculaVolumeEsfera(float raio){
  return (4/3) * 3.14159 * pow(raio,3);
}

int main(void){
  
  //declaracao de variavel
  float raio;

  //leitura de valores
  printf("Digite o valor do raio:");
  scanf("%f",&raio);

  //saida
  printf("O volume da esfera eh: %.2f\n",calculaVolumeEsfera(raio));

  return 0;
}
