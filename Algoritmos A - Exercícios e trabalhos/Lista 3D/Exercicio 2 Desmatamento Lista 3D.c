/* 2. Uma determinada região está sendo desmatada a uma taxa percentual constante, ano após
ano. Escreva um algoritmo que leia a área da região, a taxa de desmatamento anual e
escreva o ano em que a mata estará reduzida a menos de 20% de sua atual área.
Por exemplo, se a área de floresta é 10.000.000 km2 e a taxa de desmatamento é de 1,5% ao ano, o algoritmo deve escrever como saída:
“Em 2131, a área estará reduzida a menos ou igual a 20% de sua área
atual, o que corresponde a 1984616 km2.”
*/
#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
    int ano = 0;
    double area, taxaAD, desmatamento;

    printf("\t\tPrograma de Cálculo do Desmatamento Brasileiro\n\n");

    printf("Infomre os seguintes dados a seguir:\n");
    printf("Área da região(em km2): ");
    scanf("%1f", &area);
    printf("Taxa de desmatamento anual: ");
    scanf("%1f", &taxaAD);

    taxaAD /= 100;

    while (area > 0.2 * area){
        area -= area * taxaAD;
        ano++;
    }

    printf("\nEm %d, a área estará reduzida a menos ou igual a 20% da sua área atual, o que corresponde a %.0f km².\n", 2024 + ano, area);



return 0;
}
