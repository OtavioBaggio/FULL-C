/* 1. Desenvolva um algoritmo para controlar a quantidade de produtos existentes em uma
Papelaria. Considere que cada produto possui: c�digo (inteiro), nome (at� 30 caracteres),
unidade (at� 20 caracteres), pre�o custo, pre�o de venda e quantidade em estoque. As
seguintes funcionalidades devem estar implementadas:
i. Ler os dados dos produtos informados pelo usu�rio, enquanto o usu�rio desejar digitar
(pode ser feita uma pergunta ao usu�rio, se deseja cadastrar mais um produto).
ii. Para o pre�o de venda, solicitar ao usu�rio o percentual de lucro desejado sobre o pre�o
de custo (o mesmo percentual � aplicado a todos os produtos).
iii. Ap�s a leitura, o usu�rio pode escolher as op��es desejadas:
    a. Listar os dados de todos os produtos.
    b. Listar os dados de um produto, conforme o c�digo digitado pelo usu�rio.
    c. Listar os produtos cuja quantidade em estoque � zero.
    d. Mostrar os dados do produto de maior valor de venda.
    e. Mostrar os dados do produto de menor valor de venda.
*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

#define MAXP 100   //N�mero de produto m�ximo

struct ControleProduto {
    int codigo;                     //C�digo do produto
    char unid[20];                  //Unidades
    char nome[30];                  //Nome do produto
    float precoCusto, precoVenda;   //Pre�os referentes ao produto
    int estoque;                    //Para classificar quantos tem em estoque
};

// Fun��o para ler dados dos produtos
void lerProdutos(struct ControleProduto produtos[], int *numProdutos, float percentualLucro) {
    char continuar;
    do {
        printf("\nDigite o c�digo do produto: ");
        scanf("%d", &produtos[*numProdutos].codigo);

        printf("Digite o nome do produto (m�x. 30 caracteres): ");
        scanf(" %[^\n]", produtos[*numProdutos].nome);

        printf("Digite a unidade do produto (m�x. 20 caracteres): ");
        scanf(" %[^\n]", produtos[*numProdutos].unid);

        printf("Digite o pre�o de custo do produto: R$ ");
        scanf("%f", &produtos[*numProdutos].precoCusto);

        produtos[*numProdutos].precoVenda = produtos[*numProdutos].precoCusto * (1 + percentualLucro / 100);

        printf("Digite a quantidade em estoque do produto: ");
        scanf("%d", &produtos[*numProdutos].estoque);

        (*numProdutos)++;

        if (*numProdutos >= MAXP) {
            printf("N�mero m�ximo de produtos cadastrados.\n");
            break;
        }

        printf("Deseja cadastrar mais um produto? (s/n): ");
        scanf(" %c", &continuar);
    } while (continuar == 's');
}

// Fun��o para listar todos os produtos
void listarTodosProdutos(struct ControleProduto produtos[], int numProdutos) {
    for (int i = 0; i < numProdutos; i++) {
        printf("\nProduto %d:\n", i + 1);
        printf("C�digo: %d\n", produtos[i].codigo);
        printf("Nome: %s\n", produtos[i].nome);
        printf("Unidade: %s\n", produtos[i].unid);
        printf("Pre�o de Custo: R$ %.2f\n", produtos[i].precoCusto);
        printf("Pre�o de Venda: R$ %.2f\n", produtos[i].precoVenda);
        printf("Quantidade em Estoque: %d\n", produtos[i].estoque);
    }
}

// Fun��o para listar um produto por c�digo
void listarProdutoPorCodigo(struct ControleProduto produtos[], int numProdutos, int codigo) {
    for (int i = 0; i < numProdutos; i++) {
        if (produtos[i].codigo == codigo) {
            printf("\nProduto encontrado:\n");
            printf("C�digo: %d\n", produtos[i].codigo);
            printf("Nome: %s\n", produtos[i].nome);
            printf("Unidade: %s\n", produtos[i].unid);
            printf("Pre�o de Custo: R$ %.2f\n", produtos[i].precoCusto);
            printf("Pre�o de Venda: R$ %.2f\n", produtos[i].precoVenda);
            printf("Quantidade em Estoque: %d\n", produtos[i].estoque);
            return;
        }
    }
    printf("Produto com c�digo %d n�o encontrado.\n", codigo);
}

// Fun��o para listar produtos com estoque zero
void listarProdutosSemEstoque(struct ControleProduto produtos[], int numProdutos) {
    int encontrou = 0;
    for (int i = 0; i < numProdutos; i++) {
        if (produtos[i].estoque == 0) {
            printf("\nProduto com estoque zero:\n");
            printf("C�digo: %d\n", produtos[i].codigo);
            printf("Nome: %s\n", produtos[i].nome);
            printf("Unidade: %s\n", produtos[i].unid);
            printf("Pre�o de Custo: R$ %.2f\n", produtos[i].precoCusto);
            printf("Pre�o de Venda: R$ %.2f\n", produtos[i].precoVenda);
            printf("Quantidade em Estoque: %d\n", produtos[i].estoque);
            encontrou = 1;
        }
    }
    if (!encontrou) {
        printf("Nenhum produto com estoque zero.\n");
    }
}

// Fun��o para mostrar o produto com maior valor de venda
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
    printf("C�digo: %d\n", produtos[index].codigo);
    printf("Nome: %s\n", produtos[index].nome);
    printf("Unidade: %s\n", produtos[index].unid);
    printf("Pre�o de Custo: R$ %.2f\n", produtos[index].precoCusto);
    printf("Pre�o de Venda: R$ %.2f\n", produtos[index].precoVenda);
    printf("Quantidade em Estoque: %d\n", produtos[index].estoque);
}

// Fun��o para mostrar o produto com menor valor de venda
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
    printf("C�digo: %d\n", produtos[index].codigo);
    printf("Nome: %s\n", produtos[index].nome);
    printf("Unidade: %s\n", produtos[index].unid);
    printf("Pre�o de Custo: R$ %.2f\n", produtos[index].precoCusto);
    printf("Pre�o de Venda: R$ %.2f\n", produtos[index].precoVenda);
    printf("Quantidade em Estoque: %d\n", produtos[index].estoque);
}

int main(){
    setlocale(LC_ALL, "portuguese");

    struct ControleProduto produtos[MAXP];
    int numProdutos = 0;
    float percentualLucro;

    printf("Digite o percentual de lucro desejado sobre o pre�o de custo: ");
    scanf("%f", &percentualLucro);

    lerProdutos(produtos, &numProdutos, percentualLucro);

    char opcao;
    do {
        printf("\nEscolha uma op��o:\n");
        printf("a. Listar os dados de todos os produtos.\n");
        printf("b. Listar os dados de um produto, conforme o c�digo digitado.\n");
        printf("c. Listar os produtos cuja quantidade em estoque � zero.\n");
        printf("d. Mostrar os dados do produto de maior valor de venda.\n");
        printf("e. Mostrar os dados do produto de menor valor de venda.\n");
        printf("f. Sair.\n");
        printf("Digite a op��o desejada: ");
        scanf(" %c", &opcao);

        switch (opcao) {
            case 'a':
                listarTodosProdutos(produtos, numProdutos);
                break;
            case 'b': {
                int codigo;
                printf("Digite o c�digo do produto que deseja buscar: ");
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
                printf("Op��o inv�lida. Tente novamente.\n");
                break;
        }
    } while (opcao != 'f');

    return 0;
}
