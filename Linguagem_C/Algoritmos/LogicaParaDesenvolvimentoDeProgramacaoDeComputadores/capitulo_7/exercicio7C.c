#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

/**
 *Criar uma matriz A quem armazene 15 valores numericos inteiros
 *Construir um matriz B de mesmo tipo e dimensao que cada elemento da matriz B seja a fatorial do elemento equivalente. Apresentar os elementos da matriz B de forma crescente
 **/

int fatorial(int valor){
  if(valor > 1){
    return valor * fatorial(valor-1);
  }else if(valor == 0){
    printf("Erro impossivel calcular 0!\n");
    return 0;
  }else{
    return 1;
  }
}

void ordenaMatrizCrecente(int *matriz){

  for(int i = 0; i < 14; i++){

    for(int j = i+1; j < 15; j++){

      //troca valores
      if(matriz[i] > matriz[j]){
        int x = matriz[i];
        matriz[i] = matriz[j];
        matriz[j] = x;
      }

    }

  }

}

int main(void){

  //alocao de memoria
  int *a = (int *) calloc(15,sizeof(int));
  int *b = (int *) calloc(15,sizeof(int));

  //leitura de valores
  for(int i = 0; i < 15; i++){
    printf("Digite o valor de indice %d:",i);
    scanf("%d",&a[i]);
  }

  //construcao da tabela B
  for(int i = 0; i < 15; i++){
    b[i] = fatorial(a[i]);
  }

  //liberando memoria
  free(a);

  //ordenando valores
  ordenaMatrizCrecente(b);

  /**TESTE UNITARIO
   * Testa se a matriz B esta ordenada de forma crecente
   */
  for(int i = 0; i < 14; i++){
    for(int j = i +1; j < 15; j++){
      assert(b[i] <= b[j]);
    }
  }

  //saida
  for(int i = 0; i < 15; i++){
    printf("B[%d] = %d\n",i,b[i]);
  }

  return 0;
}

