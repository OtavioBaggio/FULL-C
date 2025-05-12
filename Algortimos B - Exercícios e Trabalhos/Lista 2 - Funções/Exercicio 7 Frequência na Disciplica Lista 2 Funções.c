/* 7. Desenvolva um programa para ler a carga hor�ria (em horas) de uma disciplina e a quantidade
faltas de um estudante. Em uma fun��o, calcule e retorne o percentual de frequ�ncia do
estudante. A fun��o main exibe o percentual de frequ�ncia na tela.
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
    printf("\tInforme os dados do aluno em rela��o a disciplina desejada para calcular seu percentual de frequ�ncia:\n\n");
    printf("Digite a carga hor�ria da disciplina: ");
    scanf("%f", &CargaH);
    printf("Digite a quantidade de faltas do aluno: ");
    scanf("%f", &faltas);

    frequenciaP = PercentualFreq();

    //Resultados:
    linha();
    linha();
    printf("\nO percentual de frequ�ncia do estudante nessa discipilina �: %.1f %%\n", frequenciaP);


return 0;
}
