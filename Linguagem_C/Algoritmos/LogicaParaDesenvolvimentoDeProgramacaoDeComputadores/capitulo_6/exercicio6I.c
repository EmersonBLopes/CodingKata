#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

/**
 *criar 3 matrizes unidimensionais A,B e c cada matriz deve comportar 5 elementos do tipo real
 *criar uma quarta matriz, matriz d, que possui o triplo de cara matriz e armazenar todos os valores das matrizes anteriores
 **/

int main(void){

    //alocando memoria
    float *a = (float *) calloc(5,sizeof(float));
    float *b = (float *) calloc(5,sizeof(float));
    float *c = (float *) calloc(5,sizeof(float));
    float *d = (float *) calloc(15,sizeof(float));

    if(a == NULL || b == NULL || c == NULL || d == NULL) printf("Erro durante a alocacao de memoria");

    //leitura de valores
    for(int i = 0; i < 5; i++){
        a[i] = i;
        b[i] = i * 2;
        c[i] = i * 3;
    }

    //processamento
    for(int i = 0; i < 15; i++){

        if(i < 5 ) d[i] = a[i];

        if(i >= 5 && i < 10) d[i] = b[i-5];
        
        if(i >= 10) d[i] = c[i-10]; 

    }
    /**TESTE UNITARIO**/
    for(int i = 0; i < 15; i++){
        if(i < 5) assert(d[i] == a[i]); 
        if(i >= 5 && i < 10) assert(d[i] == b[i-5]);
        if(i >= 10) assert(d[i] == c[i-10]);
    }

    //liberando memoria alocada
    free(a);
    free(b);
    free(c);

    //saida 
    for(int i = 0; i < 15; i++) printf("C[%d] = %.2f\n",i,d[i]);

    return 0;
}

