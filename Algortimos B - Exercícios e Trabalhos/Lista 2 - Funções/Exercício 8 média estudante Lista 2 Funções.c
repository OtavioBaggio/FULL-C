/* 8. Desenvolva um programa para ler as notas 1, 2 e 3 de um estudante. Em uma fun��o, calcule a
m�dia aritm�tica do estudante
*/

#include <stdio.h>
#include <locale.h>

float N1, N2, N3;

void linha(){
    printf("==================================================================================\n");
    return;
}

float mediaEstudante(){
    float mediaA;

    mediaA = (N1 + N2 + N3) / 3;
    return;
}


int main(){
setlocale(LC_ALL, "portuguese");

    //Entrada:
    printf("\t\t****BANCO DE NOTAS DA UFN****\n");
    linha();
    printf("\n\nInsira as 3 notas do aluno ao longo do semestre para calcular sua m�dia: ");
    scanf("%f%f%f", &N1, &N2, &N3);

    //Resultados:
    printf("\nA m�dia do estudante � de: %.1f", mediaEstudante());


return 0;
}
