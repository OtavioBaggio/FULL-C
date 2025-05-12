/* 1. Escreva um programa que fa�a o controle das informa��es relativas aos funcion�rios de uma
determinada empresa. As informa��es que devem ser armazenadas s�o: Nome, Sal�rio, Cargo e
Idade. Defina a estrutura de dados e fa�a a leitura e exibi��o dos dados para um funcion�rio.
*/
#include <stdio.h>
#include <string.h>
#include <locale.h>

struct controle{
        char nome[30];
        char cargo[40];
        float salario;
        int idade;

};

int main(){
setlocale(LC_ALL, "portuguese");

    struct controle a;

    //Lendo os dados:
    printf("\t\tCONTROLE DE FUNCION�RIOS\n");
    printf("\t\t\tPowered by: UFN\n\n");
    printf("\tInsira a seguir os dados do funcion�rio:\n");
    printf("Nome: ");
     fgets(a.nome, sizeof(a.nome), stdin);
    // Remove a nova linha ao final de fgets()
    a.nome[strcspn(a.nome, "\n")] = 0;

    printf("Sal�rio: ");
    scanf("%f", &a.salario);

    // Limpar buffer
    while (getchar() != '\n');

    printf("Cargo que o funcion�rio exerce: ");
    fgets(a.cargo, sizeof(a.cargo), stdin);
    a.cargo[strcspn(a.cargo, "\n")] = 0;

    printf("Idade: ");
    scanf("%d", &a.idade);

    // Imprimindo os resultados coletados:
    printf("\nDados do Funcion�rio:\n");
    printf("Nome: %s\n", a.nome);
    printf("Sal�rio: R$ %.2f\n", a.salario);
    printf("Cargo: %s\n", a.cargo);
    printf("Idade: %d anos\n", a.idade);


return 0;
}
