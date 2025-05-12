/* 2. Desenvolva um algoritmo para controlar os dados de uma turma ofertada em um determinado
    semestre, para a gradua��o em Ci�ncia da Computa��o. A turma possui: c�digo (inteiro), nome
    da disciplina (at� 50 caracteres), carga hor�ria em horas (inteiro), nome do professor (at� 60
    caracteres), at� 40 alunos (um vetor para armazenar a matr�cula de cada aluno da turma) e a
    quantidade de presen�as de cada aluno. Leia os dados da turma e, posteriormente, apresente:
        i. Os dados da turma (c�digo, nome disciplina, carga hor�ria e professor).
        ii. A quantidade de alunos matriculados na turma.
        iii. A matr�cula de cada aluno e seu percentual de frequ�ncia.
        iv. O valor m�dio da frequ�ncia dos alunos da turma.
*/
#include <stdio.h>
#include <locale.h>
#include <string.h>

void linha(){
    printf("======================================================\n");
    return;
}

#define N 40

struct Aluno {
    int matricula;
    int presencas;
};


struct Turma{
    int codigo;
    char disciplina[50];
    int cargaHoraria;
    char nomeProf[60];
    char aluno;
    struct Aluno alunos[N];
    int totalAlunos;
};

int main(){
setlocale(LC_ALL, "portuguese");

    struct Turma turma;
    int i;
    int totalPresencas = 0;

    // Lendo os dados da turma
    printf("Digite o c�digo da turma: ");
    scanf("%d", &turma.codigo);
    printf("Digite o nome da disciplina (at� 50 caracteres): ");
    getchar();  // Limpar o buffer
    fgets(turma.disciplina, sizeof(turma.disciplina), stdin);
    printf("Digite a carga hor�ria (em horas): ");
    scanf("%d", &turma.cargaHoraria);
    printf("Digite o nome do professor (at� 60 caracteres): ");
    getchar();  // Limpar o buffer
    fgets(turma.nomeProf, sizeof(turma.nomeProf), stdin);
    printf("Digite a quantidade de alunos matriculados (at� %d): ", N);
    scanf("%d", &turma.totalAlunos);

    // Lendo dados dos alunos
    for (i = 0; i < turma.totalAlunos; i++) {
        linha();
        printf("Digite a matr�cula do aluno %d: ", i + 1);
        scanf("%d", &turma.alunos[i].matricula);
        printf("Digite a quantidade de presen�as (em %) do aluno %d: ", i + 1);
        scanf("%d", &turma.alunos[i].presencas);
        totalPresencas += turma.alunos[i].presencas;
    }

    // Apresentando os dados da turma
    linha();
    printf("\nDados da Turma:\n");
    printf("C�digo: %d\n", turma.codigo);
    printf("Disciplina: %s", turma.disciplina);
    printf("Carga Hor�ria: %d\n", turma.cargaHoraria);
    printf("Professor: %s", turma.nomeProf);
    printf("Quantidade de alunos matriculados: %d\n", turma.totalAlunos);

    // Apresentando os dados dos alunos
    linha();
    printf("\nMatr�culas e Percentual de Frequ�ncia dos Alunos:\n");
    for (i = 0; i < turma.totalAlunos; i++) {
        float percentualFrequencia = (turma.alunos[i].presencas / (float)turma.cargaHoraria) * 100;
        printf("Aluno %d: Matr�cula %d - Percentual de Frequ�ncia: %.2f%%\n", i + 1, turma.alunos[i].matricula, percentualFrequencia);
    }

    // Calculando e apresentando o valor m�dio da frequ�ncia dos alunos
    float mediaFrequencia = (totalPresencas / (float)(turma.totalAlunos * turma.cargaHoraria)) * 100;
    printf("\nValor m�dio da frequ�ncia dos alunos: %.2f%%\n", mediaFrequencia);



return 0;
}
