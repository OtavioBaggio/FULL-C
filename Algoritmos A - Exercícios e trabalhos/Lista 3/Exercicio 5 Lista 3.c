/* 5. Fa�a um algoritmo para ler um valor num�rico e calcular e escrever o seu fatorial.
*/
#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
    int fat = 1, i, n;

    printf("*** FATORIAL ***\n");
    printf("N�mero: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++){
            fat = fat * i;
            //fat*= i;
    }
    printf("O Fatorial de %d! � = %d\n", n, fat);


    system("pause");
return 0;
}
