/* 4. Existem n�meros de 4 d�gitos (entre 1000 e 9999) que obedecem � seguinte caracter�stica:
se dividirmos o n�mero em dois n�meros de dois d�gitos, um composto pela dezena e pela
unidade, e outro pelo milhar e pela centena, somarmos estes dois novos n�meros gerando
um terceiro, o quadrado deste terceiro n�mero � exatamente o n�mero original de quatro
d�gitos. Por exemplo:
2025 -> dividindo: 20 e 25 -> somando temos 45 -> 452 = 2025.
Escreva um programa para calcular todos os n�meros que obedecem a esta caracter�stica.
*/
#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
    int Num1, Num2, i, NumV, Poten, Soma;

    printf("Ol�, vamos verificar um ano de 1000 a 9999 d.c, e irei quebra-lo, lhe somarei e o potenciarei at� chegar no respectivo ano, se poss�vel\n");
    for (i = 1000;i < 9999; i++){

    //C�lculos
    NumV=i;
    Num1 = NumV/100;
    Num2 = NumV%100;

    Soma = Num1 + Num2;
    Poten = Soma * Soma;
    if (Poten == NumV){
        printf("%d = %d, %d // %d + %d, %d // %d * %d, %d \n\n", NumV, Num1, Num2, Num1, Num2, Soma, Soma, Soma, Poten );
    }


    }


    system("pause");
return 0;
}
