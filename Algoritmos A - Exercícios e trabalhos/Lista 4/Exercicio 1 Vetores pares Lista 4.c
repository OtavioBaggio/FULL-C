/* 1. Escreva um algoritmo que leia e mostre um vetor de 20 elementos inteiros. A seguir,
conte quantos valores pares existem no vetor
*/
#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
    int vetor[20], x, par = 0;

    //Ler o vetor
    printf("Digite 20 números inteiros:\n");
    x = 0;

    while(x < 20){
        printf("Vetor[%d]: ", x);
        scanf("%d", &vetor[x]);
        x++;
    }
    //Mostrar o vetor
    printf("\n");
    printf("Vetores: ");
    for(x = 0; x < 20; x++){
        printf("%d\t", vetor[x]);
    }
    //Contar os Pares
    for(x = 0; x < 20; x++){
        if(vetor[x]%2 == 0)
            par++;
    }
    printf("\n");
    printf("\nHá %d números pares\n", par);

    //Motrar o valor dos elementos de índice par
    printf("\n");
    printf("Os elementos armazenados nas posições pares do vetor são:\n");
    for(x = 0; x < 20; x++){
        if(x%2 == 0)
            printf("%d\t", vetor[x]);
    }

return 0;
}
