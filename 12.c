#include <stdio.h>

// 12) Escrever um programa que incremente uma variável iniciando em 0 e terminando em 200. A cada passagem pela variável, se o valor for par, este deverá ser acumulado em uma variável e, se for impar, acumulado em outra.

int main(){

    int somaPar = 0;
    int somaImpar = 0;

    for(int i = 0; i <= 200; i++){
        if(i%2==0){
            somaPar += i;
        }
        else{
            somaImpar += i;
        }

        printf("%d | Soma Pares = %d | Soma Impares = %d\n", i, somaPar, somaImpar);
    }

    return 0;
}