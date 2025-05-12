/* 11. Desenvolva um programa para ler o pre�o de um produto (em reais), a sua unidade (kilo, litro,
metro�) e a quantidade vendida. Desenvolva fun��es para: calcular o valor total a ser pago;
calcular o valor de desconto, conforme a seguinte regra:
-> Se valor total for maior ou igual a R$ 1.000,00, o desconto � de 10%.
-> Se o valor total for maior ou igual a R$ 500,00 e menor que R$ 1.000,00, o desconto � de 8%.
-> Se o valor total for maior ou igual a R$ 100,00 e menor que R$ 500,00, o desconto � de 5%.
-> Para valor total menor que R$ 100,00, n�o haver� desconto.
    Ao t�rmino do programa, a fun��o main deve mostrar o pre�o do produto, a unidade, a
quantidade vendida, o valor total, o valor do desconto (em % e em reais) e o valor a ser pago (valor total � desconto).
*/

#include <stdio.h>
#include <locale.h>

// Vari�veis Globais:
float precoProduto, valorTot, desconto, valorAserPago;
char unidade;
int quantVendida;

// Fun��o para calcular o desconto:
float Desconto() {
    valorTot = precoProduto * quantVendida;

    if (valorTot >= 1000) {
        desconto = valorTot * 0.10;
    } else if (valorTot >= 500) {
        desconto = valorTot * 0.08;
    } else if (valorTot >= 100) {
        desconto = valorTot * 0.05;
    } else {
        desconto = 0;
    }
    return desconto;
}

// Fun��o para calcular o valor total a ser pago:
float ValorPagar() {
    valorAserPago = valorTot - desconto;
    return valorAserPago;
}

int main() {
    setlocale(LC_ALL, "portuguese");

    char operador;

    // Entrada de dados:
    printf("Bem-vindo, Gerente! Deseja come�ar o cadastro do produto? (s para sim, n para n�o)\n");
    scanf(" %c", &operador);  // Espa�o antes de %c para ignorar espa�os anteriores

    switch (operador) {
        case 's':
            printf("Cadastro iniciado...\n");

            printf("Informe o pre�o do produto: R$ ");
            scanf("%f", &precoProduto);

            printf("\nA unidade do produto � em Kilos(K), Litros(L) ou Metros(M)? ");
            scanf(" %c", &unidade);  // Espa�o antes de %c para ignorar espa�os anteriores

            printf("\nQuantidade vendida do produto: ");
            scanf("%d", &quantVendida);

            // Calculando desconto e valor a ser pago
            Desconto();
            ValorPagar();

            // Mostrando os resultados:
            printf("\n--- Resumo da compra ---\n");
            printf("Pre�o do produto: R$ %.2f\n", precoProduto);
            printf("Unidade: %c\n", unidade);  // Usando %c para imprimir um caractere
            printf("Quantidade vendida: %d\n", quantVendida);
            printf("Valor total: R$ %.2f\n", valorTot);
            printf("Desconto: R$ %.2f (%.0f%%)\n", desconto, (desconto / valorTot) * 100);
            printf("Valor a ser pago: R$ %.2f\n", valorAserPago);

            break;

        case 'n':
            printf("Fechando o cadastro, obrigado pela prefer�ncia! by: Baggio program's\n");
            break;

        default:
            printf("Op��o inv�lida! Tente novamente.\n");
            break;
    }

    return 0;
}
