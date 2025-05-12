/* 9. Ler duas palavras e compar�-las. O programa deve informar se as palavras s�o iguais, em caso contr�rio,
informar se a primeira � maior do que a segunda, se a segunda � maior do que a primeira ou se s�o
diferentes e tem o mesmo tamanho.
*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "pt_BR.UTF-8");
    char palavra1[50], palavra2[50];
    int i, j, tam;

    //Lendo as Palavras
    printf("\t\A seguir informe duas palavras, para ver se s�o iguais, ou se possuem tamanhos diferentes...\n");
    printf("\nInforme a primeira palavra:\n");
    gets(palavra1);
    printf("Informe a segunda palavra:\n");
    gets(palavra2);

    // Comparando as palavras utilizando a fun��o strcmp
    tam = strcmp(palavra1, palavra2);

    if(tam == 0){
        printf("\nAs palavras s�o IGUAIS\n");
    }else if(tam > 0){
            printf("\nA primeira palavra '%s' � maior que a segunda '%s'\n", palavra1, palavra2);
    }else{
            printf("\nA segunda palavra '%s' � maior que a primeira '%s'\n", palavra2, palavra1);
    }

    // Verificando se as palavras s�o diferentes e t�m o mesmo tamanho
    if (strlen(palavra1) == strlen(palavra2) && tam != 0) {
        printf("As palavras s�o diferentes, mas t�m o mesmo tamanho.\n");
    }




return 0;
}
