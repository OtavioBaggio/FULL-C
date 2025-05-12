/* 4. Existem números de 4 dígitos (entre 1000 e 9999) que obedecem à seguinte característica:
se dividirmos o número em dois números de dois dígitos, um composto pela dezena e pela
unidade, e outro pelo milhar e pela centena, somarmos estes dois novos números gerando
um terceiro, o quadrado deste terceiro número é exatamente o número original de quatro
dígitos. Por exemplo:
2025 -> dividindo: 20 e 25 -> somando temos 45 -> 452 = 2025.
Escreva um programa para calcular todos os números que obedecem a esta característica.
*/
#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
    int Num1, Num2, i, NumV, Poten, Soma;

    printf("Olá, vamos verificar um ano de 1000 a 9999 d.c, e irei quebra-lo, lhe somarei e o potenciarei até chegar no respectivo ano, se possível\n");
    for (i = 1000;i < 9999; i++){

    //Cálculos
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
