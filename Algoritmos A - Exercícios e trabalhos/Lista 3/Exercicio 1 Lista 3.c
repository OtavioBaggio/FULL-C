/* 1. Ler dois n�meros e mostrar os n�meros pares do intervalo.
*/
#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");
    int N1, N2, i, aux;

    printf("Digite dois n�meros para saber quais os n�meros pares existentes entre o intervalo de ambos: \n");
    scanf("%d%d", &N1, &N2);

    if (N1 > N2){
        aux = N1;
        N1 = N2;
        N2 = aux;
    }

    printf("N�meros pares no intervalo: \n");
    for (i = N1; i <= N2; i++){
        if (i%2 == 0)
            printf("%i\t", i);
    }


    system("pause");
return 0;
}
