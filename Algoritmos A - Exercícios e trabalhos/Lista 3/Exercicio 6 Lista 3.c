/* 6. Fa�a um algoritmo para ler dois valores inteiros. O primeiro representa o primeiro
elemento de uma progress�o aritm�tica (PA) e o segundo a raz�o desta progress�o
aritm�tica. Calcule e mostre os 10 elementos seguintes.
*/
#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
    int nPA, nR, i;

    printf("Informe um n�mero: \n");
    scanf("%d", &nPA);
    printf("Agora, informe a raz�o de uma progress�o aritm�tica (PA): \n");
    scanf("%d", &nR);

    for (i = 1; i <= 10; i++){
        printf("%d\t", nPA + i * nR);
    }


    system("pause");
return 0;
}
