#include<stdio.h>

/**
 * Apresentar a sequencia de fibonacci ate o decimo quinto termo
 **/

int main(void){

    //declaracao e inicializacao de variavies
    int anterior, atual,proximo;

    anterior = 0;
    atual = 1;
    proximo = atual + anterior;

    //processamento e saida
    for(int i = 0; i < 14; i++){

        if(i != 14){
            printf("%d ",atual);
        }else{
            printf("%d\n",atual);
        }

        anterior = atual;
        atual = proximo;
        proximo = atual + anterior;
    }

    return 0;
}

