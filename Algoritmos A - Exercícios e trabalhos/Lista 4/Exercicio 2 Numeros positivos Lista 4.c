/* 2. Escreva um algoritmo que leia um vetor com 50 posi��es de n�meros inteiros, mostre
somente os positivos e por fim mostre a quantidade de n�meros positivos no vetor.
*/
#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
    int vetor[50], x, pos = 0;

    printf("Digite 50 n�meros inteiros:\n");
    x = 0;

    while(x < 50){
        printf("Vetor[%d]: ", x);
        scanf("%d", &vetor[x]);
        x++;
    }
    printf("\n");
    printf("N�meros positivos no vetor: \n");
    for(x = 0; x < 50; x++){
        if(vetor[x] > 0){
            printf("%d", vetor[x]);
            pos++;
        }
    }
    printf("\n");
    printf("Quantidade de n�meros positivos: %d\n", pos);



return 0;
}
