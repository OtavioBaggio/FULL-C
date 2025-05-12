/* 4. Faça um algoritmo para ler duas matrizes de inteiros, de ordem 4x4, e verifique se a soma dos elementos
das diagonais principais são iguais
*/
#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
    int a[4][4], a2[4][4];
    int i, j;
    int somaDiagonalP1 = 0, somaDiagonalP2 = 0;

    printf("\tInforme os valores de duas matrizes 4x4 e vamos verificar se a soma de suas diagonais principais são iguais\n\n");
    printf("Forneça os valores da primeira matriz 4x4:\n");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("Linha %d Coluna %d: ", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    printf("Primeira Matriz 4x4:\n");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("%d\t", a[i][j]);

        }
        printf("\n");
    }

    printf("\nAgora, forneça os valores da segunda matriz 4x4:\n");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("Linha %d Coluna %d: ", i, j);
            scanf("%d", &a2[i][j]);
        }
        printf("\n");
    }
    printf("Segunda Matriz 4x4:\n");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("%d\t", a2[i][j]);

        }
        printf("\n");
    }

    // Cálculo da soma das diagonais principais
    for (i = 0; i < 4; i++) {
        somaDiagonalP1 += a[i][i];
        somaDiagonalP2 += a2[i][i];
    }

    // Verificação se as somas são iguais
    printf("\nSoma da Diagonal Principal da primeira matriz: %d\n", somaDiagonalP1);
    printf("Soma da Diagonal Principal da segunda matriz: %d\n", somaDiagonalP2);

    if (somaDiagonalP1 == somaDiagonalP2) {
        printf("As somas das diagonais principais são IGUAIS.\n");
    } else {
        printf("As somas das diagonais principais são DIFERENTES.\n");
    }



return 0;
}
