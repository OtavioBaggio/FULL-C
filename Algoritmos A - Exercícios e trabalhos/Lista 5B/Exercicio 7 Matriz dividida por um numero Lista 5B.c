/* 7. Gere uma matriz A, 10 x 10, e mostre ao usuário. A seguir, leia um número diferente de zero e gere uma
nova matriz B, 10 x 10, sendo que cada elemento de B é obtido pela divisão do elemento correspondente de
A pelo número informado.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
    int A[10][10], B[10][10];
    int i, j;
    int num, divisao;

    // Inicializa o gerador de números aleatórios com o tempo atual
    srand(time(NULL));

    // Preenche a matriz com números aleatórios entre 0 e 99
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            A[i][j] = rand() % 100; // Gera um número aleatório entre 0 e 99
        }
    }

    // Exibe a matriz
    printf("Matriz 10x10 com números aleatórios:\n");
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            printf("%2d\t", A[i][j]);
        }
        printf("\n");
    }

    printf("\nInforme QUALQUER número INTEIRO diferente de ZERO: \n");
    scanf("%d", &num);

    printf("\nMatriz B 10x10 dividida pelo número informado:\n");
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            if(num >= 1){
                B[i][j] = A[i][j] / num;
                printf("%d\t", B[i][j]);
            }
        }
        printf("\n");
    }

return 0;
}
