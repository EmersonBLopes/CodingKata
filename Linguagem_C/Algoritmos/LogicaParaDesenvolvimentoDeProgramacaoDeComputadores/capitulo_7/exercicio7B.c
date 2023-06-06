#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

/**
 * EXERCICIO RUIM
 * Elaborar um programa que leia 8 valores inteiros
 * Criar um matriz B que seja composta pelos elementos da matriz a vezes 5
 * elaborar uma rotina de pesquisa binaria para consultar os elementos da matriz B
 **/

void ordernarEmOrdemCrecente(int *array){

  for(int i = 0; i < 7; i++){

    for(int j = i+1; j < 8; j++){

      if(array[i] > array[j]){
        int x = array[i];
        array[i] = array[j];
        array[j] = x;
      }

    }
  }

  return;
}

void pesquisa(int *array,int valorProcurado){

  int inicio = 0;
  int fim = 7;
  int meio;
  int encontrou = 0;

  for(int i = 0; i < 8; i++) printf("%d\n",array[i]);

  while(inicio <= fim && !encontrou){

    meio = (inicio+fim)/2;
    printf("%d\n",meio);

    if(valorProcurado > array[meio]){
      inicio = meio+1;
    }else if(valorProcurado < array[meio]){
      fim = meio-1;
    }else{
      encontrou = 1;
    }
  }

  encontrou ? printf("Indice do valor: %d\nValor:%d\n",meio,array[meio]) : printf("Valor nao encontrado.\n\b");

  return;
}


int main(void){

  //alocando memoria
  int *a = (int *) calloc(8,sizeof(int));
  int *b = (int *) calloc(8,sizeof(int));

  //leitura de valores
  for(int i = 0; i < 8; i++){
    printf("Digite o valor %d:",i);
    scanf("%d",&a[i]);
  }

  //construcao da matriz B
  for(int i = 0; i < 8; i++){
    b[i] = a[i] * 5;
  }

  //desalocando memoria
  free(a);

  //ordernando valores
  ordernarEmOrdemCrecente(b);

  /**Teste unitario**/
  for(int i = 0; i < 7; i++){
    for(int j = i+1; j < 8; j++){
      assert(b[i] <= b[j]);
    }
  }

  int valor;

  //pesquisa e saida
  printf("Digite o valor que deseja encontrar:");
  scanf("%d",&valor);

  pesquisa(b,valor);

  return 0;
}

