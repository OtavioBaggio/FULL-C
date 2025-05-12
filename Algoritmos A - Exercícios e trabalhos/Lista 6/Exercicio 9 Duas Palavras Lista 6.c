/* 9. Ler duas palavras e compará-las. O programa deve informar se as palavras são iguais, em caso contrário,
informar se a primeira é maior do que a segunda, se a segunda é maior do que a primeira ou se são
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
    printf("\t\A seguir informe duas palavras, para ver se são iguais, ou se possuem tamanhos diferentes...\n");
    printf("\nInforme a primeira palavra:\n");
    gets(palavra1);
    printf("Informe a segunda palavra:\n");
    gets(palavra2);

    // Comparando as palavras utilizando a função strcmp
    tam = strcmp(palavra1, palavra2);

    if(tam == 0){
        printf("\nAs palavras são IGUAIS\n");
    }else if(tam > 0){
            printf("\nA primeira palavra '%s' é maior que a segunda '%s'\n", palavra1, palavra2);
    }else{
            printf("\nA segunda palavra '%s' é maior que a primeira '%s'\n", palavra2, palavra1);
    }

    // Verificando se as palavras são diferentes e têm o mesmo tamanho
    if (strlen(palavra1) == strlen(palavra2) && tam != 0) {
        printf("As palavras são diferentes, mas têm o mesmo tamanho.\n");
    }




return 0;
}
