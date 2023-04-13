#include<stdio.h>

/**
 * calcular a media apartir de notas bimestrais e apresentar um mensagem informando se o aluno foi aprovado ou reprovado
 */

float calculaMedia(float bimestres[]){

  float md = 0;

  for(int i = 0; i < 3; i++){
    md = md + bimestres[i];
  }

  return md / 4;
}

int main(void){
  
  //declaracao de variaveis
  float bimestres[4];

  //letura de valores
  for(int i = 0; i < 4; i++){
    printf("Digite o valor da nota do bimestre %d:",i+1);
    scanf("%f",&bimestres[i]);
  }

  //processamento
  float md = calculaMedia(bimestres);

  //saida
  if(md >= 5){
    printf("Aprovado\n");
  }else{
    printf("reprovado\n");
  }

  return 0;
}
