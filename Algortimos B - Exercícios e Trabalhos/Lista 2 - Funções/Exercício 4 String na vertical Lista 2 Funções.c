/* 4. Escrever um programa que lê uma string e chama uma função para escrevê-la verticalmente na
tela.
*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

char str[100];

void linha(){
    printf("======================================================\n");
    return;
}

//Função para Escrever a string na vertical:
void StringVertical(char str[]){
    int i;

    for(i = 0; str[i] != '\0'; i++){
        printf("%c\n", str[i]);
    }

}

int main(){
setlocale(LC_ALL, "portuguese");

    printf("Informe uma palavra para colocá-la na vertical: ");
    gets(str);
    linha();
    linha();
    printf("Palavra na vertical:\n");
    StringVertical(str);



return 0;
}
