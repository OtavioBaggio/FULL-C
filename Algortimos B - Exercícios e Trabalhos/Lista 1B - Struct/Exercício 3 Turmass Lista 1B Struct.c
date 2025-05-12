/* 3. Estenda a solu��o da quest�o 2, para armazenar os dados de todas as turmas ofertadas no
semestre. Considere que no m�ximo s�o ofertadas 32 turmas.
*/

#include <stdio.h>
#include <locale.h>

void linha(){
    printf("======================================================\n");
    return;
}

#define MAX_ALUNOS 40  // N�mero m�ximo de alunos por turma
#define MAX_TURMAS 32  // N�mero m�ximo de turmas por semestre

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

    // Lendo o n�mero de turmas a serem cadastradas
    printf("Digite a quantidade de turmas ofertadas no semestre (at� %d): ", MAX_TURMAS);
    scanf("%d", &numTurmas);

    // Lendo os dados de cada turma
    for (i = 0; i < numTurmas; i++) {
        linha();
        printf("\nCadastro da turma %d:\n", i + 1);

        printf("Digite o c�digo da turma: ");
        scanf("%d", &turmas[i].codigo);

        printf("Digite o nome da disciplina (at� 50 caracteres): ");
        getchar();  // Limpar o buffer
        fgets(turmas[i].disciplina, sizeof(turmas[i].disciplina), stdin);

        printf("Digite a carga hor�ria (em horas): ");
        scanf("%d", &turmas[i].cargaHoraria);

        printf("Digite o nome do professor (at� 60 caracteres): ");
        getchar();  // Limpar o buffer
        fgets(turmas[i].nomeProf, sizeof(turmas[i].nomeProf), stdin);

        printf("Digite a quantidade de alunos matriculados (at� %d): ", MAX_ALUNOS);
        scanf("%d", &turmas[i].totalAlunos);

        // Lendo dados dos alunos da turma atual
        for (j = 0; j < turmas[i].totalAlunos; j++) {
            linha();
            printf("Digite a matr�cula do aluno %d: ", j + 1);
            scanf("%d", &turmas[i].alunos[j].matricula);

            printf("Digite a quantidade de presen�as do aluno %d: ", j + 1);
            scanf("%d", &turmas[i].alunos[j].presencas);
        }
    }

    // Apresentando os dados de todas as turmas
    for (i = 0; i < numTurmas; i++) {
        linha();
        linha();
        printf("\nDados da Turma %d:\n", i + 1);
        printf("C�digo: %d\n", turmas[i].codigo);
        printf("Disciplina: %s", turmas[i].disciplina);
        printf("Carga Hor�ria: %d\n", turmas[i].cargaHoraria);
        printf("Professor: %s", turmas[i].nomeProf);
        printf("Quantidade de alunos matriculados: %d\n", turmas[i].totalAlunos);

        int totalPresencasTurma = 0;

        // Apresentando dados dos alunos
        printf("Matr�culas e Percentual de Frequ�ncia dos Alunos:\n");
        for (j = 0; j < turmas[i].totalAlunos; j++) {
            float percentualFrequencia = (turmas[i].alunos[j].presencas / (float)turmas[i].cargaHoraria) * 100;
            printf("Aluno %d: Matr�cula %d - Percentual de Frequ�ncia: %.2f%%\n", j + 1, turmas[i].alunos[j].matricula, percentualFrequencia);
            totalPresencasTurma += turmas[i].alunos[j].presencas;
        }

        // Calculando e apresentando o valor m�dio da frequ�ncia dos alunos da turma
        float mediaFrequenciaTurma = (totalPresencasTurma / (float)(turmas[i].totalAlunos * turmas[i].cargaHoraria)) * 100;
        printf("Valor m�dio da frequ�ncia dos alunos da turma: %.2f%%\n", mediaFrequenciaTurma);
    }

    return 0;
}
