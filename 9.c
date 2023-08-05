#include <stdio.h>

// 9) Escrever um programa que calcule o número fatorial de um número 

int fatorial(int numero){
    if(numero <= 1){
        return 1;
    }else{
        numero = numero * fatorial(numero - 1);
    }
}


int main(){

    int numero;

    printf("Insira um numero inteiro para calcular seu fatorial: ");
    scanf("%d", &numero);

    printf("Fatorial de %d = %d", numero,  fatorial(numero));

    return 0;
}