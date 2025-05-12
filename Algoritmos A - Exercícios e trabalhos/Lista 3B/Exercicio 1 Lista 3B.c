/*1. Faça um algoritmo para calcular e escrever a tabuada dos números de 1 a 10
*/
#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
    int i, numero;

    for (numero = 1; numero < 11; numero++){
        printf("Tabuada do %d:\n", numero);

        for (i = 1; i < 11; i++){
            printf("%d x %d = %d\n", numero, i, numero * i);
        }

        printf("\n");
    }


    system("pause");
return 0;
}
