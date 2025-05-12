/* 3. Estenda a solução da questão 2, para armazenar os dados de todas as turmas ofertadas no
semestre. Considere que no máximo são ofertadas 32 turmas.
*/

#include <stdio.h>
#include <locale.h>

void linha(){
    printf("======================================================\n");
    return;
}

#define MAX_ALUNOS 40  // Número máximo de alunos por turma
#define MAX_TURMAS 32  // Número máximo de turmas por semestre

struct Aluno {
    int matricula;
    int presencas;
};

struct Turma {
    int codigo;
    char disciplina[50];
    int cargaHoraria;
    char nomeProf[60];
    struct Aluno alunos[MAX_ALUNOS];
    int totalAlunos;
};

int main() {
    setlocale(LC_ALL, "portuguese");

    struct Turma turmas[MAX_TURMAS];  // Vetor para armazenar todas as turmas
    int numTurmas;
    int i, j;

    // Lendo o número de turmas a serem cadastradas
    printf("Digite a quantidade de turmas ofertadas no semestre (até %d): ", MAX_TURMAS);
    scanf("%d", &numTurmas);

    // Lendo os dados de cada turma
    for (i = 0; i < numTurmas; i++) {
        linha();
        printf("\nCadastro da turma %d:\n", i + 1);

        printf("Digite o código da turma: ");
        scanf("%d", &turmas[i].codigo);

        printf("Digite o nome da disciplina (até 50 caracteres): ");
        getchar();  // Limpar o buffer
        fgets(turmas[i].disciplina, sizeof(turmas[i].disciplina), stdin);

        printf("Digite a carga horária (em horas): ");
        scanf("%d", &turmas[i].cargaHoraria);

        printf("Digite o nome do professor (até 60 caracteres): ");
        getchar();  // Limpar o buffer
        fgets(turmas[i].nomeProf, sizeof(turmas[i].nomeProf), stdin);

        printf("Digite a quantidade de alunos matriculados (até %d): ", MAX_ALUNOS);
        scanf("%d", &turmas[i].totalAlunos);

        // Lendo dados dos alunos da turma atual
        for (j = 0; j < turmas[i].totalAlunos; j++) {
            linha();
            printf("Digite a matrícula do aluno %d: ", j + 1);
            scanf("%d", &turmas[i].alunos[j].matricula);

            printf("Digite a quantidade de presenças do aluno %d: ", j + 1);
            scanf("%d", &turmas[i].alunos[j].presencas);
        }
    }

    // Apresentando os dados de todas as turmas
    for (i = 0; i < numTurmas; i++) {
        linha();
        linha();
        printf("\nDados da Turma %d:\n", i + 1);
        printf("Código: %d\n", turmas[i].codigo);
        printf("Disciplina: %s", turmas[i].disciplina);
        printf("Carga Horária: %d\n", turmas[i].cargaHoraria);
        printf("Professor: %s", turmas[i].nomeProf);
        printf("Quantidade de alunos matriculados: %d\n", turmas[i].totalAlunos);

        int totalPresencasTurma = 0;

        // Apresentando dados dos alunos
        printf("Matrículas e Percentual de Frequência dos Alunos:\n");
        for (j = 0; j < turmas[i].totalAlunos; j++) {
            float percentualFrequencia = (turmas[i].alunos[j].presencas / (float)turmas[i].cargaHoraria) * 100;
            printf("Aluno %d: Matrícula %d - Percentual de Frequência: %.2f%%\n", j + 1, turmas[i].alunos[j].matricula, percentualFrequencia);
            totalPresencasTurma += turmas[i].alunos[j].presencas;
        }

        // Calculando e apresentando o valor médio da frequência dos alunos da turma
        float mediaFrequenciaTurma = (totalPresencasTurma / (float)(turmas[i].totalAlunos * turmas[i].cargaHoraria)) * 100;
        printf("Valor médio da frequência dos alunos da turma: %.2f%%\n", mediaFrequenciaTurma);
    }

    return 0;
}
