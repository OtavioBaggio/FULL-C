/* 8. Escrever um programa que leia duas datas no formato dd/mm/aaaa e verifique qual data ocorre
primeiro. Use estruturas para armazenar os dados. Também é necessário o uso da função atoi()
que converte uma string em um número inteiro.
*/

#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>  //Para usar o Atoi sem erro

struct Data{
    int dia;
    int mes;
    int ano;
};

int main(){
setlocale(LC_ALL, "portuguese");
    //Variáveis
    struct Data data1, data2;
    char aux1[11], aux2[11];

    printf("\tVamos analisar duas datas e ver qual ocorre primeiro...\n");
    //Lendo a primeira data:
    printf("\nInsira a primeira data (dd/mm/aaaa): ");
    fgets(aux1, sizeof(aux1), stdin);
    fflush(stdin);
    aux1[10] = '\0';

    //Convertendo a string para inteiro:
    data1.dia = atoi(strtok(aux1, "/"));
    data1.mes = atoi(strtok(NULL, "/"));
    data1.ano = atoi(strtok(NULL, "/"));

    //Lendo a segunda data:
    printf("Insira a segunda data (dd/mm/aaaa): ");
    fgets(aux2, sizeof(aux2), stdin);
    fflush(stdin);
    aux2[10] = '\0';

    //Convertendo a string para inteiro:
    data2.dia = atoi(strtok(aux2, "/"));
    data2.mes = atoi(strtok(NULL, "/"));
    data2.ano = atoi(strtok(NULL, "/"));

    printf("\n");
    //Verificando as datas:
     if (data1.ano < data2.ano) {
        printf("A primeira data (%02d/%02d/%04d) ocorre antes.\n", data1.dia, data1.mes, data1.ano);
    } else if (data1.ano > data2.ano) {
        printf("A segunda data (%02d/%02d/%04d) ocorre antes.\n", data2.dia, data2.mes, data2.ano);
    } else {  // Se os anos forem iguais, comparar os meses
        if (data1.mes < data2.mes) {
            printf("A primeira data (%02d/%02d/%04d) ocorre antes.\n", data1.dia, data1.mes, data1.ano);
        } else if (data1.mes > data2.mes) {
            printf("A segunda data (%02d/%02d/%04d) ocorre antes.\n", data2.dia, data2.mes, data2.ano);
        } else {  // Se os meses forem iguais, comparar os dias
            if (data1.dia < data2.dia) {
                printf("A primeira data (%02d/%02d/%04d) ocorre antes.\n", data1.dia, data1.mes, data1.ano);
            } else if (data1.dia > data2.dia) {
                printf("A segunda data (%02d/%02d/%04d) ocorre antes.\n", data2.dia, data2.mes, data2.ano);
            } else {
                printf("As duas datas são iguais (%02d/%02d/%04d).\n", data1.dia, data1.mes, data1.ano);
            }
        }
    }


return 0;
}
