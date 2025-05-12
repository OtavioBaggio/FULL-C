/* 1 - Ler uma string e desenvolver uma função para escreve-la verticalmente na tela. */

#include <stdio.h>
#include <locale.h>
#include <string.h>

void StringVertical(char *str){
    while(*str != '\0'){
        printf("%c\n", *str);
        str++;
    }
}

int main(){
setlocale(LC_ALL, "portuguese");
    char str[100];

    printf("Digite uma string: ");
    gets(str);

    StringVertical(str);





return 0;
}
