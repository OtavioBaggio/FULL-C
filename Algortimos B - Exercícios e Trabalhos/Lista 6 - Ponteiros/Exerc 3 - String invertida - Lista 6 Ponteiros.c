/* - 3 Ler uma string e chamar uma função para inverte-la dentro da mesma string. Mostrar a string invertida. */

#include <stdio.h>
#include <locale.h>
#include <string.h>

void InverterString(char *str) {
    char *pf = str; // Ponteiro para o início da string
    char aux;

    // Laço para posicionar pf no final da string (no \0)
    while (*pf != '\0') {
        pf++;
    }

    // Posicionar o ponteiro na última letra:
    pf--;

    // Inverter a palavra:
    char *inicio = str; // Ponteiro para o início da string
    while (inicio < pf) {
        aux = *inicio;
        *inicio = *pf;
        *pf = aux;
        inicio++;
        pf--;
    }
}

int main() {
    setlocale(LC_ALL, "portuguese");
    char str[100];

    printf("Informe uma string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove a nova linha

    InverterString(str);

    printf("Palavra invertida: %s\n", str); // Imprime a string invertida

    return 0;
}
