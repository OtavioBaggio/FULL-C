/* 13. Escrever um programa que leia uma palavra qualquer e verifique se esta palavra é um palíndromo.
*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
setlocale(LC_ALL, "portuguese");
    char s[30], *ps, *pf;
    int flag;

    pf = ps = s;

    printf("Digite uma palavra: ");
    scanf("%s", s);
    //laço para posicionar pf no \0:
    for( ; *pf != '\0'; pf++);
    //posicionar o ponteiro na ultima linha:
    pf--;

    for( ; ps < pf; ps++, ps--){
        if(*ps != *pf) flag = 0;
    }
    if(flag == 1)
        printf("Palíndromo");
    else
        printf("Não é palíndromo");




return 0;
}
