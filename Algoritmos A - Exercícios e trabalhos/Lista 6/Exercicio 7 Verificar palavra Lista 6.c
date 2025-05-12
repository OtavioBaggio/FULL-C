/* 7. Escreva um programa que leia uma palavra qualquer e verifique se esta palavra é um palíndromo.
*/
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
    char p[50];//palavra
    int i, j, tam, flag = 1;

    printf("Digite uma palavra: ");
    gets(p);

    //tamanho de p
    for(tam = 0; p[tam] != '\0'; tam++);
    // ou tam = strlen(p)
    for(i = 0, j = tam - 1; i < j; i++, j--){
        if(p[i] != p[j])
            flag = 0;
    }
    if(flag == 1)
        printf("Palíndromo");
    else
        printf("Não é palíndromo");



return 0;
}
