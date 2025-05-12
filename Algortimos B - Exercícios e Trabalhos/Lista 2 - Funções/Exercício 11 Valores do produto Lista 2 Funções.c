/* 11. Desenvolva um programa para ler o preço de um produto (em reais), a sua unidade (kilo, litro,
metro…) e a quantidade vendida. Desenvolva funções para: calcular o valor total a ser pago;
calcular o valor de desconto, conforme a seguinte regra:
-> Se valor total for maior ou igual a R$ 1.000,00, o desconto é de 10%.
-> Se o valor total for maior ou igual a R$ 500,00 e menor que R$ 1.000,00, o desconto é de 8%.
-> Se o valor total for maior ou igual a R$ 100,00 e menor que R$ 500,00, o desconto é de 5%.
-> Para valor total menor que R$ 100,00, não haverá desconto.
    Ao término do programa, a função main deve mostrar o preço do produto, a unidade, a
quantidade vendida, o valor total, o valor do desconto (em % e em reais) e o valor a ser pago (valor total – desconto).
*/

#include <stdio.h>
#include <locale.h>

// Variáveis Globais:
float precoProduto, valorTot, desconto, valorAserPago;
char unidade;
int quantVendida;

// Função para calcular o desconto:
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

// Função para calcular o valor total a ser pago:
float ValorPagar() {
    valorAserPago = valorTot - desconto;
    return valorAserPago;
}

int main() {
    setlocale(LC_ALL, "portuguese");

    char operador;

    // Entrada de dados:
    printf("Bem-vindo, Gerente! Deseja começar o cadastro do produto? (s para sim, n para não)\n");
    scanf(" %c", &operador);  // Espaço antes de %c para ignorar espaços anteriores

    switch (operador) {
        case 's':
            printf("Cadastro iniciado...\n");

            printf("Informe o preço do produto: R$ ");
            scanf("%f", &precoProduto);

            printf("\nA unidade do produto é em Kilos(K), Litros(L) ou Metros(M)? ");
            scanf(" %c", &unidade);  // Espaço antes de %c para ignorar espaços anteriores

            printf("\nQuantidade vendida do produto: ");
            scanf("%d", &quantVendida);

            // Calculando desconto e valor a ser pago
            Desconto();
            ValorPagar();

            // Mostrando os resultados:
            printf("\n--- Resumo da compra ---\n");
            printf("Preço do produto: R$ %.2f\n", precoProduto);
            printf("Unidade: %c\n", unidade);  // Usando %c para imprimir um caractere
            printf("Quantidade vendida: %d\n", quantVendida);
            printf("Valor total: R$ %.2f\n", valorTot);
            printf("Desconto: R$ %.2f (%.0f%%)\n", desconto, (desconto / valorTot) * 100);
            printf("Valor a ser pago: R$ %.2f\n", valorAserPago);

            break;

        case 'n':
            printf("Fechando o cadastro, obrigado pela preferência! by: Baggio program's\n");
            break;

        default:
            printf("Opção inválida! Tente novamente.\n");
            break;
    }

    return 0;
}
