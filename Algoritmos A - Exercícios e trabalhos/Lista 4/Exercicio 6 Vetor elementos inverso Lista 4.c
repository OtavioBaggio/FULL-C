/* 6. Escreva um programa que leia valores em um vetor de 5 posições. Escrever os elementos
do vetor e após escrever os elementos na ordem inversa.
*/
#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
    int v[5], i, vi[5];

    printf("Digite 5 elementos: \n");
    for(i = 0; i < 5; i++){
        scanf("%d", &v[i]);
    }

    printf("Vetores u + v: ");
    for(i = 0; i < 5; i++)
        printf("%d\t", v[i]);

    printf("\nVetores inversos u - v: ");
    //vi[5] = v[5];
    for(i = 4; i >= 0; i--)
        printf("%d\t", v[i]);


return 0;
}
