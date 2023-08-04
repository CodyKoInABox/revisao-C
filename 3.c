#include <stdio.h>
#include <string.h>

// 3) Uma folha de pagamento simplificada contém os itens: Nome do Funcionário, Salário e Taxa de Desconto de INSS. Criar um programa que considere uma taxa de desconto de 8% e mostre no vídeo:

struct FolhaDePagamento{
    char nome[32];
    double salarioBruto;
    int taxaINSS;
    double salarioLiquido;
};

int main(){

    struct FolhaDePagamento folha;

    strcpy(folha.nome, "Manfred");
    folha.salarioBruto = 50000;
    folha.taxaINSS = 8;
    folha.salarioLiquido = folha.salarioBruto * (100 - folha.taxaINSS) / 100;


    printf("Nome: %s", folha.nome);
    printf("\nSalario Bruto: R$ %.2lf", folha.salarioBruto);
    printf("\nTaxa INSS: %d%%", folha.taxaINSS);
    printf("\nSalario Liquido: R$ %.2lf", folha.salarioLiquido);
    return 0;
}