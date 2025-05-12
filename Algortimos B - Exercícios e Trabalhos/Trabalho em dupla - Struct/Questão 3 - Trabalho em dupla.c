#include <stdio.h>
#include <locale.h>

struct Ponto{
    int x;
    int y;
};

struct Triangulo{
    struct Ponto v[3];
    float L1, L2, L3;
    float area;
    float perimetro;
};

int main(){
setlocale(LC_ALL, "portuguese");
    struct Triangulo t;
    int i;
    float d;

    /* Uma outra maneira de fazer:
    printf("Coordenadas de V1:\n");
    scanf("%d", &t.v[0].x);
    scanf("%d", &t.v[0].y);
    printf("Coordenadas de V2:\n");
    scanf("%d", &t.v[1].x);
    scanf("%d", &t.v[1].y);
    printf("Coordenadas de V3:\n");
    scanf("%d", &t.v[2].x);
    scanf("%d", &t.v[2].y);
    */

    for(i = 0; i <= 2; i++){
        printf("Coordenadas de V%d:\n", i+1);
        scanf("%d", &t.v[i].x);
        scanf("%d", &t.v[i].y);
    }

    d = sqrt(pow(t.v[1].x - t.v[0].x, 2) + pow(t.v[1].y - t.v[0].y, 2));

    printf("Distância entre V1 e V2 = %.1f\n", d);




return 0;
}
