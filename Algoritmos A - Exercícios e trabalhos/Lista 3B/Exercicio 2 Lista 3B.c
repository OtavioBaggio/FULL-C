/* 2. Faça um algoritmo para ler um número menor que 1000 e calcular e mostrar todos os
números ímpares maiores que o número lido e menores que 1000.
*/
#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
    int num, i;

    printf("Informe um número menor do que 1000: ");
    scanf("%d", &num);

    if (num >= 1000){
        printf("O numero digitado nao e menor que 1000.\n");
        return 1;
    }

    printf("Números ímpares entre %d e 1000: \n", num);
    for (i = num + 1; i < 1000; i++){
        if (i%2 != 0){
            printf("%d\n", i);
        }
    }


    system("pause");
return 0;
}
