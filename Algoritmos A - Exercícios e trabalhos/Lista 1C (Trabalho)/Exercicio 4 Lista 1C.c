/* 4. Considere a cotação do dia do Dólar Americano em relação ao Real Brasileiro:
US$ 1,00 = R$ 4,98
Desenvolva um algoritmo que leia um valor em Reais, informado pelo usuário, calcule e mostre o valor
equivalente em Dólares, conforme a cotação informada na questão.
*/
#include <stdio.h>
#include <locale.h>

int main(){
    float Dolar;
    float Real;

    setlocale(LC_ALL, "Portuguese");

    //Dados
    printf("Bem vindo, usuário, ao conversor de moeda brasileira(Real) para moeda americana(Dólar)\n");
    printf("Por favor, informe o valor que deseja converter:\nR$");
    scanf("%f", &Real);

    //Cálculos
    Dolar = Real / 4.98;

    //Saída
    printf("Este valor em dólar é igual a: US$ %.3f\n", Dolar);
    system("pause");

return 0;
}
