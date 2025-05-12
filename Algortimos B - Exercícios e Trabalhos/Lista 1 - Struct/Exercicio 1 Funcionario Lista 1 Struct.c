/* 1. Escreva um programa que faça o controle das informações relativas aos funcionários de uma
determinada empresa. As informações que devem ser armazenadas são: Nome, Salário, Cargo e
Idade. Defina a estrutura de dados e faça a leitura e exibição dos dados para um funcionário.
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
    printf("\t\tCONTROLE DE FUNCIONÁRIOS\n");
    printf("\t\t\tPowered by: UFN\n\n");
    printf("\tInsira a seguir os dados do funcionário:\n");
    printf("Nome: ");
     fgets(a.nome, sizeof(a.nome), stdin);
    // Remove a nova linha ao final de fgets()
    a.nome[strcspn(a.nome, "\n")] = 0;

    printf("Salário: ");
    scanf("%f", &a.salario);

    // Limpar buffer
    while (getchar() != '\n');

    printf("Cargo que o funcionário exerce: ");
    fgets(a.cargo, sizeof(a.cargo), stdin);
    a.cargo[strcspn(a.cargo, "\n")] = 0;

    printf("Idade: ");
    scanf("%d", &a.idade);

    // Imprimindo os resultados coletados:
    printf("\nDados do Funcionário:\n");
    printf("Nome: %s\n", a.nome);
    printf("Salário: R$ %.2f\n", a.salario);
    printf("Cargo: %s\n", a.cargo);
    printf("Idade: %d anos\n", a.idade);


return 0;
}
