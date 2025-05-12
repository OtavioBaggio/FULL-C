/* 2. Ler dois números e calcular o somatório dos números do intervalo
*/
#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
    int N1, N2, i, soma;

    printf("Digite dois números para calcular a soma entre os números do intervalo entre eles: \n");
    scanf("%d%d", &N1, &N2);

    for (i = N1; i <= N2; i++){
        soma = soma + i;
        //soma += i;
    }
    printf("Somatório do intervalo: %i \n", soma);


    system("pause");
return 0;
}
