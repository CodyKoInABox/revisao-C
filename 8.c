#include <stdio.h>

// 8) Escrever um programa que mostre no vídeo a tabuada do 2, do 3 e do 5.

int main(){

    printf("Tabuada do 2: ");

    for(int i = 1; i <= 10; i++){
        printf("\n2 * %d = %d", i, 2*i);
    }

    printf("\n\nTabuada do 3: ");

    for(int i = 1; i <= 10; i++){
        printf("\n3 * %d = %d", i, 3*i);
    }

    printf("\n\nTabuada do 5: ");

    for(int i = 1; i <= 10; i++){
        printf("\n5 * %d = %d", i, 5*i);
    }

    return 0;
}