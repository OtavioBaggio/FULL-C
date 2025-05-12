/* Fa�a um programa que leia a idade de uma pessoa expressa em anos, meses e dias e em uma
fun��o mostre-a expressa apenas em dias.
*/

#include <stdio.h>
#include <locale.h>

// Fun��o para converter a idade em anos, meses e dias para dias totais
int calcularDias(int anos, int meses, int dias) {
    int diasTotais;

    // Considerando que 1 ano tem 365 dias e 1 m�s tem 30 dias
    diasTotais = (anos * 365) + (meses * 30) + dias;

    return diasTotais;
}

int main() {
setlocale(LC_ALL, "portuguese");
    int anos, meses, dias, totalDias;

    // Entrada dos dados
    printf("Digite a idade em anos: ");
    scanf("%d", &anos);

    printf("Digite a idade em meses: ");
    scanf("%d", &meses);

    printf("Digite a idade em dias: ");
    scanf("%d", &dias);

    // Chamando a fun��o para calcular a idade total em dias
    totalDias = calcularDias(anos, meses, dias);

    // Sa�da do resultado
    printf("\nA idade expressa apenas em dias �: %d dias\n", totalDias);

    return 0;
}
