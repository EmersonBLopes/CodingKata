#include<stdio.h>

int main(void){

  //declaracao de variaveis
  char nome[20],sexo;

  //recebendo dados
  printf("Digite o seu nome:");
  scanf("%s",nome);
  printf("Digite o seu sexo:");
  scanf(" %c",&sexo);

  //processamento e saida
  if(sexo != 'm' && sexo != 'f'){
    printf("Sexo informado invalido\n");
  }else if(sexo == 'm'){
    printf("llmo. Sr. %s\n",nome);
  }else{
    printf("llma. Sra. %s\n",nome);
  }
  
  return 0;
}
