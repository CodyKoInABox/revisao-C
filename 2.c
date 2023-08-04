#include <stdio.h>

// 2) Escrever um programa que declare duas variáveis inteiras e mostre no vídeo o valor das duas em seguida, a maior delas.

int main(){

    int v1 = 10;
    int v2 = 30;

    printf("Valor 1 = %i", v1);
    printf("\nValor 2 = %i", v2);

    printf("\n");

    if(v1>v2){
        printf("\nMaior valor: %i", v1);
    }else if(v2>v1){
        printf("\nMaior valor: %i", v2);
    }else{
        printf("\nOs dois valores sao iguais.");
    }
    return 0;
}