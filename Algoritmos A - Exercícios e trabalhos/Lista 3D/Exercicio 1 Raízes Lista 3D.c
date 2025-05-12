/*1. Encontre as raízes de uma equação de 2º grau ax2
 + bx + c. O algoritmo deverá ler os
coeficientes a, b e c e calcular as raízes utilizando a fórmula de Báskara:
                (-b±√(b²-4ac))/(2a)
O algoritmo deve ficar lendo os valores dos coeficientes a, b e c até que os valores
fornecidos para os três coeficientes sejam 0 (zero). Para cada conjunto de valores de
coeficientes lidos, o algoritmo deverá calcular e escrever os valores das duas raízes x1 e
x2. Se as raízes forem imaginárias (∆ negativo, sendo ∆ = b2 - 4ac ) o algoritmo deverá
escrever que não foi possível calcular as raízes. Se a = 0, ele deve escrever que a equação
é de primeiro grau.
*/
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
setlocale(LC_ALL, "Portuguese");
    float a, b, c;
    float delta, x1, x2;

    do {
        printf("Digite os coeficientes a, b e c da equação (ou 0 para sair): ");
        scanf("%f %f %f", &a, &b, &c);

        if (a == 0 && b == 0 && c == 0)
            break;

        if (a == 0) {
            printf("A equação é de primeiro grau.\n");
            continue;
        }

        delta = b * b - 4 * a * c;

        if (delta < 0) {
            printf("Não foi possível calcular as raízes. Raízes imaginárias.\n");
        } else {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);

            printf("Raízes da equação:\n");
            printf("x1 = %.2f\n", x1);
            printf("x2 = %.2f\n", x2);
        }

    } while (a != 0 || b != 0 || c != 0);

return 0;
}
