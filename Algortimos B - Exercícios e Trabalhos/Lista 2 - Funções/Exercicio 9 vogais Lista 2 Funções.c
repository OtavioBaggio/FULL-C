/* 9. Fa�a um programa que leia um caractere e chame uma fun��o para verificar se o caractere �
uma vogal. Ao final, deve ser mostrada uma mensagem (dentro da main) indicando o resultado
do teste. A fun��o deve retornar 1 se for vogal e 0 caso contr�rio. Para simplificar, considere
apenas as letras sem acentua��o
*/

#include <stdio.h>
#include <locale.h>

void linha(){
    printf("======================================================\n");
    return;
}

//Fun��o para verificar as vogais:
int vogal(char letra){
    if(toupper(letra) == 'A' || toupper(letra) == 'E' || toupper(letra) == 'I' || toupper(letra) == 'O' || toupper(letra) == 'U')
        return 1;
    else return 0;
}

int main(){
setlocale(LC_ALL, "portuguese");
    char c;

    printf("Digite uma letra para verificar se � vogal: ");
    scanf("%c", &c);

    linha();
    linha();

    if(vogal(c) == 1)
        printf("� vogal");
    else
        printf("N�o � vogal");

return 0;
}
