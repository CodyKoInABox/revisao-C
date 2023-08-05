#include <stdio.h>

// 13) Se a taxa de juros composto de uma determinada aplicação vale 1,25% ao mês, calcular a taxa equivalente no período de um ano. Se um valor de R$ 1.000,00 for aplicado com esta taxa, qual será o valor final após um ano?

double calcularJuros(double valorInicial, double taxa, double unidadesDeTempo){
    double result = valorInicial;

    for(int i = 0; i < unidadesDeTempo; i++){
        result = result * (taxa / 100 + 1);
    }

    return result;
}


int main(){

    printf("%.2lf", calcularJuros(1000, 1.25, 12));

    return 0;
}