/* 3. Sejam duas matrizes A e B de mesmo tamanho e cujo tamanho é informado pelo usuário. Desenvolva um
algoritmo para obter a soma das matrizes, utilizando alocação dinâmica e funções */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Função para alocar uma matriz dinamicamente
int** alocarMatriz(int linhas, int colunas) {
    int** matriz = (int**) malloc(linhas * sizeof(int*));
    if (matriz == NULL) {
        printf("Erro ao alocar memória para as linhas.\n");
        exit(1);
    }
    for (int i = 0; i < linhas; i++) {
        matriz[i] = (int*) malloc(colunas * sizeof(int));
        if (matriz[i] == NULL) {
            printf("Erro ao alocar memória para as colunas.\n");
            exit(1);
        }
    }
    return matriz;
}

// Função para liberar a memória de uma matriz
void liberarMatriz(int** matriz, int linhas) {
    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);
}

// Função para preencher uma matriz
void preencherMatriz(int** matriz, int linhas, int colunas, char nome) {
    printf("Preenchendo a matriz %c:\n", nome);
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

// Função para somar duas matrizes
void somarMatrizes(int** A, int** B, int** C, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

// Função para exibir uma matriz
void exibirMatriz(int** matriz, int linhas, int colunas, char nome) {
    printf("Matriz %c:\n", nome);
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main(){
    setlocale(LC_ALL, "portuguese");

    int linhas, colunas;

    // Solicitar o tamanho das matrizes
    printf("Informe o número de linhas: ");
    scanf("%d", &linhas);
    printf("Informe o número de colunas: ");
    scanf("%d", &colunas);

    // Alocar as matrizes A, B e C
    int** A = alocarMatriz(linhas, colunas);
    int** B = alocarMatriz(linhas, colunas);
    int** C = alocarMatriz(linhas, colunas);

    // Preencher as matrizes A e B
    preencherMatriz(A, linhas, colunas, 'A');
    preencherMatriz(B, linhas, colunas, 'B');

    // Somar as matrizes
    somarMatrizes(A, B, C, linhas, colunas);

    // Exibir as matrizes A, B e C
    exibirMatriz(A, linhas, colunas, 'A');
    exibirMatriz(B, linhas, colunas, 'B');
    exibirMatriz(C, linhas, colunas, 'C');

    // Liberar memória das matrizes
    liberarMatriz(A, linhas);
    liberarMatriz(B, linhas);
    liberarMatriz(C, linhas);









return 0;
}
