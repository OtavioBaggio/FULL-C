/* 2. Escreva um programa que l� um vetor real de 15 elementos. Leia tamb�m um n�mero. A seguir,
o programa deve mostrar, sem nenhuma casa decimal, cada elemento do vetor multiplicado pelo
n�mero lido, em uma fun��o chamada c�lculo.
*/

#include <stdio.h>
#include <locale.h>

void linha(){
    printf("======================================================\n");
    return;
}

// Fun��o para multiplicar cada elemento do vetor pelo n�mero fornecido
void calculo(float vetor[], float numero, int tamanho) {
    int i;

    // Multiplicando cada elemento do vetor pelo n�mero
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

    // Lendo o n�mero
    printf("Digite um n�mero real para multiplicar os elementos do vetor: ");
    scanf("%f", &numero);

    // Chamando a fun��o para calcular e mostrar os resultados
    linha();
    calculo(vetor, numero, 15);

    return 0;
}
