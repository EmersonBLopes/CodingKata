#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

/**
 *Ler 25 elementos reais em uma matriz que armazenara a temperatura em graus celsius, criar uma segunda matriz de mesma dimensao e tipo que armazena a temperatura do indice equivalente da primeira matriz em graus fahrenheit
 **/

int main(void){

    //declaracao de variaveis
    float *temperaturasCelsius = (float *) calloc(25,sizeof(int));
    float *temperaturasFahrenheit = (float *) calloc(25,sizeof(int));

    //leitura de valores
    for(int i = 0; i < 25; i++){
        printf("Digite a temperatura[%d] em graus celsius:",i);
        scanf("%f",&temperaturasCelsius[i]);
    }

    //processamento
    for(int i = 0; i < 25; i++){
        temperaturasFahrenheit[i] = (temperaturasCelsius[i] * 9/5) + 32;
    }

    /**TESTE UNITARIO**/
    for(int i = 0; i < 25; i++){
        assert(temperaturasFahrenheit[i] == (temperaturasCelsius[i] * 9/5) + 32);
    }

    //saida
    for(int i = 0; i < 20; i++){
        printf("%.2f C = %.2f F\n",temperaturasCelsius[i],temperaturasFahrenheit[i]);
    }
        
    return 0;
}

