/* 1. Desenvolva um algoritmo para controlar a quantidade de produtos existentes em uma
Papelaria. Considere que cada produto possui: código (inteiro), nome (até 30 caracteres),
unidade (até 20 caracteres), preço custo, preço de venda e quantidade em estoque. As
seguintes funcionalidades devem estar implementadas:
i. Ler os dados dos produtos informados pelo usuário, enquanto o usuário desejar digitar
(pode ser feita uma pergunta ao usuário, se deseja cadastrar mais um produto).
ii. Para o preço de venda, solicitar ao usuário o percentual de lucro desejado sobre o preço
de custo (o mesmo percentual é aplicado a todos os produtos).
iii. Após a leitura, o usuário pode escolher as opções desejadas:
    a. Listar os dados de todos os produtos.
    b. Listar os dados de um produto, conforme o código digitado pelo usuário.
    c. Listar os produtos cuja quantidade em estoque é zero.
    d. Mostrar os dados do produto de maior valor de venda.
    e. Mostrar os dados do produto de menor valor de venda.
*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

#define MAXP 100   //Número de produto máximo

struct ControleProduto {
    int codigo;                     //Código do produto
    char unid[20];                  //Unidades
    char nome[30];                  //Nome do produto
    float precoCusto, precoVenda;   //Preços referentes ao produto
    int estoque;                    //Para classificar quantos tem em estoque
};

// Função para ler dados dos produtos
void lerProdutos(struct ControleProduto produtos[], int *numProdutos, float percentualLucro) {
    char continuar;
    do {
        printf("\nDigite o código do produto: ");
        scanf("%d", &produtos[*numProdutos].codigo);

        printf("Digite o nome do produto (máx. 30 caracteres): ");
        scanf(" %[^\n]", produtos[*numProdutos].nome);

        printf("Digite a unidade do produto (máx. 20 caracteres): ");
        scanf(" %[^\n]", produtos[*numProdutos].unid);

        printf("Digite o preço de custo do produto: R$ ");
        scanf("%f", &produtos[*numProdutos].precoCusto);

        produtos[*numProdutos].precoVenda = produtos[*numProdutos].precoCusto * (1 + percentualLucro / 100);

        printf("Digite a quantidade em estoque do produto: ");
        scanf("%d", &produtos[*numProdutos].estoque);

        (*numProdutos)++;

        if (*numProdutos >= MAXP) {
            printf("Número máximo de produtos cadastrados.\n");
            break;
        }

        printf("Deseja cadastrar mais um produto? (s/n): ");
        scanf(" %c", &continuar);
    } while (continuar == 's');
}

// Função para listar todos os produtos
void listarTodosProdutos(struct ControleProduto produtos[], int numProdutos) {
    for (int i = 0; i < numProdutos; i++) {
        printf("\nProduto %d:\n", i + 1);
        printf("Código: %d\n", produtos[i].codigo);
        printf("Nome: %s\n", produtos[i].nome);
        printf("Unidade: %s\n", produtos[i].unid);
        printf("Preço de Custo: R$ %.2f\n", produtos[i].precoCusto);
        printf("Preço de Venda: R$ %.2f\n", produtos[i].precoVenda);
        printf("Quantidade em Estoque: %d\n", produtos[i].estoque);
    }
}

// Função para listar um produto por código
void listarProdutoPorCodigo(struct ControleProduto produtos[], int numProdutos, int codigo) {
    for (int i = 0; i < numProdutos; i++) {
        if (produtos[i].codigo == codigo) {
            printf("\nProduto encontrado:\n");
            printf("Código: %d\n", produtos[i].codigo);
            printf("Nome: %s\n", produtos[i].nome);
            printf("Unidade: %s\n", produtos[i].unid);
            printf("Preço de Custo: R$ %.2f\n", produtos[i].precoCusto);
            printf("Preço de Venda: R$ %.2f\n", produtos[i].precoVenda);
            printf("Quantidade em Estoque: %d\n", produtos[i].estoque);
            return;
        }
    }
    printf("Produto com código %d não encontrado.\n", codigo);
}

// Função para listar produtos com estoque zero
void listarProdutosSemEstoque(struct ControleProduto produtos[], int numProdutos) {
    int encontrou = 0;
    for (int i = 0; i < numProdutos; i++) {
        if (produtos[i].estoque == 0) {
            printf("\nProduto com estoque zero:\n");
            printf("Código: %d\n", produtos[i].codigo);
            printf("Nome: %s\n", produtos[i].nome);
            printf("Unidade: %s\n", produtos[i].unid);
            printf("Preço de Custo: R$ %.2f\n", produtos[i].precoCusto);
            printf("Preço de Venda: R$ %.2f\n", produtos[i].precoVenda);
            printf("Quantidade em Estoque: %d\n", produtos[i].estoque);
            encontrou = 1;
        }
    }
    if (!encontrou) {
        printf("Nenhum produto com estoque zero.\n");
    }
}

// Função para mostrar o produto com maior valor de venda
void mostrarProdutoMaiorValorVenda(struct ControleProduto produtos[], int numProdutos) {
    if (numProdutos == 0) {
        printf("Nenhum produto cadastrado.\n");
        return;
    }
    int index = 0;
    for (int i = 1; i < numProdutos; i++) {
        if (produtos[i].precoVenda > produtos[index].precoVenda) {
            index = i;
        }
    }
    printf("\nProduto com maior valor de venda:\n");
    printf("Código: %d\n", produtos[index].codigo);
    printf("Nome: %s\n", produtos[index].nome);
    printf("Unidade: %s\n", produtos[index].unid);
    printf("Preço de Custo: R$ %.2f\n", produtos[index].precoCusto);
    printf("Preço de Venda: R$ %.2f\n", produtos[index].precoVenda);
    printf("Quantidade em Estoque: %d\n", produtos[index].estoque);
}

// Função para mostrar o produto com menor valor de venda
void mostrarProdutoMenorValorVenda(struct ControleProduto produtos[], int numProdutos) {
    if (numProdutos == 0) {
        printf("Nenhum produto cadastrado.\n");
        return;
    }
    int index = 0;
    for (int i = 1; i < numProdutos; i++) {
        if (produtos[i].precoVenda < produtos[index].precoVenda) {
            index = i;
        }
    }
    printf("\nProduto com menor valor de venda:\n");
    printf("Código: %d\n", produtos[index].codigo);
    printf("Nome: %s\n", produtos[index].nome);
    printf("Unidade: %s\n", produtos[index].unid);
    printf("Preço de Custo: R$ %.2f\n", produtos[index].precoCusto);
    printf("Preço de Venda: R$ %.2f\n", produtos[index].precoVenda);
    printf("Quantidade em Estoque: %d\n", produtos[index].estoque);
}

int main(){
    setlocale(LC_ALL, "portuguese");

    struct ControleProduto produtos[MAXP];
    int numProdutos = 0;
    float percentualLucro;

    printf("Digite o percentual de lucro desejado sobre o preço de custo: ");
    scanf("%f", &percentualLucro);

    lerProdutos(produtos, &numProdutos, percentualLucro);

    char opcao;
    do {
        printf("\nEscolha uma opção:\n");
        printf("a. Listar os dados de todos os produtos.\n");
        printf("b. Listar os dados de um produto, conforme o código digitado.\n");
        printf("c. Listar os produtos cuja quantidade em estoque é zero.\n");
        printf("d. Mostrar os dados do produto de maior valor de venda.\n");
        printf("e. Mostrar os dados do produto de menor valor de venda.\n");
        printf("f. Sair.\n");
        printf("Digite a opção desejada: ");
        scanf(" %c", &opcao);

        switch (opcao) {
            case 'a':
                listarTodosProdutos(produtos, numProdutos);
                break;
            case 'b': {
                int codigo;
                printf("Digite o código do produto que deseja buscar: ");
                scanf("%d", &codigo);
                listarProdutoPorCodigo(produtos, numProdutos, codigo);
                break;
            }
            case 'c':
                listarProdutosSemEstoque(produtos, numProdutos);
                break;
            case 'd':
                mostrarProdutoMaiorValorVenda(produtos, numProdutos);
                break;
            case 'e':
                mostrarProdutoMenorValorVenda(produtos, numProdutos);
                break;
            case 'f':
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
                break;
        }
    } while (opcao != 'f');

    return 0;
}
