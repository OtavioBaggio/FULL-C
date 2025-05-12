/* 6. Ler uma palavra e substituir todas as vogais por #. Mostar a palavra modificada.
*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

char* substituir_vogais_por_has(const char* palavra) {
    int tamanho = strlen(palavra);
    char* palavra_modificada = (char*) malloc((tamanho + 1) * sizeof(char));

    if (palavra_modificada == NULL) {
        printf("Erro ao alocar memória.\n");
        exit(1);
    }

    strcpy(palavra_modificada, palavra);

    for (int i = 0; i < tamanho; i++) {
        switch(tolower(palavra_modificada[i])) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                palavra_modificada[i] = '#';
                break;
        }
    }

    return palavra_modificada;
}

int main() {
    char palavra[100];

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    char* palavra_modificada = substituir_vogais_por_has(palavra);

    printf("Palavra modificada: %s\n", palavra_modificada);

    // Liberar a memória alocada
    free(palavra_modificada);

    return 0;
}
