/* 1. Ler a idade de uma pessoa expressa em anos, meses e dias. O algoritmo deve mostrar a idade da pessoa
em dias (considere que todos os anos tem 365 dias e todos os meses tem 30 dias).
*/
#include <stdio.h>
#include <locale.h>

int main(){
    int dia, mes, ano, idadeDias;

    setlocale(LC_ALL, "Portuguese");

    printf("Informe o ano em que a pessoa nasceu:\n");
    scanf("%i", &ano);
    printf("informe o mes em que nasceu(numeral):\n");
    scanf("%i", &mes);
    printf("o dia em que nesceu:\n");
    scanf("%i", &dia);

    //Cálculos
    idadeDias =  dia + (mes * 30)+(360*(2024-ano));

    //Saída
    printf("A quantidade de dias que essa pessoa viveu até agora é=%i\n", idadeDias);
    system("pause");

return 0;
}
