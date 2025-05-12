/* 5. J�lia ao procurar seu gatinho, o avistou em cima da �rvore. Ela pediu ajuda a seu pai, que colocou uma
escada junto � �rvore para ajudar o gato a descer. Sabendo que a altura que o gato est� do ch�o � o valor
a (em metros) e que a escada estava posicionada a b metros da �rvore, calcule o comprimento da escada
que o gato dever� descer, considerando que este equivale � hipotenusa c.
Desenvolva um algoritmo para ler os valores de a e b e calcular o comprimento da escada, usando o
Teorema de Pit�goras:     C� = a� + b�
*/
#include <stdio.h>
#include <locale.h>

int main(){
    float a, b, c;

    setlocale(LC_ALL, "Portuguese");

    //Dados
    printf("Ol� aluno, informe o valor de a:\n");
    scanf("%f", &a);
    printf("o valor de b:\n");
    scanf("%f", &b);

    //C�lculos
    c = sqrt(pow(a,2) + (pow(b,2)));

    //Sa�da
    printf("O comprimento da escada determinado pelo Teorema de Pit�goras � de: %.1f\n", c);
    system("pause");

return 0;
}
