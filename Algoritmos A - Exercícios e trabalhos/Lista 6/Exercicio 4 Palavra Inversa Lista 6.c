/* 4. Escreva um programa que leia uma palavra qualquer e escreva como resultado a mesma palavra na ordem
inversa.
*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
    char palavra[50];
    int i, comprimento;

    printf("\tEscreva uma palavra e veremos sua versão invertida: \n");
    scanf("%s", palavra);

    //Obtendo o comprimento para a palavra
    comprimento = strlen(palavra);

    printf("\nVersão inversa:\n");
    for(i = comprimento - 1; i >= 0; i--){
        printf("%c", palavra[i]);
    }
    printf("\n");





return 0;
}
