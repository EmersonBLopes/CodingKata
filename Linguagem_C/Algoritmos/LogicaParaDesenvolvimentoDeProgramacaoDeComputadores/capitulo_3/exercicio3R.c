#include<stdio.h>

float calculaPorcentagem(int numeroDeEleitores, int votos){
  return votos * 100 / numeroDeEleitores;
}

int main(void){

  //declaracao de variaveis
  int candidatoA, candidatoB, candidatoC, votosNulos,votosBrancos,numeroDeEleitores;

  //leitura dos valores
  printf("Digite a quantidade de votos do candidato A:");
  scanf("%d",&candidatoA);
  printf("Digite a quantidade de votos do candidato B:");
  scanf("%d",&candidatoB);
  printf("Digite a quantidade de votos do candidato C:");
  scanf("%d",&candidatoC);
  printf("Digite a quantidade de votos nulos:");
  scanf("%d",&votosNulos);
  printf("Digite a quantidade de votos em branco:");
  scanf("%d",&votosBrancos);

  //processamento
  numeroDeEleitores = candidatoA + candidatoB + candidatoC + votosNulos + votosBrancos;

  //saida
  printf("A porcentagem de votos do canditado A eh: %.2f%%\n",calculaPorcentagem(numeroDeEleitores,candidatoA));
  printf("A porcentagem de votos do canditado B eh: %.2f%%\n",calculaPorcentagem(numeroDeEleitores,candidatoB));
  printf("A porcentagem de votos do canditado C eh: %.2f%%\n",calculaPorcentagem(numeroDeEleitores,candidatoC));
  printf("A porcentagem de votos nulos eh: %.2f%%\n",calculaPorcentagem(numeroDeEleitores,votosNulos));
  printf("A porcentagem de votos em branco eh: %.2f%%\n",calculaPorcentagem(numeroDeEleitores,votosBrancos));

  return 0;
}
