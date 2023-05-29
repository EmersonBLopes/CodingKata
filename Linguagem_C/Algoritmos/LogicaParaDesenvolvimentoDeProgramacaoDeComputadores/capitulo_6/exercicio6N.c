#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

/**
 * efetuar a leitura de 20 elementos reais que armazena temperaturas em graus celsius dentro de uma matriz, apresentar a menor e a maior temperatura lida, apresentar a media das temperaturas lidas
 **/

int main(void){

    //alocao de memoria
    float *temperaturas = (float *) calloc(20,sizeof(float));
    float menorTemperatura = 0;
    float maiorTemperatura = 0;
    float media = 0;

    //leitura de valores
    for(int i = 0; i < 20; i++){
        printf("Digite a temperatura[%d]:",i);
        scanf("%f",&temperaturas[i]);
    }

    //processamento
    for(int i = 0; i < 20; i++){

        if(i == 0) menorTemperatura = temperaturas[i];
        
        if(temperaturas[i] > maiorTemperatura){
            maiorTemperatura  = temperaturas[i];
        }else if(temperaturas[i] < menorTemperatura){
            menorTemperatura = temperaturas[i];
        }

        media += temperaturas[i];
    }

    media /= 20;

    //desalocando memoria
    free(temperaturas);

    /**TESTE UNITARIO**/
    for(int i = 0; i < 20; i++){
        assert(menorTemperatura <= temperaturas[i]);
        assert(maiorTemperatura >= temperaturas[i]);
    }

    //saida
    printf("A maior temperatura registrada foi:%.2f\n",maiorTemperatura);
    printf("A menor temperatura registrada foi:%.2f\n",menorTemperatura);
    printf("A media das temperaturas registrada eh:%.2f\n",media);

    return 0;
}

