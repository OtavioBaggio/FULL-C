/* 5. Escreva um algoritmo que leia um vetor inteiro de 20 posições. Crie um segundo vetor,
substituindo os valores nulos por 2. Mostre os vetor lido e o vetor resultado.
*/
#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
    int a[20], i, b[20];

    printf("Digite os 20 elementos: \n");
    for(i = 0; i < 20; i++){
        scanf("%d", &a[i]);
    }

    i = 0;
    while(i < 20){
        if(a[i] != 0)
            b[i] = a[i];
       else
            b[i] = 2;
        i++;
    }

    printf("Vetor Resultado: ");
    for(i = 0; i < 20; i++)
            printf("%d\t", b[i]);


return 0;
}
