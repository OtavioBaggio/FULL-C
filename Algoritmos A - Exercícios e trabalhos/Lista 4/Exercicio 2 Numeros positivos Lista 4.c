/* 2. Escreva um algoritmo que leia um vetor com 50 posições de números inteiros, mostre
somente os positivos e por fim mostre a quantidade de números positivos no vetor.
*/
#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
    int vetor[50], x, pos = 0;

    printf("Digite 50 números inteiros:\n");
    x = 0;

    while(x < 50){
        printf("Vetor[%d]: ", x);
        scanf("%d", &vetor[x]);
        x++;
    }
    printf("\n");
    printf("Números positivos no vetor: \n");
    for(x = 0; x < 50; x++){
        if(vetor[x] > 0){
            printf("%d", vetor[x]);
            pos++;
        }
    }
    printf("\n");
    printf("Quantidade de números positivos: %d\n", pos);



return 0;
}
