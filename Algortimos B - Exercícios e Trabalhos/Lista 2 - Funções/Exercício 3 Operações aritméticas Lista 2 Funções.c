/* 3. Escrever um programa que leia dois números e a seguir realize as operações aritméticas básicas
(+, -, *, /) sobre estes números. Cada uma das operações deve ser implementada em uma função
diferente.
*/

#include <stdio.h>
#include <locale.h>

float N1, N2;   //Variável Global

void linha(){
    printf("======================================================\n");
    return;
}

//Função para adição:
float CalcularSoma(){
    float CalculoSoma;

    CalculoSoma = N1 + N2;

    return CalculoSoma;
}

//Função para Subtração:
float CalularSubtracao(){
    float CalculoSub;

    CalculoSub = N1 - N2;
    return CalculoSub;
}

//Função para Multiplicação
float CalcularMulti(){
    float CalculoMulti;

    CalculoMulti = N1 * N2;
    return CalculoMulti;
}

//Função para Divisão
float CalcularDivi(){
    float CalculoDivi;

    CalculoDivi = N1 / N2;
    return CalculoDivi;
}

int main(){
setlocale(LC_ALL, "portuguese");
    float soma, divisao, multi, subtra;

    //Entrada de Dados
    printf("Informe dois números para calcular operações aritméticas:\n");
    scanf("%f%f", &N1, &N2);

    //Mostrando os resultados:
    linha();
    linha();
    printf("Soma: %.1f", CalcularSoma());
    printf("\nSubtração: %.1f", CalularSubtracao());
    printf("\nMultiplicação: %.1f", CalcularMulti());
    printf("\nDivisão: %.1f", CalcularDivi());


return 0;
}
