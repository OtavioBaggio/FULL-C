/* 3. Escrever um programa que leia dois n�meros e a seguir realize as opera��es aritm�ticas b�sicas
(+, -, *, /) sobre estes n�meros. Cada uma das opera��es deve ser implementada em uma fun��o
diferente.
*/

#include <stdio.h>
#include <locale.h>

float N1, N2;   //Vari�vel Global

void linha(){
    printf("======================================================\n");
    return;
}

//Fun��o para adi��o:
float CalcularSoma(){
    float CalculoSoma;

    CalculoSoma = N1 + N2;

    return CalculoSoma;
}

//Fun��o para Subtra��o:
float CalularSubtracao(){
    float CalculoSub;

    CalculoSub = N1 - N2;
    return CalculoSub;
}

//Fun��o para Multiplica��o
float CalcularMulti(){
    float CalculoMulti;

    CalculoMulti = N1 * N2;
    return CalculoMulti;
}

//Fun��o para Divis�o
float CalcularDivi(){
    float CalculoDivi;

    CalculoDivi = N1 / N2;
    return CalculoDivi;
}

int main(){
setlocale(LC_ALL, "portuguese");
    float soma, divisao, multi, subtra;

    //Entrada de Dados
    printf("Informe dois n�meros para calcular opera��es aritm�ticas:\n");
    scanf("%f%f", &N1, &N2);

    //Mostrando os resultados:
    linha();
    linha();
    printf("Soma: %.1f", CalcularSoma());
    printf("\nSubtra��o: %.1f", CalularSubtracao());
    printf("\nMultiplica��o: %.1f", CalcularMulti());
    printf("\nDivis�o: %.1f", CalcularDivi());


return 0;
}
