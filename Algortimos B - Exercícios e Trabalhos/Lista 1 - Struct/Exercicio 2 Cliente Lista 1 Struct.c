/* 2. A loja VendeTudo possui 50 clientes. O gerente, para cada cliente, necessita armazenar o nome,
cidade onde mora, o total da compra e o mês que o cliente comprou. Desenvolva o programa
para ler e mostrar os dados.
*/
#include <stdio.h>
#include <string.h>
#include <locale.h>

#define NCLIENTES 50

struct cliente{
        char nome[50];
        char cidade[50];
        float compraTot;
        char mes[50];

};

int main(){
setlocale(LC_ALL, "portuguese");

     struct cliente clientes[NCLIENTES];
     int i;

    printf("\tCADASTRO DE CLIENTES\n");
    printf("\t\tLoja VendeTudo\n");
    printf("\n\nInforme a seguir as informações dos clientes..\n");

    // Lendo os dados dos clientes:
    for(i = 0; i < NCLIENTES; i++) {
        printf("\n\nInforme as informações do cliente %d:\n", i + 1);

        printf("Nome: ");
        fgets(clientes[i].nome, sizeof(clientes[i].nome), stdin);
        clientes[i].nome[strcspn(clientes[i].nome, "\n")] = 0;

        printf("Cidade do cliente: ");
        fgets(clientes[i].cidade, sizeof(clientes[i].cidade), stdin);
        clientes[i].cidade[strcspn(clientes[i].cidade, "\n")] = 0;

        printf("Informe o total da compra em R$ feita pelo cliente na loja: ");
        scanf("%f", &clientes[i].compraTot);

        // Limpar o buffer
        while (getchar() != '\n');

        printf("Qual o mês que o cliente efetuou a compra? ");
        fgets(clientes[i].mes, sizeof(clientes[i].mes), stdin);
        clientes[i].mes[strcspn(clientes[i].mes, "\n")] = 0;
    }

    // Imprimindo os dados dos clientes:
    printf("\n\nDados dos clientes cadastrados:\n");
    for(int i = 0; i < NCLIENTES; i++) {
        printf("\nCliente %d:\n", i + 1);
        printf("Nome: %s\n", clientes[i].nome);
        printf("Cidade: %s\n", clientes[i].cidade);
        printf("Compras totais efetuadas (em R$): %.2f\n", clientes[i].compraTot);
        printf("Mês das transações: %s\n", clientes[i].mes);
    }



return 0;
}
