#include <stdio.h>

// 14) Escreve um programa que contenha duas strings. O programa devera mostrar no vídeo a quantidade de caracteres de cada uma.

int main(){

    char string1[50] = "Ola";
    char string2[50] = "Manfred";

    int string1Length = 0;
    int string2Length = 0;

    for(int i = 0; string1[i] != '\0'; i++){
        string1Length++;
    }

    for(int i = 0; string2[i] != '\0'; i++){
        string2Length++;
    }

    printf("String 1 = \"%s\" | Caracteres = %d", string1 ,string1Length);
    printf("\nString 2 = \"%s\" | Caracteres = %d", string2 ,string2Length);

    return 0;
}