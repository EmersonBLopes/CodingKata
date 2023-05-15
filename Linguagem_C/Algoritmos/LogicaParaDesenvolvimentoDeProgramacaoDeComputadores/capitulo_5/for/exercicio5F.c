#include<stdio.h>

/**
 * Apresentar todos os valores impares na faixa de 0 a 20
 **/

int main(void){

    for(int i = 0; i < 21; i++){
        if(!(i % 2 == 0)){

            i != 19 ? printf("%d ",i) : printf("%d\n",i);

        } 
    }

    return 0;
}

