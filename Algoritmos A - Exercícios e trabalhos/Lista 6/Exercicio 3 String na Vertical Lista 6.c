/* 3. Faça um programa que lê uma string e escreve esta string verticalmente na tela
*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
    char string[20];
    int i = 0;

    printf("Digite uma palavra: \n");
    scanf("%s", string);

    while(string[i]){
        printf("%c\n", string[i]);
        i++;
    }



return 0;
}
