#include<stdio.h>

int valorSucessor(int valor){
  return valor + 1;
}

int valorAntecessor(int valor){
  return valor - 1;
}

int main(void){

  //declaracao de variavel
  int valor;

  //entrada de dados
  printf("Digite o valor:");
  scanf("%d",&valor);

  //saida
  printf("O valor antecessor eh: %d\nO valor sucessor eh:%d\n",valorAntecessor(valor),valorSucessor(valor));

  return 0;
}
