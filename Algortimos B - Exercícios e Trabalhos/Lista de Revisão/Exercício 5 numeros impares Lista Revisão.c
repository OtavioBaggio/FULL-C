/* 5. Fa�a um algoritmo para ler um n�mero menor que 1000, encontrar e mostrar todos os n�meros �mpares
maiores que o n�mero lido e menores que 1000.
*/
#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
    int numero;
    int i;

    printf("\tDigite um n�mero menor que 1000: ");
    scanf("%d", &numero);

    if(numero >= 1000){
        printf("\nN�mero INV�LIDO! Apenas n�meros menores que 1000 s�o aceitos...\n");
        return 1;
    }

    printf("N�meros �mpares maiores que %d e menores que 1000:\n", numero);
    for(i = numero; i < 1000; i++){
        if(i % 2 != 0){
            printf("%d", i);
        }
        printf("\n");
    }













return 0;
}
