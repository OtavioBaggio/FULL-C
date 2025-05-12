/* 6. Faça um algoritmo para ler dois valores inteiros. O primeiro representa o primeiro
elemento de uma progressão aritmética (PA) e o segundo a razão desta progressão
aritmética. Calcule e mostre os 10 elementos seguintes.
*/
#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
    int nPA, nR, i;

    printf("Informe um número: \n");
    scanf("%d", &nPA);
    printf("Agora, informe a razão de uma progressão aritmética (PA): \n");
    scanf("%d", &nR);

    for (i = 1; i <= 10; i++){
        printf("%d\t", nPA + i * nR);
    }


    system("pause");
return 0;
}
