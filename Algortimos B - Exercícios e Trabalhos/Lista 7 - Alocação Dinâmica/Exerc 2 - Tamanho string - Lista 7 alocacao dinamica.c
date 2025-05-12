/* 2. Faça um programa que lê uma string, letra por letra, e ao final da execução mostra a string completa. Antes
de começar a ler as letras de string, peça para o usuário informar o tamanho da string e aloque
dinamicamente um vetor com o tamanho necessário */

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    int tamanho, i;

    printf("Defina o tamanho da string: ");
    scanf("%d", &tamanho);

    // Alocar memória dinamicamente para a string (+1 para o caractere nulo)
    char *strg = (char*) malloc((tamanho + 1) * sizeof (char));
    if(strg == NULL){
        printf("Erro ao alocar a memória!\n");
        return 1;
    }

    //Limpar o buffer do teclado
    getchar();

    //Le a string letra por letra:
    printf("Informe letra por letra da string:\n");
    for(i = 0; i < tamanho; i++){
        printf("Letra %d: ", i + 1);
        strg[i] = getchar();
        getchar();      //Consome o /n após cada entrada;
    }
    // Adicionar o caractere nulo ao final da string
    strg[tamanho] = '\0';

    // Mostrar a string completa
    printf("String completa: %s\n", strg);

    // Liberar a memória alocada
    free(strg);




return 0;
}
