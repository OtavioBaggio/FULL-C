/* 5. Escreva um programa que leia o preço de um produto, em reais, e o percentual de desconto.
Faça uma função para calcular e retornar o valor do desconto em reais.
*/

#include <stdio.h>
#include <locale.h>

void linha(){
    printf("======================================================\n");
    return;
}

float preco, percentual;  //Variáveis Globais

//Função para calcular o desconto(R$):
float CalcularDesconto(){
     float Desconto;

     Desconto = (preco * percentual) / 100;
     return Desconto;
}

int main(){
setlocale(LC_ALL, "portuguese");

    //Entrada de dados:
    printf("Informe os valores referentes ao produto para calcularmos o desconto:\n");
    printf("Preço do produto: R$ ");
    scanf("%f", &preco);
    printf("Percentual de desconto: ");
    scanf("%f", &percentual);

    //Resultado:
    printf("\n");
    linha();
    linha();
    printf("\nO referido produto terá um desconto de: R$ %.1f", CalcularDesconto());


return 0;
}
