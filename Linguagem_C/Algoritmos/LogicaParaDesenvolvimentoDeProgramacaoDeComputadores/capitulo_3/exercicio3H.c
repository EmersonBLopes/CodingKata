#include <stdio.h>

float calculaVolumeCaixaRetangular(float comprimento, float altura, float largura){
  return comprimento * largura * altura;
}

int main(void){
  float comprimento, altura,largura;

  //lê valores
  printf("Digite o comprimento da caixa:");
  scanf("%f",&comprimento);
  printf("Digite a altura da caixa:");
  scanf("%f",&altura);
  printf("Digite a largura da caixa:");
  scanf("%f",&largura);

  printf("O volume da caixa eh: %.2fL\n",calculaVolumeCaixaRetangular(comprimento,altura,largura));
  return 0;
}
