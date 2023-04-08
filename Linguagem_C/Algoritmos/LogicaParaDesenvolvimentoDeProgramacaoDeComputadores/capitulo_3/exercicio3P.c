#include<stdio.h>

float calculaNovoSalario(float sm, float pr){

  return sm + sm * (pr/100); 
}

int main(void){
  
  //declaracao de variaveis
  float sm, pr, ns;

  //leitura dos valores
  printf("Digite o salário mensal:");
  scanf("%f",&sm);
  printf("Digite o percentual de reajuste:");
  scanf("%f",&pr);

  //processamento
  ns = calculaNovoSalario(sm,pr);

  //saida
  printf("O novo salário eh: R$%.2f\n",ns);
}
