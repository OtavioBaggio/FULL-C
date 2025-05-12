/* 1 – Escrever um algoritmo para ler o código de um vendedor de uma empresa, seu salário fixo e o total de
vendas efetuadas por ele. Cada vendedor recebe um salário fixo, mais uma comissão proporcional às vendas
efetuadas por ele. A comissão é de 3% sobre o total de vendas até R$1.000,00; 5% de R$1.000,00 à R$2.000,00
e 10% para vendas acima de R$2.000,00. Escrever o código do vendedor, o total de suas vendas, seu salário
fixo e seu salário total
*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    //Variáveis
    int cod;        //Código do vendedor
    float salF;     //Salário Fixo do vendedor
    float vendTot;  //Vendas Totais realizadas pelo vendedor
    float comis;    //Comissão
    float salTot;   //Salário Total desse pracista com todas as informações aplicadas

    //Lendo e imprimindo os principais dados referente ao vendedor
    printf("\tBem-vindo ao Financial Registers... Insira a seguir os dados referentes ao vendedor de sua empresa\n");
    printf("\nCódigo do vendedor: ");
    scanf("%d", &cod);
    printf("\nSalário fixo do vendedor: ");
    scanf("%f", &salF);
    printf("\nQuantas vendas o pracista realizou esse mês (em R$): ");
    scanf("%f", &vendTot);

    //Aplicando as condições referente à ordem de serviço do cliente
    if(vendTot <= 1000){
        comis = vendTot * 0.03;
    }else if(vendTot <= 2000){
            comis = 1000 * 0.03 + (vendTot - 1000) * 0.05;
    }else{
            comis = 1000 * 0.03 + 1000 * 0.05 + (vendTot - 2000) * 0.10;
    }

    //Calculando o salário total desse vendedor
    salTot = salF + comis;

    //Mostrando os resultados, com as informações informadas e processadas:
    printf("\n\nCódigo do vendedor: %d", cod);
    printf("\nVendas realizadas (em R$): %.1f", vendTot);
    printf("\nSalário fixo: %.1f", salF);
    printf("\nSalário Total do vendedor: %.1f", salTot);


return 0;
}
