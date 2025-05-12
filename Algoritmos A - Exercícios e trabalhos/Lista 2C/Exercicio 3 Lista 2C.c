/* 3. Ler a idade de uma pessoa expressa em anos, meses e dias. O algoritmo deve mostrar a
idade da pessoa em dias (considere que todos os anos tem 365 dias e todos os meses tem 30 dias).
*/
#include <stdio.h>
#include <locale.h>

int main() {
setlocale(LC_ALL, "Portuguese");
    int anos, meses, dias;
    int idade_em_dias;

    // Solicita a idade da pessoa em anos, meses e dias
    printf("Digite a idade em anos, meses e dias (separados por espaços): ");
    scanf("%d %d %d", &anos, &meses, &dias);

    // Calcula a idade da pessoa em dias
    idade_em_dias = anos * 365 + meses * 30 + dias;

    // Exibe a idade da pessoa em dias
    printf("A idade da pessoa em dias é: %d\n", idade_em_dias);

    system("pause");
return 0;
}
