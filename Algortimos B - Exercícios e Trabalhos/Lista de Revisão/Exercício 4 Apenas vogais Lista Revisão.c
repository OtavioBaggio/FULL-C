/* 4 – Faça um programa que leia uma palavra qualquer e depois mostre apenas as vogais.
*/
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    char palavra[100], c;
    printf("\tDigite uma palavra para identificar suas vogais: ");
    scanf("%s", palavra);

    printf("\nVogais na palavra: ");
    for(int i = 0; i < strlen(palavra); i++) {
        c = palavra[i];
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
           c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            printf("%c", c);
        }else{
                printf("\nATENÇÃO! Palavra informada não se encontra no dicionário brasileiro, pois na língua portuguesa, não existe palavras sem vogais!");
        }
    }

    printf("\n");



return 0;
}
