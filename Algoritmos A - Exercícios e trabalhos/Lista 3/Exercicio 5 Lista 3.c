/* 5. Faça um algoritmo para ler um valor numérico e calcular e escrever o seu fatorial.
*/
#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
    int fat = 1, i, n;

    printf("*** FATORIAL ***\n");
    printf("Número: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++){
            fat = fat * i;
            //fat*= i;
    }
    printf("O Fatorial de %d! é = %d\n", n, fat);


    system("pause");
return 0;
}
