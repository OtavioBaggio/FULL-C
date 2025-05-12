/* 5. Escrever um programa que leia as coordenadas de tr�s pontos cartesianos. Considerando que os
dois primeiros pontos definem um ret�ngulo de arestas paralelas aos eixos, verifique se o outro
ponto est� ou n�o dentro do ret�ngulo.
*/
#include <stdio.h>
#include <locale.h>

struct ponto {
    float x;
    float y;
};

int main() {
    setlocale(LC_ALL, "portuguese");

    struct ponto p1, p2, p3;

    // Leitura das coordenadas
    printf("Informe as coordenadas do ponto 1 (x1 y1): ");
    scanf("%f %f", &p1.x, &p1.y);

    printf("Informe as coordenadas do ponto 2 (x2 y2): ");
    scanf("%f %f", &p2.x, &p2.y);

    printf("Informe as coordenadas do ponto 3 (x3 y3): ");
    scanf("%f %f", &p3.x, &p3.y);

    // Determinar os limites do ret�ngulo
    float x_min = (p1.x < p2.x) ? p1.x : p2.x;
    float x_max = (p1.x > p2.x) ? p1.x : p2.x;
    float y_min = (p1.y < p2.y) ? p1.y : p2.y;
    float y_max = (p1.y > p2.y) ? p1.y : p2.y;

    // Verificar se o ponto 3 est� dentro do ret�ngulo
    if (p3.x >= x_min && p3.x <= x_max && p3.y >= y_min && p3.y <= y_max) {
        printf("O ponto (%.2f, %.2f) est� dentro do ret�ngulo.\n", p3.x, p3.y);
    } else {
        printf("O ponto (%.2f, %.2f) est� fora do ret�ngulo.\n", p3.x, p3.y);
    }

return 0;
}
