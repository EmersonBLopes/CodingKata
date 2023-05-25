#include<stdio.h>
#include<assert.h>
#include<string.h>

/**
 * elaborar um programa que leia duas matrizes com nomes, a matriz A deve comportar 20 elementos de cadeia de caracteres(String), ja a matriz B dever comportar 30 elementoso
 * a matriz C deve ser a juncao da matriz A com a matriz B, sendo assim, deve comportar 50 elementos do tipo cadeia de caracteres
 **/

int main(void){

    //declaracao de variaveis
    char a[20][20], b[30][20], c[50][20];

    //leitura de valores
    for(int i = 0; i < 50; i++){
        if(i < 20){
            printf("Digite o nome de A[%d]:",i);
            scanf("%s",a[i]);
        }else{
            printf("Digite o nome de B[%d]:",i-20);
            scanf("%s",b[i-20]);
        }
        fflush(stdin);
    }

    //processamento
    for(int i = 0; i < 50; i++){
        i < 20 ? strcpy(c[i],a[i]) : strcpy(c[i],b[i-20]);
    }

    //saida
    for(int i = 0; i < 50; i++){
        printf("%d. %s\n",i+1,c[i]);
    }

    /** TESTES UNITARIOS **/
    for(int i = 0; i < 50; i++) {
        i < 20 ? assert(strcmp(c[i],a[i]) == 0) : assert(strcmp(c[i],b[i-20]) == 0);
    }
    return 0;
}

