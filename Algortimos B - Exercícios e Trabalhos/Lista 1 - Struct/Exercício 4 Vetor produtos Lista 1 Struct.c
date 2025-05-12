/* 4. Escreva um programa que leia um vetor de produtos, com 50 elementos, sendo cada elemento
uma estrutura que contém o nome do produto, seu preço de compra e seu preço de venda.
Depois de lido o vetor, retorne o nome e o índice do produto de menor preço de compra.
*/
#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 2

struct produto{
        char nome[N];
        float precoC;
        float precoV;
};

int main(){
setlocale(LC_ALL, "portuguese");

    struct produto a[N];
    int i;
    int IndiceMenorPreco = 0;
    float menorPreco = 99999999;

    for(i = 0; i < N; i++){
        printf("Nome do produto %d: ", i+1);
        gets(a[i].nome);
        printf("Preço de compra do produto %d: ", i+1);
        scanf("%f", &a[i].precoC);
        printf("Preço de venda do produto %d: ", i+1);
        scanf("%f", &a[i].precoV);
        fflush(stdin);
        if(a[i].precoC < menorPreco){
            menorPreco = a[i].precoC;
            IndiceMenorPreco = i;
        }
        printf("\n");
    }

    printf("O produto %d: %s, possui o menor preço de compra declarado (R$ %.1f)\n", IndiceMenorPreco + 1, a[IndiceMenorPreco].nome, menorPreco);







return 0;
}
