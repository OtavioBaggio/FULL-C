/* 10. Ler uma string e escreve-la verticalmente na tela.
*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
setlocale(LC_ALL, "portuguese");
    char palavra[30], *p;
    int i;


    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    p = palavra;

    printf("Palavra na Vertical:\n");
    for(i = 0; i < p[i] != '\0'; i++){
        printf("%c\n", p[i]);
    }





return 0;
}
