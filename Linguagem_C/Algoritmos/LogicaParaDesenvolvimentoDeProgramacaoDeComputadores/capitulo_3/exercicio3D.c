#include <stdio.h>

float calculaDistanciaPercorrida(float velocidadeMedia, unsigned int tempoDeViagem){
  return velocidadeMedia * tempoDeViagem; 
}

float calculaQuantidadeDeLitrosGastos(float distanciPercorrida){
  return distanciPercorrida / 12;
}

int main(void){

  float velocidadeMedia; 
  unsigned int tempoDeViagem; 

  printf("Digite a velocidade media da viagem em km/h:");
  scanf("%f",&velocidadeMedia);

  printf("Digite o tempo de viagem em minutos:");
  scanf("%i",&tempoDeViagem);

  float distanciaPercorrida = calculaDistanciaPercorrida(velocidadeMedia,tempoDeViagem);
  float litrosGastos = calculaQuantidadeDeLitrosGastos(distanciaPercorrida);

  printf("Velocidade media: %.2fKm/h\nTempo de viagem: %imin\nCombustivel gasto: %.2f\n",velocidadeMedia,tempoDeViagem,litrosGastos);
  return 0;
}
