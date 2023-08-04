#include <stdio.h>

// 1) Um programa que contém duas variáveis inteiras e cada uma destas variáveis deve ter um valor atribuído. Escrever um programa que mostre os seguintes resultados:

int main(){
    int v1 = 5;
    int v2 = 10;

    // a) A soma das duas variáveis.
    int soma = v1+v2;

    // b) A diferença entre as duas variáveis.
    int diferenca = v1-v2;

    // c) O dobro da primeira mais o triplo da segunda variáve
    int dobro = v1*2;
    int triplo = v2*3;

    // d) A multiplicação das duas variáveis
    int produto = v1*v2;


    printf("Variavel 1 = %i", v1);
    printf("\nVariavel 2 = %i", v2);

    printf("\n");

    printf("\na) Soma = %i", soma);
    printf("\nb) Diferenca = %i", diferenca);
    printf("\nc) Dobro = %i", dobro);
    printf("\nc) Triplo = %i", triplo);
    printf("\nd) Produto = %i", produto);


    return 0;
}