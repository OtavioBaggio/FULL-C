/* 5. Leia um vetor de N elementos inteiros, onde N é informado pelo usuário. A seguir, conte quantos valores
primos existem no vetor informado */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Função para verificar se um número é primo
bool ehPrimo(int numero) {
    if (numero < 2) return false; // Números menores que 2 não são primos
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) return false; // Número divisível por i não é primo
    }
    return true;
}

int main() {
    int N;

    // Solicitar o tamanho do vetor
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &N);

    // Alocar dinamicamente o vetor
    int* vetor = (int*) malloc(N * sizeof(int));
    if (vetor == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1;
    }

    // Ler os elementos do vetor
    printf("Digite os %d elementos do vetor:\n", N);
    for (int i = 0; i < N; i++) {
        printf("Elemento [%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    // Contar os números primos no vetor
    int contadorPrimos = 0;
    for (int i = 0; i < N; i++) {
        if (ehPrimo(vetor[i])) {
            contadorPrimos++;
        }
    }

    // Exibir o resultado
    printf("Quantidade de números primos no vetor: %d\n", contadorPrimos);

    // Liberar a memória alocada
    free(vetor);

    return 0;
}
