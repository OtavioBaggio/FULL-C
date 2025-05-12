/* 1. Ler dois números e mostrar os números pares do intervalo.
*/
#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");
    int N1, N2, i, aux;

    printf("Digite dois números para saber quais os números pares existentes entre o intervalo de ambos: \n");
    scanf("%d%d", &N1, &N2);

    if (N1 > N2){
        aux = N1;
        N1 = N2;
        N2 = aux;
    }

    printf("Números pares no intervalo: \n");
    for (i = N1; i <= N2; i++){
        if (i%2 == 0)
            printf("%i\t", i);
    }


    system("pause");
return 0;
}
