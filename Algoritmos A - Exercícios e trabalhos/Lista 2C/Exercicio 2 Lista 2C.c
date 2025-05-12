/* 2. Desenvolva um programa para ler um n�mero inteiro de 1 a 12, que corresponde a um dos
meses do ano, e outro n�mero inteiro que corresponde ao ano. Encontre e mostre o n�mero de dias
referente ao m�s informado.
*/
#include <stdio.h>
#include <locale.h>

int main() {
setlocale(LC_ALL, "Portuguese");
    int mes, ano, dias;

    // Solicita ao usu�rio o n�mero do m�s
    printf("Digite o n�mero do m�s (de 1 a 12): ");
    scanf("%d", &mes);

    // Verifica se o n�mero do m�s est� dentro do intervalo v�lido
    if (mes < 1 || mes > 12) {
        printf("N�mero de m�s inv�lido.\n");
        return 1; // Retorna 1 para indicar um erro
    }

    // Solicita ao usu�rio o ano
    printf("Digite o ano: ");
    scanf("%d", &ano);

    // Calcula o n�mero de dias com base no m�s e no ano
    switch (mes) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            dias = 31;
            break;
        case 4: case 6: case 9: case 11:
            dias = 30;
            break;
        case 2:
            // Verifica se o ano � bissexto
            if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0)
                dias = 29;
            else
                dias = 28;
            break;
    }

    // Exibe o n�mero de dias
    printf("O m�s %d do ano %d tem %d dias.\n", mes, ano, dias);

    system("pause");
return 0;
}
