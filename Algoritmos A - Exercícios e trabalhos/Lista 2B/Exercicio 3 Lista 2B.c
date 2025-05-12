/* 3. Escreva um algoritmo que lê três valores para os lados de um triângulo (cada lado do
triângulo deve ser menor que a soma dos outros dois lados). O programa deve verificar se os lados
fornecidos formam realmente um triângulo, e caso esta condição seja verdadeira, se o triângulo é
equilátero (todos lados iguais), isósceles (dois lados iguais) ou escaleno (todos lados diferentes)
*/
#include <stdio.h>
#include <locale.h>

int main(){
    float lado1, lado2, lado3;

    setlocale(LC_ALL, "Portuguese");

    //Entrada
    printf("Bem-vindo ao verificador de triângulos matemáticos... \n");
    printf("Digite o valor do primeiro lado do triângulo: ");
    scanf("%f", &lado1);
    printf("Digite o valor do segundo lado do triângulo: ");
    scanf("%f", &lado2);
    printf("Digite o valor do terceiro lado do triângulo: ");
    scanf("%f", &lado3);

    //Condições para o triângulo
    if (lado1 < lado2 + 3 && lado2 < lado1 + lado3 && lado3 < lado2 + lado1) {
        printf("Triângulo existente.\n");

    //Classificação do Triângulo
    if (lado1 == lado2 || lado2 == lado3){
        printf("O triângulo é equilátero, pois todos os lados são iguais.\n");
    } else if (lado1 == lado2 || lado1 == lado3 || lado3 == lado2) {
            printf("O triângulo é isóceles, pois dois lados são iguais.\n");
    } else {
                printf("O triângulo é escaleno, pois todos os seus lados são diferentes.\n");
    }

    }

    system("pause");
return 0;
}
