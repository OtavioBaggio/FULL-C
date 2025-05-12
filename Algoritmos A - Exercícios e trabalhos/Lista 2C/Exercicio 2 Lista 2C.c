/* 2. Desenvolva um programa para ler um número inteiro de 1 a 12, que corresponde a um dos
meses do ano, e outro número inteiro que corresponde ao ano. Encontre e mostre o número de dias
referente ao mês informado.
*/
#include <stdio.h>
#include <locale.h>

int main() {
setlocale(LC_ALL, "Portuguese");
    int mes, ano, dias;

    // Solicita ao usuário o número do mês
    printf("Digite o número do mês (de 1 a 12): ");
    scanf("%d", &mes);

    // Verifica se o número do mês está dentro do intervalo válido
    if (mes < 1 || mes > 12) {
        printf("Número de mês inválido.\n");
        return 1; // Retorna 1 para indicar um erro
    }

    // Solicita ao usuário o ano
    printf("Digite o ano: ");
    scanf("%d", &ano);

    // Calcula o número de dias com base no mês e no ano
    switch (mes) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            dias = 31;
            break;
        case 4: case 6: case 9: case 11:
            dias = 30;
            break;
        case 2:
            // Verifica se o ano é bissexto
            if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0)
                dias = 29;
            else
                dias = 28;
            break;
    }

    // Exibe o número de dias
    printf("O mês %d do ano %d tem %d dias.\n", mes, ano, dias);

    system("pause");
return 0;
}
