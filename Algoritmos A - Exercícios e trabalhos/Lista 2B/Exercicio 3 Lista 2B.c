/* 3. Escreva um algoritmo que l� tr�s valores para os lados de um tri�ngulo (cada lado do
tri�ngulo deve ser menor que a soma dos outros dois lados). O programa deve verificar se os lados
fornecidos formam realmente um tri�ngulo, e caso esta condi��o seja verdadeira, se o tri�ngulo �
equil�tero (todos lados iguais), is�sceles (dois lados iguais) ou escaleno (todos lados diferentes)
*/
#include <stdio.h>
#include <locale.h>

int main(){
    float lado1, lado2, lado3;

    setlocale(LC_ALL, "Portuguese");

    //Entrada
    printf("Bem-vindo ao verificador de tri�ngulos matem�ticos... \n");
    printf("Digite o valor do primeiro lado do tri�ngulo: ");
    scanf("%f", &lado1);
    printf("Digite o valor do segundo lado do tri�ngulo: ");
    scanf("%f", &lado2);
    printf("Digite o valor do terceiro lado do tri�ngulo: ");
    scanf("%f", &lado3);

    //Condi��es para o tri�ngulo
    if (lado1 < lado2 + 3 && lado2 < lado1 + lado3 && lado3 < lado2 + lado1) {
        printf("Tri�ngulo existente.\n");

    //Classifica��o do Tri�ngulo
    if (lado1 == lado2 || lado2 == lado3){
        printf("O tri�ngulo � equil�tero, pois todos os lados s�o iguais.\n");
    } else if (lado1 == lado2 || lado1 == lado3 || lado3 == lado2) {
            printf("O tri�ngulo � is�celes, pois dois lados s�o iguais.\n");
    } else {
                printf("O tri�ngulo � escaleno, pois todos os seus lados s�o diferentes.\n");
    }

    }

    system("pause");
return 0;
}
