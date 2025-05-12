/* 1. A empresa XYZ decidiu dar um aumento a seus funcionários de acordo com a seguinte
regra:
 13% para os salários inferiores ou iguais a R$ 2000,00;
 11% para os salários situados entre R$ 2000,0 e R$ 4000,00 (inclusive);
 9 % para os salários entre R$ 4000,00 e R$ 8000,00 (inclusive); e
 7% para os demais salários.
 Desenvolva um programa em C que receba o salário atual de um funcionário e forneça o valor do
seu novo salário. Mostre também o bônus (em reais e em %).
*/
#include <stdio.h>
#include <locale.h>

int main() {
setlocale(LC_ALL, "Portuguese");
    float salario_atual, novo_salario;
    float bonus;

    // Solicita o salário atual do funcionário
    printf("Digite o salário atual do funcionário: ");
    scanf("%f", &salario_atual);

    // Calcula o novo salário e o bônus de acordo com as regras
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

    // Exibe o novo salário e o bônus
    printf("O novo salário é: R$ %.2f\n", novo_salario);
    printf("O bônus é: R$ %.2f\n", bonus);

    system("pause");
return 0;
}
