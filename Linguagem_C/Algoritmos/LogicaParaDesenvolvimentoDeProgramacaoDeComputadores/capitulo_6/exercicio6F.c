#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

/**
 * criar duas matrizes A e B que comportam 15 elementos cada armazenando um valor inteiro qualquer. Apartir destas matrizes criar a matriz C que comporta o dobro de elemetos das matrizes A e B e armazenar os elementos das matrizes A E B dentro da matriz C. Ao final apresentar os elementos da matriz C
 **/

int main(void){

    //declaracao de variaveis
    int *a = (int *) calloc(15,sizeof(int));
    int *b = (int *) calloc(15,sizeof(int));
    int *c = (int *) calloc(30,sizeof(int));

    //leitura de valores
    for(int i = 0; i < 15; i++){
        a[i] = i;
        b[i] = i+1;
    }

    //processamento 
    for(int i = 0; i < 30; i++){
        c[i] = i < 15 ? a[i] : b[i-15];
    }

    //saida
    for(int i = 0; i < 30; i++){
        printf("c[%d] = %d\n",i,c[i]);
    }
    

    /**TESTES UNITARIOS**/
                                                
    //verifica se a matriz C possui todos os elementos das matrizes A e B
    for(int i = 0; i < 30; i++){
        if(i < 15){
            assert(c[i] == a[i]);
        }else{
            assert(c[i] == b[i-15]);
        }
    }

    return 0;
}

