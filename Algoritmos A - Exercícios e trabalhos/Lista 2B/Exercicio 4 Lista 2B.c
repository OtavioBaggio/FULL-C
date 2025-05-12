/* 4. Faça um programa leia o salário mensal de um funcionário e calcule o desconto do INSS,
conforme as alíquotas da tabela:
Salário                                               Alíquota INSS
até R$ 965,67                                          8 %
de R$ 965,68 a R$ 1.609,45                             9 %
de R$ 1.609,46 até R$ 3.218,90                         11 %
O algoritmo deverá apresentar como resultado o salário mensal do funcionário, o percentual de
desconto do INSS e o valor em Reais do desconto do INSS e o salário líquido (salário mensal
menos o valor do INSS).
*/
#include <stdio.h>
#include <locale.h>
int main() {
    float salario, inss, salario_liquido;
    const float salario1 = 965.67;
    const float salario2 = 1609.45;
    const float salario3 = 3218.90;

    setlocale(LC_ALL, "Portuguese");

    printf("Digite o salário mensal do funcionário: R$ ");
    scanf("%f", &salario);

    // Calculo desconto do INSS
    if (salario <= salario1) {
        inss = salario * 0.08;
    } else if (salario <= salario2) {
        inss = salario * 0.09;
    } else if (salario <= salario3) {
        inss = salario * 0.11;
    } else {
        inss = 3218.90 * 0.11; // Máximo para a faixa mais alta
    }

    // Calculo salário líquido
    salario_liquido = salario - inss;

    // Resultado
    printf("\nSalário mensal: R$ %.2f\n", salario);
    printf("Percentual de desconto do INSS: %.0f%%\n", (inss / salario) * 100);
    printf("Valor do desconto do INSS: R$ %.2f\n", inss);
    printf("Salário líquido: R$ %.2f\n", salario_liquido);

    system("pause");
    return 0;
}
