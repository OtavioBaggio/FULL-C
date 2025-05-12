/* 6. Escreva um algoritmo que leia duas datas, na forma dia, mês e ano e informe qual é a mais
recente.
*/
#include <stdio.h>
#include <locale.h>

int main(){
    int dia1, mes1, ano1;
    int dia2, mes2, ano2;

    setlocale(LC_ALL, "Portuguese");

    //Entrada
    printf("Bem-vindo usuário, ao comparador de datas, irei comparar duas e mostrar qual é a mais recente...\n");
    printf("Informe a primeira data: dia/mês/ano\n");
    scanf("%d/%d/%d", &dia1, &mes1, &ano1);
    printf("Por fim, informe uma segunda data: dia/mês/ano\n");
    scanf("%d/%d/%d", &dia2, &mes2, &ano2);

    //Verificador de data
    if (ano1 > ano2){
        printf("A primeira data é a mais recente...\n");
    } else if (ano2 > ano1){
            printf("A segunda data é a mais recente...\n");
    } else {
        if (mes1 > mes2){
            printf("A primeira data é a mais recente...\n");
        } else if (mes2 > mes1){
            printf("A segunda data é a mais recente...\n");
        } else {
            if (dia1 > dia2){
                printf("A primeira data é a mais recente...\n");
            } else if (dia2 > dia1){
                      printf("A segunda data é a mais recente...\n");
            } else {
                      printf("As duas datas são iguais...\n");
    } 
    }
    }

    system("pause");
return 0;
}
