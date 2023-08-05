#include <stdio.h>

// 11) Crie um programa que incremente uma variável inteira iniciando em 0 e terminando em 50, mostrando os valores múltiplos de 8, o número da ocorrência em cada exibição e quantas vezes o múltiplo ocorreu.

// esse enunciado ficou meio confuso 😅

int main(){

    // ASCII 248 = °
    char simbolo = 248;
    int counter = 1;

    for(int i = 0; i<=50; i++){
        if(i%8==0){
            printf("%d -> %d%c multiplo de 8 da lista. (%d * 8 = %d)\n", i, counter, simbolo, i/8, i);
            counter++;
        }
    }

    return 0;
}