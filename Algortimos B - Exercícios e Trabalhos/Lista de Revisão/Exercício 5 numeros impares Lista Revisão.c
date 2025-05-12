/* 5. Faça um algoritmo para ler um número menor que 1000, encontrar e mostrar todos os números ímpares
maiores que o número lido e menores que 1000.
*/
#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
    int numero;
    int i;

    printf("\tDigite um número menor que 1000: ");
    scanf("%d", &numero);

    if(numero >= 1000){
        printf("\nNúmero INVÁLIDO! Apenas números menores que 1000 são aceitos...\n");
        return 1;
    }

    printf("Números ímpares maiores que %d e menores que 1000:\n", numero);
    for(i = numero; i < 1000; i++){
        if(i % 2 != 0){
            printf("%d", i);
        }
        printf("\n");
    }













return 0;
}
