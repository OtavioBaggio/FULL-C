/* 2. Escreva um programa em C que gere os elementos de uma matriz quadrada 5 x 5 e:
=> Exiba todos os elementos da matriz
=> Exiba os elementos da diagonal principal da matriz
=> Calcule e mostre a média dos valores da diagonal principal da matriz
=> Calcule e mostre a média dos elementos da matriz
=> Encontre e mostre na tela os elementos que estão acima da média, com sua posição (índice de linha e
coluna)
*/
#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
    int a[5][5];
    int i, j;
    int DiagonalP = 0;
    int SomaMatriz = 0;
    float MediaDiagonalP;
    float MediaMatriz;


    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("Linha %d, Coluna %d = ", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    printf("\nMatriz 5 x 5:\n");
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("\nDiagonal Principal:\n");
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            if(i == j){
                printf("%d\t", a[i][j]);
                DiagonalP += a[i][j];
            }else{
                    printf("\t");
            }
        }
        printf("\n");
    }

    printf("\nMédia dos valores da Diagonal Principal da Matriz 5x5:\n");
    MediaDiagonalP =  (float)DiagonalP / 5;
    printf("Média = %.1f\n", MediaDiagonalP);
    printf("\n");

    printf("\nMédia dos elementos da Matriz 5x5:\n");
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            SomaMatriz += a[i][j];
        }
    }
    MediaMatriz = (float)SomaMatriz / 25;
    printf("Média = %.1f\n", MediaMatriz);
    printf("\n");

    printf("\nElementos que estão acima da média da Matriz 5x5:\n");
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            if(a[i][j] > MediaMatriz){
                printf("%d ", a[i][j]);
            }
        }
    }



return 0;
}
