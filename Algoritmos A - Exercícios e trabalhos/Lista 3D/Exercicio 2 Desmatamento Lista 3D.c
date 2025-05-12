/* 2. Uma determinada regi�o est� sendo desmatada a uma taxa percentual constante, ano ap�s
ano. Escreva um algoritmo que leia a �rea da regi�o, a taxa de desmatamento anual e
escreva o ano em que a mata estar� reduzida a menos de 20% de sua atual �rea.
Por exemplo, se a �rea de floresta � 10.000.000 km2 e a taxa de desmatamento � de 1,5% ao ano, o algoritmo deve escrever como sa�da:
�Em 2131, a �rea estar� reduzida a menos ou igual a 20% de sua �rea
atual, o que corresponde a 1984616 km2.�
*/
#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
    int ano = 0;
    double area, taxaAD, desmatamento;

    printf("\t\tPrograma de C�lculo do Desmatamento Brasileiro\n\n");

    printf("Infomre os seguintes dados a seguir:\n");
    printf("�rea da regi�o(em km2): ");
    scanf("%1f", &area);
    printf("Taxa de desmatamento anual: ");
    scanf("%1f", &taxaAD);

    taxaAD /= 100;

    while (area > 0.2 * area){
        area -= area * taxaAD;
        ano++;
    }

    printf("\nEm %d, a �rea estar� reduzida a menos ou igual a 20% da sua �rea atual, o que corresponde a %.0f km�.\n", 2024 + ano, area);



return 0;
}
