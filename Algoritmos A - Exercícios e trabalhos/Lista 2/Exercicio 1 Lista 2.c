/* 1. Escreva um algoritmo para ler três valores inteiros e escrever na tela o maior deles. Considere
que todos os valores são diferentes.
*/
#include <stdio.h>
#include <locale.h>

int main(){
    int V1, V2, V3;

    setlocale(LC_ALL, "Portuguese");

    printf("Bom dia morador do planeta terra\n");
    printf("Digite 3 valores distindos e eu determinarei qual o maior:\n");
    printf("Valor 1:\n");
    scanf("%d", &V1);
    printf("Valor 2:\n");
    scanf("%d", &V2);
    printf("Valor 3\n");
    scanf("%d", &V3);

    if (V1 > V2 && V1 > V3)
        printf("O primeiro valor é o maioral");
    else {
        if (V2 > V1 && V2 > V3)
        printf("O segundo valor é o maioral");
    else printf("O terceiro valor é o maioral\n");
}


    system("pause");
return 0;
}
