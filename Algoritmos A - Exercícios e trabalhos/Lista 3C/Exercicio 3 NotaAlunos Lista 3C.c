/* 3. Escreva um algoritmo para ler duas notas de cada aluno, de uma turma de 40 alunos. Para
cada aluno, escreva na tela a palavra “Aprovado” se a média das duas notas do aluno for
maior ou igual a 7,0. Caso a média seja inferior a 7,0, o programa deve ler a nota do
exame e calcular a média final. Se esta média for maior ou igual a 5,0, o programa deve
escrever “Aprovado”, caso contrário deve escrever “Reprovado”.
*/
#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
    float nota1, nota2, notaExame, media;
    int i, alunos = 40;

    printf("Bem-vindo ao cadastramento de rendimento educacional, por favor insira a seguir os devidos dados dos respectivos 40 alunos:\n");

    for (i = 1; i <= alunos; i++){
        printf("Digite as duas notas do Aluno %d: ", i);
        scanf("%f %f", &nota1, &nota2);

        media = nota1 + nota2 / 2;

        if (media >= 7){
            printf("Aluno %d APROVADO!\n", i);
        }else {
                printf("Digite a nota do Exame do aluno %d:\n", i);
                scanf("%f", &notaExame);

        media = (media + notaExame)/ 2;

        if (media >= 5){
            printf("O aluno %d está APROVADO!\n", i);
        }else {
                printf("Aluno %d está REPROVADO!\n", i);
        }
        }
    }


    system("pause");
return 0;
}
