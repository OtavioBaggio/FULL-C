/* 3. A turma de Algoritmos e Programa��o B tem 17 alunos. Para cada aluno, � necess�rio
armazenar o nome, n�mero de faltas (em horas), os valores das nota 1, nota 2, nota 3 e a m�dia
final. A m�dia das notas � a m�dia aritm�tica e deve ser calculada. Ap�s fazer a leitura dos
valores, calcule a m�dia das notas, para cada aluno e mostre o resultado final de acordo com as
regras:
-> Para ser aprovado, o estudante deve ter 75% de frequ�ncia. Caso
contr�rio, est� Reprovado por Frequ�ncia.
-> Se o estudante tem 75% ou mais de frequ�ncia nas aulas, o resultado
�:
  > Aprovado, se a m�dia final for maior ou igual a 6,0 ou
  > Reprovado, se a m�dia final for menor que 6,0
 Para calcular a frequ�ncia, considere que a disciplina tem 80 horas.
 */
 #include <stdio.h>
 #include <string.h>
 #include <locale.h>

 #define N 17

 struct aluno{
        char nome[50];
        int faltas;
        float n1, n2, n3;
        float media;
        float freq;
 };

 int main(){
 setlocale(LC_ALL, "portuguese");

    struct aluno a[N];
    int i; //operador

    printf("\tLeitura dos dados:\n\n");
    for(i = 0; i < N; i++){
        printf("Dados do aluno %d:\n", i+1);
        printf("Nome: ");
        fflush(stdin);
        gets(a[i].nome);
            printf("N�mero de faltas em horas: ");
            scanf("%d", &a[i].faltas);
                printf("Informe as 3 notas:\n");
                scanf("%f", &a[i].n1);
                scanf("%f", &a[i].n2);
                scanf("%f", &a[i].n3);
                printf("\n");
                    a[i].media = (a[i].n1 + a[i].n2 + a[i].n3) /3;
                    a[i].freq = (float)(80 - a[i].faltas)/ 80;
    }

    for(i = 0; i < N; i++){
        printf("Aluno %s:\n", a[i].nome);
        if(a[i].freq < 0.75){
            printf("REPROVADO por Frequ�ncia\n");
        }else if(a[i].media >= 6){
                printf("APROVADO!\n");
        }else{
                printf("REPROVADO!\n");
        }
        printf("\n");
    }


 return 0;
 }
