#include <stdio.h>
#include <string.h>

// 4) Baseando no item anterior, escreva um programa que define uma taxa de desconto de acordo com o seguinte critério:
//   a) Salário até R$ 1.000,00 – desconto de 8
//   b) Salário entre R$ 1.000,01 e 1.500,00 – desconto de 8,5%
//   c) Salário acima de R$ 1.500,00 – desconto de 9%

struct FolhaDePagamento{
    double salarioBruto;
    float taxaDesconto;
    double salarioLiquido;
    double valorDesconto;
};

int main(){

    struct FolhaDePagamento folha;

    folha.salarioBruto = 5000;

    if(folha.salarioBruto < 1000){
        folha.taxaDesconto = 8;
    }
    else if(folha.salarioBruto < 1500){
        folha.taxaDesconto = 8.5;
    }
    else{
        folha.taxaDesconto = 9;
    }

    folha.salarioLiquido = folha.salarioBruto * (100 - folha.taxaDesconto) / 100;
    
    folha.valorDesconto = folha.salarioBruto - folha.salarioLiquido;

    
    // d) O programa deve mostrar o salário em consideração e mostrar sua taxa de desconto, bem como o valor do desconto.
    
    printf("\nSalario Bruto: R$ %.2lf", folha.salarioBruto);
    
    printf("\nTaxa Desconto: %.1f%%", folha.taxaDesconto);
    
    printf("\nSalario Liquido: R$ %.2lf", folha.salarioLiquido);
    
    printf("\nValor do Desconto: R$ %.2lf", folha.valorDesconto);


    return 0;
}