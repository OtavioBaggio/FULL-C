/* 1. Implemente um algoritmo para transpor matrizes 2x3. Transpor uma matriz significa transformar suas
linhas em colunas e vice-versa.
*/
#include <stdio.h>
#include <locale.h>

int main() {
setlocale(LC_ALL, "portuguese");
    int a[2][3], i, j;
    int transposta[3][2];

    // Entrada dos elementos da matriz 2x3
    printf("Digite os elementos da matriz 2x3:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("Linha %d Coluna %d: ", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    // Mostrando a matriz 2x3
    printf("Matriz 2x3 original:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // Transpondo a matriz 2x3
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            transposta[j][i] = a[i][j];
        }
    }

    // Mostrando a matriz transposta 3x2
    printf("Matriz transposta 3x2:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d\t", transposta[i][j]);
        }
        printf("\n");
    }

    return 0;
}
