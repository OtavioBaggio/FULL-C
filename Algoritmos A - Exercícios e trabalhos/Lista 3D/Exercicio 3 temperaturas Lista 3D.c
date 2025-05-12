/* 3. Escreva um algoritmo em C que imprima uma tabela de equivalência de graus Fahrenheit
para Celsius (centígrados). Os limites são de 50 a 70 graus Fahrenheit, com intervalo de 1 grau.
A fórmula para conversão de Fahrenheit (F) para Celsius (C) é: C= F−32 / 1.8
*/
#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
    int fahrenheit;
    float celsius;

    printf("TABELA DE CONVERSÃO DE FAHRENHEIT PARA CELSIUS (centígrados)\n\n");
    printf("Fahrenheit\tCelsius\n");
    printf("------------------------\n");

    for (fahrenheit = 50; fahrenheit <= 70; fahrenheit++){
        celsius = (float)(fahrenheit - 32) / 1.8;
        printf("%d\t\t%.2f\n", fahrenheit, celsius);
    }


    system("pause");
return 0;
}
