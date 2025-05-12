/* 2. Desenvolva um algoritmo para controlar os dados de uma turma ofertada em um determinado
    semestre, para a graduação em Ciência da Computação. A turma possui: código (inteiro), nome
    da disciplina (até 50 caracteres), carga horária em horas (inteiro), nome do professor (até 60
    caracteres), até 40 alunos (um vetor para armazenar a matrícula de cada aluno da turma) e a
    quantidade de presenças de cada aluno. Leia os dados da turma e, posteriormente, apresente:
        i. Os dados da turma (código, nome disciplina, carga horária e professor).
        ii. A quantidade de alunos matriculados na turma.
        iii. A matrícula de cada aluno e seu percentual de frequência.
        iv. O valor médio da frequência dos alunos da turma.
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
    printf("Digite o código da turma: ");
    scanf("%d", &turma.codigo);
    printf("Digite o nome da disciplina (até 50 caracteres): ");
    getchar();  // Limpar o buffer
    fgets(turma.disciplina, sizeof(turma.disciplina), stdin);
    printf("Digite a carga horária (em horas): ");
    scanf("%d", &turma.cargaHoraria);
    printf("Digite o nome do professor (até 60 caracteres): ");
    getchar();  // Limpar o buffer
    fgets(turma.nomeProf, sizeof(turma.nomeProf), stdin);
    printf("Digite a quantidade de alunos matriculados (até %d): ", N);
    scanf("%d", &turma.totalAlunos);

    // Lendo dados dos alunos
    for (i = 0; i < turma.totalAlunos; i++) {
        linha();
        printf("Digite a matrícula do aluno %d: ", i + 1);
        scanf("%d", &turma.alunos[i].matricula);
        printf("Digite a quantidade de presenças (em %) do aluno %d: ", i + 1);
        scanf("%d", &turma.alunos[i].presencas);
        totalPresencas += turma.alunos[i].presencas;
    }

    // Apresentando os dados da turma
    linha();
    printf("\nDados da Turma:\n");
    printf("Código: %d\n", turma.codigo);
    printf("Disciplina: %s", turma.disciplina);
    printf("Carga Horária: %d\n", turma.cargaHoraria);
    printf("Professor: %s", turma.nomeProf);
    printf("Quantidade de alunos matriculados: %d\n", turma.totalAlunos);

    // Apresentando os dados dos alunos
    linha();
    printf("\nMatrículas e Percentual de Frequência dos Alunos:\n");
    for (i = 0; i < turma.totalAlunos; i++) {
        float percentualFrequencia = (turma.alunos[i].presencas / (float)turma.cargaHoraria) * 100;
        printf("Aluno %d: Matrícula %d - Percentual de Frequência: %.2f%%\n", i + 1, turma.alunos[i].matricula, percentualFrequencia);
    }

    // Calculando e apresentando o valor médio da frequência dos alunos
    float mediaFrequencia = (totalPresencas / (float)(turma.totalAlunos * turma.cargaHoraria)) * 100;
    printf("\nValor médio da frequência dos alunos: %.2f%%\n", mediaFrequencia);



return 0;
}
