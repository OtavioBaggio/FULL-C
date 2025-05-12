/* 5. Paulo tem 1,30 metro e cresce 2 centímetros por ano. Joaquim 1,25 metro e cresce 3
centímetros por ano. Construa um algoritmo que calcule e mostre quantos anos serão
necessários para que Joaquim esteja mais alto que Paulo.
*/
#include <stdio.h>
#include <locale.h>

int main() {
setlocale(LC_ALL, "portuguese");
    float altura_paulo = 1.30;
    float altura_joaquim = 1.25;
    int anos = 0;

    printf("A altura de Paulo é de 1,30m e cresce 2 cm ao ano, já Joaquim tem 1,25m de altura e cresce 3 cm ao ano\n");

    while (altura_joaquim <= altura_paulo) {
        altura_paulo += 0.02; // Paulo cresce 2 centímetros por ano
        altura_joaquim += 0.03; // Joaquim cresce 3 centímetros por ano
        anos++;
    }

    printf("Serão necessários %d anos para que Joaquim esteja mais alto que Paulo.\n", anos);

    system("pause");
return 0;
}
