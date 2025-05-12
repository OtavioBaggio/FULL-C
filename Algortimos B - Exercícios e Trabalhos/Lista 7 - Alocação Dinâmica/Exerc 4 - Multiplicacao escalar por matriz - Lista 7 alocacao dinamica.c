/* 4. Fazer a multiplicação de um escalar (um número) por uma matriz alocada dinamicamente. As dimensões da
matriz são informadas pelo usuário. */

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
void preencherMatriz(int** matriz, int linhas, int colunas) {
    printf("Preencha a matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

// Função para multiplicar a matriz por um escalar
void multiplicarPorEscalar(int** matriz, int linhas, int colunas, int escalar) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matriz[i][j] *= escalar;
        }
    }
}

// Função para exibir uma matriz
void exibirMatriz(int** matriz, int linhas, int colunas) {
    printf("Matriz resultante:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main(){
    setlocale(LC_ALL, "portugues");

    int linhas, colunas, escalar;

    // Solicitar as dimensões da matriz
    printf("Informe o número de linhas: ");
    scanf("%d", &linhas);
    printf("Informe o número de colunas: ");
    scanf("%d", &colunas);

    // Alocar a matriz dinamicamente
    int** matriz = alocarMatriz(linhas, colunas);

    // Preencher a matriz
    preencherMatriz(matriz, linhas, colunas);

    // Solicitar o escalar
    printf("Informe o valor do escalar: ");
    scanf("%d", &escalar);

    // Multiplicar a matriz pelo escalar
    multiplicarPorEscalar(matriz, linhas, colunas, escalar);

    // Exibir a matriz resultante
    exibirMatriz(matriz, linhas, colunas);

    // Liberar a memória alocada
    liberarMatriz(matriz, linhas);

    return 0;
}
