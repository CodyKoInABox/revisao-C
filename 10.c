#include <stdio.h>

// 10) Elaborar um programa que mostre os 10 primeiros termos da série de Fibonacci. Esta série é definida pela seguinte regra: A partir do terceiro elemento, cada termo é a soma dos dois anteriores.

int main(){

    int f1 = 0;
    int f2 = 1;

    int fx = f1+f2;

    printf("%d, ", f1);
    printf("%d, ", f2);

    for(int i = 3; i <= 10; i++){
        printf("%d, ", fx);
        f1 = f2;
        f2 = fx;
        fx = f1+f2;
    }

    return 0;
}