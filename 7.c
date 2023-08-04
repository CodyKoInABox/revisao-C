#include <stdio.h>

// 7) Crie um programa que declare uma base e um expoente e, em seguida, mostre o valor da potência.


int potencia(int base, int expoente){
    int resultado = 1;

    for(int i = 0; i < expoente; i++){
        resultado = resultado * base;
    }

    return resultado;
}


int main(){

    int base = 5;
    int expoente = 3;

    int resultado = potencia(5, 3);

    printf("Base = %d", base);
    printf("\nExpoente = %d", expoente);
    printf("\n\nResultado = %d", resultado);

    return 0;
}