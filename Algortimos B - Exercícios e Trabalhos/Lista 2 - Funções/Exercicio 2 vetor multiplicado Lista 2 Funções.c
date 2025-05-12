/* 2. Escreva um programa que lê um vetor real de 15 elementos. Leia também um número. A seguir,
o programa deve mostrar, sem nenhuma casa decimal, cada elemento do vetor multiplicado pelo
número lido, em uma função chamada cálculo.
*/

#include <stdio.h>
#include <locale.h>

void linha(){
    printf("======================================================\n");
    return;
}

// Função para multiplicar cada elemento do vetor pelo número fornecido
void calculo(float vetor[], float numero, int tamanho) {
    int i;

    // Multiplicando cada elemento do vetor pelo número
    for (i = 0; i < tamanho; i++) {
        printf("%d\n", (int)(vetor[i] * numero));  // Convertendo para int para mostrar sem casas decimais
    }
}

int main(){
setlocale(LC_ALL, "portuguese");
    float vetor[15];
    float numero;
    int i;

    // Lendo os elementos do vetor
    printf("Digite 15 elementos reais para o vetor:\n");
    for (i = 0; i < 15; i++) {
        scanf("%f", &vetor[i]);
    }

    // Lendo o número
    printf("Digite um número real para multiplicar os elementos do vetor: ");
    scanf("%f", &numero);

    // Chamando a função para calcular e mostrar os resultados
    linha();
    calculo(vetor, numero, 15);

    return 0;
}
