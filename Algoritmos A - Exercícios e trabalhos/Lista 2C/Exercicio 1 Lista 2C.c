/* 1. A empresa XYZ decidiu dar um aumento a seus funcion�rios de acordo com a seguinte
regra:
 13% para os sal�rios inferiores ou iguais a R$ 2000,00;
 11% para os sal�rios situados entre R$ 2000,0 e R$ 4000,00 (inclusive);
 9 % para os sal�rios entre R$ 4000,00 e R$ 8000,00 (inclusive); e
 7% para os demais sal�rios.
 Desenvolva um programa em C que receba o sal�rio atual de um funcion�rio e forne�a o valor do
seu novo sal�rio. Mostre tamb�m o b�nus (em reais e em %).
*/
#include <stdio.h>
#include <locale.h>

int main() {
setlocale(LC_ALL, "Portuguese");
    float salario_atual, novo_salario;
    float bonus;

    // Solicita o sal�rio atual do funcion�rio
    printf("Digite o sal�rio atual do funcion�rio: ");
    scanf("%f", &salario_atual);

    // Calcula o novo sal�rio e o b�nus de acordo com as regras
    if (salario_atual <= 2000.00) {
        novo_salario = salario_atual * 1.13;
        bonus = novo_salario - salario_atual;
    } else if (salario_atual <= 4000.00) {
        novo_salario = salario_atual * 1.11;
        bonus = novo_salario - salario_atual;
    } else if (salario_atual <= 8000.00) {
        novo_salario = salario_atual * 1.09;
        bonus = novo_salario - salario_atual;
    } else {
        novo_salario = salario_atual * 1.07;
        bonus = novo_salario - salario_atual;
    }

    // Exibe o novo sal�rio e o b�nus
    printf("O novo sal�rio �: R$ %.2f\n", novo_salario);
    printf("O b�nus �: R$ %.2f\n", bonus);

    system("pause");
return 0;
}
