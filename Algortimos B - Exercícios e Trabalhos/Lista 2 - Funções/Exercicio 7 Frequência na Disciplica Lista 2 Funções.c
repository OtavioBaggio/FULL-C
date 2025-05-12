/* 7. Desenvolva um programa para ler a carga horária (em horas) de uma disciplina e a quantidade
faltas de um estudante. Em uma função, calcule e retorne o percentual de frequência do
estudante. A função main exibe o percentual de frequência na tela.
*/

#include <stdio.h>
#include <locale.h>

float CargaH, faltas;

void linha(){
    printf("======================================================\n");
    return;
}

float PercentualFreq(){
    float Freq;

    Freq = ((CargaH - faltas) / CargaH) * 100;
    return Freq;
}

int main(){
setlocale(LC_ALL, "portuguese");
    float frequenciaP;

    //Lendo os dados:
    printf("\tInforme os dados do aluno em relação a disciplina desejada para calcular seu percentual de frequência:\n\n");
    printf("Digite a carga horária da disciplina: ");
    scanf("%f", &CargaH);
    printf("Digite a quantidade de faltas do aluno: ");
    scanf("%f", &faltas);

    frequenciaP = PercentualFreq();

    //Resultados:
    linha();
    linha();
    printf("\nO percentual de frequência do estudante nessa discipilina é: %.1f %%\n", frequenciaP);


return 0;
}
