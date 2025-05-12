/* 5. Júlia ao procurar seu gatinho, o avistou em cima da árvore. Ela pediu ajuda a seu pai, que colocou uma
escada junto à árvore para ajudar o gato a descer. Sabendo que a altura que o gato está do chão é o valor
a (em metros) e que a escada estava posicionada a b metros da árvore, calcule o comprimento da escada
que o gato deverá descer, considerando que este equivale à hipotenusa c.
Desenvolva um algoritmo para ler os valores de a e b e calcular o comprimento da escada, usando o
Teorema de Pitágoras:     C² = a² + b²
*/
#include <stdio.h>
#include <locale.h>

int main(){
    float a, b, c;

    setlocale(LC_ALL, "Portuguese");

    //Dados
    printf("Olá aluno, informe o valor de a:\n");
    scanf("%f", &a);
    printf("o valor de b:\n");
    scanf("%f", &b);

    //Cálculos
    c = sqrt(pow(a,2) + (pow(b,2)));

    //Saída
    printf("O comprimento da escada determinado pelo Teorema de Pitágoras é de: %.1f\n", c);
    system("pause");

return 0;
}
