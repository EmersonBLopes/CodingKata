#include<stdio.h>

/**
 * Calcular o somatorio de graos que cabem em um tabuleiro de xadrez obedecendo a seguinte regra na primeira casa deve se colocar um grao, nas casas seguintes deve se colocar o dobro de graos da casa anterior
 **/

int main(void){

    //declaracao e inicializacao de variavies
    int graos = 1;
    unsigned long long somatorio = 0;

    //processamento
    for(int casa = 1; casa <= 64; casa++){
        somatorio += graos;
        graos *= 2;
    }

    //saida
    printf("O somatorio de graos no tabuleiro eh: %llu\n",somatorio);

    return 0;
}
