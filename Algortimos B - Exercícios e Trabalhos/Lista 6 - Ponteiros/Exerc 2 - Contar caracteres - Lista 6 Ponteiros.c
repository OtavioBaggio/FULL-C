/* 2 - Ler uma string e chamar uma fun��o para contar quantos caracteres possui. A main deve exibir a quantidade de
caracteres. */

#include <stdio.h>
#include <locale.h>
#include <string.h>

// Fun��o para contar a quantidade de caracteres em uma string
int ContarCaracter(char *str) {
    int contador = 0;

    // Corrigido: Condi��o correta para verificar o fim da string
    while (*str != '\0') {
        contador++;
        str++;
    }

    return contador;
}

int main() {
    setlocale(LC_ALL, "portuguese");
    char str[100];

    // L� a string do usu�rio
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    // Verifica se o �ltimo caractere � '\n' e o remove
    if (str[ContarCaracter(str) - 1] == '\n') {
        str[ContarCaracter(str) - 1] = '\0';  // Substitui o '\n' por '\0'
    }

    // Chama a fun��o para contar os caracteres e exibe o resultado
    int quantidade = ContarCaracter(str);
    printf("A string cont�m %d caracteres.\n", quantidade);

    return 0;
}
