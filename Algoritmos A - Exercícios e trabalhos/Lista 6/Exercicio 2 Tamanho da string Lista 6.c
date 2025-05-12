/* 2. Escreva um programa que leia uma string e mostre ao usuário quantos caracteres possui (tamanho da
string).
*/
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
    char str[100]; // Aumentei o tamanho da string para acomodar entradas maiores
    int tamanho;

    printf("Insira uma string: ");
    fgets(str, sizeof(str), stdin); // Usamos fgets para ler a linha completa, incluindo espaços

    // Removendo o caractere de nova linha do final, se houver
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    tamanho = strlen(str); // Calcula o tamanho da string

    printf("Tamanho da string: %d\n", tamanho);

return 0;
}
