/* 2 - Ler uma string e chamar uma função para contar quantos caracteres possui. A main deve exibir a quantidade de
caracteres. */

#include <stdio.h>
#include <locale.h>
#include <string.h>

// Função para contar a quantidade de caracteres em uma string
int ContarCaracter(char *str) {
    int contador = 0;

    // Corrigido: Condição correta para verificar o fim da string
    while (*str != '\0') {
        contador++;
        str++;
    }

    return contador;
}

int main() {
    setlocale(LC_ALL, "portuguese");
    char str[100];

    // Lê a string do usuário
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    // Verifica se o último caractere é '\n' e o remove
    if (str[ContarCaracter(str) - 1] == '\n') {
        str[ContarCaracter(str) - 1] = '\0';  // Substitui o '\n' por '\0'
    }

    // Chama a função para contar os caracteres e exibe o resultado
    int quantidade = ContarCaracter(str);
    printf("A string contém %d caracteres.\n", quantidade);

    return 0;
}
