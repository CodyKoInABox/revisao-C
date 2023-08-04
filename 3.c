#include <stdio.h>

// 3) Uma folha de pagamento simplificada contém os itens: Nome do Funcionário, Salário e Taxa de Desconto de INSS. Criar um programa que considere uma taxa de desconto de 8% e mostre no vídeo:

struct FolhaDePagamento{
    char nome[32];
    double salarioBruto;
    int taxaINSS;
    double salarioLiquido;
};

int main(){

    struct FolhaDePagamento folha = {"Manfred", 50000, 8};

    folha.salarioLiquido = folha.salarioBruto * (100 - folha.taxaINSS) / 100;

    // a) Nome do Funcionário
    printf("Nome: %s", folha.nome);

    // b) Salário bruto
    printf("\nSalario Bruto: R$ %.2lf", folha.salarioBruto);

    // c) Valor do INSS
    printf("\nTaxa INSS: %d%%", folha.taxaINSS);

    // d) Salário líquido.
    printf("\nSalario Liquido: R$ %.2lf", folha.salarioLiquido);

    return 0;
}