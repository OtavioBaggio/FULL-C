/* 6. Cálcule a distância entre dois pontos no plano cartesiano, conforme a equação a seguir.
Utilize uma estrutura para definir o tipo de dado.
*/

#include <stdio.h>
#include <locale.h>

struct Ponto{
    float x;
    float y;
};

int main(){
setlocale(LC_ALL, "portuguese");
    //Variáveis
    struct Ponto pontoA, pontoB;
    float distancia;

    printf("Digite as coordenadas de A (x1,y1): ");
    scanf("%f %f", &pontoA.x, &pontoA.y);
    printf("\nDigite as coordenadas de B (x2, y2): ");
    scanf("%f %f", &pontoB.x, &pontoB.y);

    distancia = sqrt(pow(pontoB.x - pontoA.x, 2) + pow(pontoB.y - pontoA.y, 2));

    printf("\nA distância entre A e B é de: %.1f", distancia);













return 0;
}
