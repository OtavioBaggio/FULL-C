/* 10. Fa�a um programa, com uma fun��o que recebe como par�metro uma letra e uma string, e
retorne um valor inteiro indicando quantas vezes a letra aparece na string. A fun��o main deve
ler a string, a letra e chamar a fun��o implementada
*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

void linha(){
    printf("======================================================\n");
    return;
}

//Fun��o para contar quantas a letra aparece na string
int contar(char c, char p[]){
    int x = 0, i;

    for(i = 0; p[i] != '\0'; i++){
        if(p[i] == c)
            x++;
    }
    return x;
}

int main(){
setlocale(LC_ALL, "portuguese");
    char str[50], letra;
    int q;

    printf("Digite uma palavra: ");
    gets(str);
    printf("Digite uma letra: ");
    scanf("%c", &letra);

    q = contar(letra, str);

    linha();
    linha();
    printf("A letra '%c' aparece %d vezes em %s\n", letra, q, str);


return 0;
}
