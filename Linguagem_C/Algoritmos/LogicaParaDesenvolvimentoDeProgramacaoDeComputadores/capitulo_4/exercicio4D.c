#include <stdio.h>
#include <stdbool.h>

float calculaMedia(bool exame, float notas[]){

  float ne,md;

  if(exame){

   printf("Digite a nota do exame:");
   scanf("%f",&ne);

   for(int i = 0; i < 4; i++){
    md += notas[i];
   }

   md = (md + ne) / 5; 
  }else{

   for(int i = 0; i < 4; i++){
    md += notas[i];
   }
  
   md = md / 4;
  }

  return md;
}

int main(void){

  //declaracao de variaveis
  float notas[4];
  float md1,md2;

  //leitura de valores
  for(int i = 0; i < 4; i++){

    printf("Digite a nota %d:",i+1);
    scanf("%f",&notas[i]);

  }

  //processamento
  md1 = calculaMedia(false,notas);

  if(md1 >= 7){

    printf("Aprovado\n");
    printf("A media do aluno eh: %.2f\n",md1);

  }else{
    md2 = calculaMedia(true, notas);

    if(md2 >= 5){

      printf("Aprovado em exame\n");
      printf("A media do aluno eh: %.2f\n",md2);

    }else{

      printf("Reprovado\n");
      printf("A media do aluno eh: %.2f\n",md2);

    }

  }

  return 0;
}
